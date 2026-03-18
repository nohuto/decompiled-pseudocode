/*
 * XREFs of MiMapDummyPages @ 0x140C3EA3C
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetOptimal @ 0x1402C04C8 (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402C0690 (MiLockWorkingSetOptimal.c)
 *     MiComputeHash64 @ 0x1402CF1C0 (MiComputeHash64.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiIncreaseUsedPtes @ 0x1403837D0 (MiIncreaseUsedPtes.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     MxInstallMoreMemory @ 0x140660BB0 (MxInstallMoreMemory.c)
 */

unsigned __int64 MiMapDummyPages()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // rdi
  char *AnyMultiplexedVm; // r12
  void **v3; // r15
  ULONG_PTR ValidPte; // rbx
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r13
  int v8; // r14d
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 result; // rax
  unsigned __int8 v13; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR v14; // [rsp+68h] [rbp+10h]

  v0 = 2LL;
  v13 = 0;
  v1 = MiReservePtes((__int64)&qword_140E37328, 2u);
  if ( !v1 )
    MxInstallMoreMemory(6);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v3 = &qword_140E37120;
  do
  {
    ValidPte = MiMakeValidPte(v1, (__int64)*(v3 - 4), 536870913);
    v6 = MiLockWorkingSetOptimal((__int64)AnyMultiplexedVm, v1, &v13, v5);
    v14 = ValidPte;
    v7 = v6;
    v8 = 0;
    if ( MiPteInShadowRange(v1) )
    {
      v10 = MiSanitizeShadowPxe();
      ValidPte = v14;
      v8 = v10;
    }
    if ( _bittest64(&MiFlags, 0x24u) )
    {
      if ( (ValidPte & 0x20) == 0 )
      {
        v9 = 0xFFFFF6C000000000uLL;
        if ( v1 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(v1, ValidPte, 128);
      }
    }
    *(_QWORD *)v1 = ValidPte;
    if ( v8 )
      MiWritePteShadow();
    MiIncreaseUsedPtes(v9, v7, 1u, 6);
    MiUnlockWorkingSetOptimal((__int64)AnyMultiplexedVm, v7, v13);
    v11 = (__int64)(v1 << 25) >> 16;
    *v3 = (void *)v11;
    result = MiComputeHash64(v11);
    v3[1] = (void *)result;
    v1 += 8LL;
    v3 += 7;
    --v0;
  }
  while ( v0 );
  return result;
}
