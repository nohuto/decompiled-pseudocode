/*
 * XREFs of MiAddLoaderHalIoMappings @ 0x140C4FC84
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall MiAddLoaderHalIoMappings(__int64 a1, __int64 a2)
{
  char *AnyMultiplexedVm; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v9[2]; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int8 v10; // [rsp+29h] [rbp-BFh]
  char *v11; // [rsp+40h] [rbp-A8h]
  __int64 v12; // [rsp+48h] [rbp-A0h]
  __int64 v13; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall *v14)(); // [rsp+C8h] [rbp-20h]

  memset_0(v9, 0, 0xC0uLL);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v9[0] = 8199;
  v12 = a1;
  v14 = MiAddLoaderHalIoPte;
  v13 = a2;
  v11 = AnyMultiplexedVm;
  v10 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v5, v6, v7);
  MiWalkPageTables(v9);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v10);
}
