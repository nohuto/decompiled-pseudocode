/*
 * XREFs of MiAddLoaderHalIoMappings @ 0x140C3C7E4
 * Callers:
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall MiAddLoaderHalIoMappings(__int64 a1, __int64 a2)
{
  char *AnyMultiplexedVm; // rsi
  int v6[2]; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int8 v7; // [rsp+29h] [rbp-BFh]
  char *v8; // [rsp+40h] [rbp-A8h]
  __int64 v9; // [rsp+48h] [rbp-A0h]
  __int64 v10; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall *v11)(); // [rsp+C8h] [rbp-20h]

  memset_0(v6, 0, 0xC0uLL);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v6[0] = 8199;
  v9 = a1;
  v11 = MiAddLoaderHalIoPte;
  v10 = a2;
  v8 = AnyMultiplexedVm;
  v7 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiWalkPageTables(v6);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v7);
}
