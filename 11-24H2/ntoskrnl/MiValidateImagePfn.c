/*
 * XREFs of MiValidateImagePfn @ 0x14093AE5C
 * Callers:
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x1404291F0 (MiValidateInPage.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1403F26B0 (MiMakeProtectionPfnCompatible.c)
 *     MiMarkPfnVerified @ 0x1404297A4 (MiMarkPfnVerified.c)
 *     MiControlAreaHasHostRelocationsApplied @ 0x1404298FC (MiControlAreaHasHostRelocationsApplied.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiReleaseFaultPte @ 0x140679878 (MiReleaseFaultPte.c)
 *     MiReserveFaultPte @ 0x140679910 (MiReserveFaultPte.c)
 *     KeCopyPage @ 0x1406B43B0 (KeCopyPage.c)
 *     MiGetSectionStrongImageReference @ 0x14093AE14 (MiGetSectionStrongImageReference.c)
 *     SeValidateImageData @ 0x14093B1EC (SeValidateImageData.c)
 *     MiRevertRelocatedImagePfn @ 0x14093B22C (MiRevertRelocatedImagePfn.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 result; // rax
  __int64 v30; // rax
  int v31; // eax
  char v32; // [rsp+30h] [rbp-58h]
  int v33; // [rsp+90h] [rbp+8h]
  char v36; // [rsp+B0h] [rbp+28h]

  v10 = 48 * a7 - 0x220000000000LL;
  v11 = (_QWORD *)(*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL);
  v12 = v11[5] & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 && !v11[8] )
  {
    result = MiGetSectionStrongImageReference(*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (int)result < 0 )
      return result;
  }
  v13 = MiReservePtes((__int64)&qword_140E376A8, 1u);
  if ( v13 )
  {
    v36 = 0;
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
    v36 = 1;
  }
  v15 = 0LL;
  v16 = a8 | 2;
  v33 = 0;
  v17 = 0;
  v32 = 0;
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
      v32 = v14;
    }
    goto LABEL_8;
  }
  v19 = v16;
  if ( a9 )
  {
    LOBYTE(v31) = MiControlAreaHasHostRelocationsApplied(a1);
    if ( !v31 )
      goto LABEL_10;
    v17 = v18;
    v32 = v18;
LABEL_8:
    v33 = v14;
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
    MiCheckLinearProtectedPteAccessedBit(v13, v24, 128LL);
  *(_QWORD *)v13 = v24;
  if ( !v33 )
    goto LABEL_12;
  v30 = MiRevertRelocatedImagePfn((__int64)(v13 << 25) >> 16, a1, v32);
  v15 = (void *)v30;
  if ( v30 == -1 )
  {
    v15 = 0LL;
LABEL_12:
    v25 = SeValidateImageData(v12, v21, 4096, a2, v19, a3);
    if ( v25 < 0 )
    {
      _InterlockedIncrement(&dword_140E2D8C4);
      if ( v15 && (v32 & 2) != 0 )
        KeCopyPage(v21, (__int64)v15);
    }
    else
    {
      v28 = 0LL;
      if ( (MiFlags & 0x20000) != 0 && (*(_DWORD *)(a1 + 92) & 0xC0000) == 0 && ((*(_BYTE *)(v10 + 16) >> 5) & 2) != 0 )
        v28 = 3LL;
      if ( (*(_DWORD *)(v10 + 16) & 0x400LL) != 0 )
        MiMarkPfnVerified(v10, v28, v26, v27);
    }
    goto LABEL_16;
  }
  if ( v30 )
  {
    if ( (v32 & 2) == 0 )
      v21 = v30;
    goto LABEL_12;
  }
  v25 = -1073741670;
LABEL_16:
  if ( v36 )
    MiReleaseFaultPte((_QWORD *)v13);
  else
    MiReleasePtes((__int64)&qword_140E376A8, (_QWORD *)v13, 1u);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)v25;
}
