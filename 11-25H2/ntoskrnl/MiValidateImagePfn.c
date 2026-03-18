/*
 * XREFs of MiValidateImagePfn @ 0x140946B4C
 * Callers:
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x1403F3C40 (MiValidateInPage.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x140224530 (MiMakeProtectionPfnCompatible.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMarkPfnVerified @ 0x1403F4204 (MiMarkPfnVerified.c)
 *     MiControlAreaHasHostRelocationsApplied @ 0x1403F435C (MiControlAreaHasHostRelocationsApplied.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     MiReleaseFaultPte @ 0x14066CDE0 (MiReleaseFaultPte.c)
 *     MiReserveFaultPte @ 0x14066CE78 (MiReserveFaultPte.c)
 *     KeCopyPage @ 0x1406A8140 (KeCopyPage.c)
 *     SeValidateImageData @ 0x140946EC0 (SeValidateImageData.c)
 *     MiRevertRelocatedImagePfn @ 0x140946F00 (MiRevertRelocatedImagePfn.c)
 *     MiGetSectionStrongImageReference @ 0x1409470C8 (MiGetSectionStrongImageReference.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiValidateImagePfn(
        ULONG_PTR BugCheckParameter2,
        int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        int a8,
        int a9)
{
  __int64 v10; // r13
  _QWORD *v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r14
  int v14; // r9d
  void *v15; // rsi
  int v16; // edx
  char v17; // r8
  char v18; // r10
  int v19; // ebp
  __int64 v20; // r12
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rax
  ULONG_PTR v23; // rbx
  int v24; // ebx
  char v25; // dl
  __int64 result; // rax
  __int64 v27; // rax
  int v28; // eax
  int v29; // eax
  char v30; // [rsp+30h] [rbp-58h]
  int v31; // [rsp+90h] [rbp+8h]
  char v34; // [rsp+B0h] [rbp+28h]

  v10 = 48 * a7 - 0x220000000000LL;
  v11 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 96) & 0xFFFFFFFFFFFFFFF8uLL);
  v12 = v11[5] & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (*(_DWORD *)(BugCheckParameter2 + 92) & 0xC0000) != 0 && !v11[8] )
  {
    result = MiGetSectionStrongImageReference(*(_QWORD *)(BugCheckParameter2 + 96) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (int)result < 0 )
      return result;
  }
  v13 = MiReservePtes((__int64)&qword_140E37328, 1u);
  if ( v13 )
  {
    v34 = 0;
    v14 = 1;
  }
  else
  {
    if ( ((MiFlags & 0x2000) == 0 || (*(_DWORD *)(BugCheckParameter2 + 92) & 0xC0000) == 0) && !a9 )
      return 3221225626LL;
    v13 = MiReserveFaultPte();
    if ( !v13 )
      return 3221225626LL;
    v14 = 1;
    v34 = 1;
  }
  v15 = 0LL;
  v16 = a8 | 2;
  v31 = 0;
  v17 = 0;
  v30 = 0;
  v18 = 3;
  if ( (a6 & 2) == 0 )
    v16 = a8;
  if ( (MiFlags & 0x2000) == 0 || (*(_DWORD *)(BugCheckParameter2 + 92) & 0xC0000) == 0 )
  {
    v19 = v16;
    if ( a9 )
    {
      LOBYTE(v28) = MiControlAreaHasHostRelocationsApplied(BugCheckParameter2);
      if ( !v28 )
        goto LABEL_9;
      v17 = v14;
      v30 = v14;
    }
    goto LABEL_8;
  }
  v19 = v16;
  if ( a9 )
  {
    LOBYTE(v29) = MiControlAreaHasHostRelocationsApplied(BugCheckParameter2);
    if ( !v29 )
      goto LABEL_9;
    v17 = v18;
    v30 = v18;
LABEL_8:
    v31 = v14;
    goto LABEL_9;
  }
  if ( v11[4] )
    v19 = v16 | 1;
LABEL_9:
  v20 = (__int64)(v13 << 25) >> 16;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v14 + (v18 & (unsigned __int8)-((v17 & 2) != 0)), v10);
  ValidPte = MiMakeValidPte(v13, a7, ProtectionPfnCompatible | 0x20000000u);
  v23 = ValidPte;
  if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v13 >= MiGetPteAddress(0xFFFF800000000000uLL) )
    MiCheckLinearProtectedPteAccessedBit(v13, v23, 128);
  *(_QWORD *)v13 = v23;
  if ( !v31 )
    goto LABEL_11;
  v27 = MiRevertRelocatedImagePfn((__int64)(v13 << 25) >> 16, BugCheckParameter2, v30);
  v15 = (void *)v27;
  if ( v27 == -1 )
  {
    v15 = 0LL;
LABEL_11:
    v24 = SeValidateImageData(v12, v20, 4096, a2, v19, a3);
    if ( v24 < 0 )
    {
      _InterlockedIncrement(&dword_140E2D544);
      if ( v15 && (v30 & 2) != 0 )
        KeCopyPage(v20, (__int64)v15);
    }
    else
    {
      v25 = 0;
      if ( (MiFlags & 0x20000) != 0
        && (*(_DWORD *)(BugCheckParameter2 + 92) & 0xC0000) == 0
        && ((*(_BYTE *)(v10 + 16) >> 5) & 2) != 0 )
      {
        v25 = 3;
      }
      if ( (*(_DWORD *)(v10 + 16) & 0x400LL) != 0 )
        MiMarkPfnVerified(v10, v25);
    }
    goto LABEL_15;
  }
  if ( v27 )
  {
    if ( (v30 & 2) == 0 )
      v20 = v27;
    goto LABEL_11;
  }
  v24 = -1073741670;
LABEL_15:
  if ( v34 )
    MiReleaseFaultPte((_QWORD *)v13);
  else
    MiReleasePtes((__int64)&qword_140E37328, (unsigned __int64 *)v13, 1u);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)v24;
}
