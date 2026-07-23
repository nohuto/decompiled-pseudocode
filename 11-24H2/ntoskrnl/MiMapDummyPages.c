/*
 * XREFs of MiMapDummyPages @ 0x140C51DFC
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     MiUnlockWorkingSetOptimal @ 0x14020A46C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x14020A640 (MiLockWorkingSetOptimal.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiIncreaseUsedPtes @ 0x140299D80 (MiIncreaseUsedPtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiComputeHash64 @ 0x14041CBD0 (MiComputeHash64.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MxInstallMoreMemory @ 0x14066D8C0 (MxInstallMoreMemory.c)
 */

unsigned __int64 MiMapDummyPages()
{
  __int64 v0; // rsi
  unsigned __int64 v1; // rdi
  char *AnyMultiplexedVm; // r12
  void **v3; // r15
  unsigned __int64 ValidPte; // rbx
  __int64 v5; // r9
  ULONG_PTR v6; // rax
  unsigned __int64 v7; // r13
  int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 result; // rax
  char v15; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v0 = 2LL;
  v15 = 0;
  v1 = MiReservePtes((__int64)&qword_140E376A8, 2u);
  if ( !v1 )
    MxInstallMoreMemory(6);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v3 = &qword_140E374A0;
  do
  {
    ValidPte = MiMakeValidPte(v1, (__int64)*(v3 - 4), 536870913);
    v6 = MiLockWorkingSetOptimal((__int64)AnyMultiplexedVm, v1, (unsigned __int8 *)&v15, v5);
    v16 = ValidPte;
    v7 = v6;
    v8 = 0;
    if ( MiPteInShadowRange(v1) )
    {
      v12 = MiSanitizeShadowPxe(v9, (__int64)&v16, v10);
      ValidPte = v16;
      v8 = v12;
    }
    if ( _bittest64(&MiFlags, 0x24u) )
    {
      if ( (ValidPte & 0x20) == 0 )
      {
        v9 = 0xFFFFF6C000000000uLL;
        if ( v1 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(v1, ValidPte, 128LL);
      }
    }
    *(_QWORD *)v1 = ValidPte;
    if ( v8 )
      MiWritePteShadow(v1, ValidPte, v10, v11);
    MiIncreaseUsedPtes(v9, v7, 1LL, 6LL);
    MiUnlockWorkingSetOptimal((__int64)AnyMultiplexedVm, v7, v15);
    v13 = (__int64)(v1 << 25) >> 16;
    *v3 = (void *)v13;
    result = MiComputeHash64(v13);
    v3[1] = (void *)result;
    v1 += 8LL;
    v3 += 7;
    --v0;
  }
  while ( v0 );
  return result;
}
