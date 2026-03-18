/*
 * XREFs of MiAddLoaderHalIoMappings @ 0x140C4DAE8
 * Callers:
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char __fastcall MiAddLoaderHalIoMappings(__int64 a1, __int64 a2)
{
  char *AnyMultiplexedVm; // rsi
  _DWORD v6[2]; // [rsp+20h] [rbp-C8h] BYREF
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
  MiWalkPageTables((__int64)v6);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v7);
}
