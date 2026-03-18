/*
 * XREFs of MiValidateImagePfn @ 0x140957464
 * Callers:
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x140436770 (MiValidateInPage.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x140313770 (MiMakeProtectionPfnCompatible.c)
 *     MiMarkPfnVerified @ 0x140436D24 (MiMarkPfnVerified.c)
 *     MiControlAreaHasHostRelocationsApplied @ 0x140436E7C (MiControlAreaHasHostRelocationsApplied.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     MiReleaseFaultPte @ 0x1406786EC (MiReleaseFaultPte.c)
 *     MiReserveFaultPte @ 0x140678784 (MiReserveFaultPte.c)
 *     KeCopyPage @ 0x1406B3410 (KeCopyPage.c)
 *     SeValidateImageData @ 0x1409577F4 (SeValidateImageData.c)
 *     MiRevertRelocatedImagePfn @ 0x140957834 (MiRevertRelocatedImagePfn.c)
 *     MiGetSectionStrongImageReference @ 0x1409593FC (MiGetSectionStrongImageReference.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiValidateImagePfn(
        ULONG_PTR a1,
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
  int v20; // eax
  __int64 v21; // r12
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rax
  ULONG_PTR v24; // rbx
  int v25; // ebx
  char v26; // dl
  __int64 result; // rax
  __int64 v28; // rax
  int v29; // eax
  char v30; // [rsp+30h] [rbp-58h]
  int v31; // [rsp+90h] [rbp+8h]
  char v34; // [rsp+B0h] [rbp+28h]

  v10 = 48 * a7 - 0x220000000000LL;
  v11 = (_QWORD *)(*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL);
  v12 = v11[5] & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 && !v11[8] )
  {
    result = MiGetSectionStrongImageReference(*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (int)result < 0 )
      return result;
  }
  v13 = MiReservePtes((__int64)&qword_140E37568, 1u);
  if ( v13 )
  {
    v34 = 0;
    v14 = 1;
  }
  else
  {
    if ( ((MiFlags & 0x2000) == 0 || (*(_DWORD *)(a1 + 92) & 0xC0000) == 0) && !a9 )
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
  if ( (MiFlags & 0x2000) == 0 || (*(_DWORD *)(a1 + 92) & 0xC0000) == 0 )
  {
    v19 = v16;
    if ( a9 )
    {
      LOBYTE(v20) = MiControlAreaHasHostRelocationsApplied(a1);
      if ( !v20 )
        goto LABEL_10;
      v17 = v14;
      v30 = v14;
    }
    goto LABEL_8;
  }
  v19 = v16;
  if ( a9 )
  {
    LOBYTE(v29) = MiControlAreaHasHostRelocationsApplied(a1);
    if ( !v29 )
      goto LABEL_10;
    v17 = v18;
    v30 = v18;
LABEL_8:
    v31 = v14;
    goto LABEL_10;
  }
  if ( v11[4] )
    v19 = v16 | 1;
LABEL_10:
  v21 = (__int64)(v13 << 25) >> 16;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v14 + (v18 & (unsigned __int8)-((v17 & 2) != 0)), v10);
  ValidPte = MiMakeValidPte(v13, a7, ProtectionPfnCompatible | 0x20000000u);
  v24 = ValidPte;
  if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v13 >= MiGetPteAddress(0xFFFF800000000000uLL) )
    MiCheckLinearProtectedPteAccessedBit(v13, v24, 128);
  *(_QWORD *)v13 = v24;
  if ( !v31 )
    goto LABEL_12;
  v28 = MiRevertRelocatedImagePfn((__int64)(v13 << 25) >> 16, a1, v30);
  v15 = (void *)v28;
  if ( v28 == -1 )
  {
    v15 = 0LL;
LABEL_12:
    v25 = SeValidateImageData(v12, v21, 4096, a2, v19, a3);
    if ( v25 < 0 )
    {
      _InterlockedIncrement(&dword_140E2D784);
      if ( v15 && (v30 & 2) != 0 )
        KeCopyPage(v21, (__int64)v15);
    }
    else
    {
      v26 = 0;
      if ( (MiFlags & 0x20000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) == 0 && ((*(_BYTE *)(v10 + 16) >> 5) & 2) != 0 )
        v26 = 3;
      if ( (*(_DWORD *)(v10 + 16) & 0x400LL) != 0 )
        MiMarkPfnVerified(v10, v26);
    }
    goto LABEL_16;
  }
  if ( v28 )
  {
    if ( (v30 & 2) == 0 )
      v21 = v28;
    goto LABEL_12;
  }
  v25 = -1073741670;
LABEL_16:
  if ( v34 )
    MiReleaseFaultPte((_QWORD *)v13);
  else
    MiReleasePtes((__int64)&qword_140E37568, (_QWORD *)v13, 1u);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)v25;
}
