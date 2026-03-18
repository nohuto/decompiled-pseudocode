/*
 * XREFs of MiMapDummyPages @ 0x140C4FC6C
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetOptimal @ 0x14024231C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402424F0 (MiLockWorkingSetOptimal.c)
 *     MiPteInShadowRange @ 0x1402863E0 (MiPteInShadowRange.c)
 *     MiIncreaseUsedPtes @ 0x14028A180 (MiIncreaseUsedPtes.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     MiComputeHash64 @ 0x14036D4E0 (MiComputeHash64.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     MxInstallMoreMemory @ 0x14066C6F0 (MxInstallMoreMemory.c)
 */

unsigned __int64 MiMapDummyPages()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // rdi
  char *AnyMultiplexedVm; // r12
  void **v3; // r15
  ULONG_PTR ValidPte; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r13
  int v7; // r14d
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int64 result; // rax
  char v12; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR v13; // [rsp+68h] [rbp+10h]

  v0 = 2LL;
  v12 = 0;
  v1 = MiReservePtes((__int64)&qword_140E37568, 2u);
  if ( !v1 )
    MxInstallMoreMemory(6);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v3 = &qword_140E37360;
  do
  {
    ValidPte = MiMakeValidPte(v1, (__int64)*(v3 - 4), 536870913);
    v5 = MiLockWorkingSetOptimal((__int64)AnyMultiplexedVm, v1, (unsigned __int8 *)&v12);
    v13 = ValidPte;
    v6 = v5;
    v7 = 0;
    if ( MiPteInShadowRange(v1) )
    {
      v9 = MiSanitizeShadowPxe();
      ValidPte = v13;
      v7 = v9;
    }
    if ( _bittest64(&MiFlags, 0x24u) )
    {
      if ( (ValidPte & 0x20) == 0 )
      {
        v8 = 0xFFFFF6C000000000uLL;
        if ( v1 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(v1, ValidPte, 128);
      }
    }
    *(_QWORD *)v1 = ValidPte;
    if ( v7 )
      MiWritePteShadow();
    MiIncreaseUsedPtes(v8, v6, 1u, 6);
    MiUnlockWorkingSetOptimal((__int64)AnyMultiplexedVm, v6, v12);
    v10 = (__int64)(v1 << 25) >> 16;
    *v3 = (void *)v10;
    result = MiComputeHash64(v10);
    v3[1] = (void *)result;
    v1 += 8LL;
    v3 += 7;
    --v0;
  }
  while ( v0 );
  return result;
}
