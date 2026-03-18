/*
 * XREFs of MiCreateInitialSystemWsles @ 0x140C42318
 * Callers:
 *     MiInitializeSystemImageRegion @ 0x140C4A30C (MiInitializeSystemImageRegion.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

_BOOL8 MiCreateInitialSystemWsles()
{
  char *AnyMultiplexedVm; // rdi
  int v1; // ebx
  int v3; // [rsp+20h] [rbp-C8h] BYREF
  int v4; // [rsp+24h] [rbp-C4h]
  unsigned __int8 v5; // [rsp+29h] [rbp-BFh]
  char *v6; // [rsp+40h] [rbp-A8h]
  __int64 v7; // [rsp+48h] [rbp-A0h]
  __int64 v8; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall *v9)(__int64, _QWORD *, int); // [rsp+C8h] [rbp-20h]

  memset_0(&v3, 0, 0xC0uLL);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v4 &= 0xFFFFFE3F;
  v7 = qword_140E38978;
  v8 = qword_140E38980 - 1 + qword_140E38978;
  v9 = MiCreatePteWsle;
  v6 = AnyMultiplexedVm;
  v3 = 7;
  v5 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v1 = MiWalkPageTables(&v3);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v5);
  return v1 != 5;
}
