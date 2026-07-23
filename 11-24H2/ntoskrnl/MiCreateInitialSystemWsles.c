/*
 * XREFs of MiCreateInitialSystemWsles @ 0x140C556D8
 * Callers:
 *     MiInitializeSystemImageRegion @ 0x140C5D828 (MiInitializeSystemImageRegion.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

_BOOL8 MiCreateInitialSystemWsles()
{
  char *AnyMultiplexedVm; // rdi
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // ebx
  int v5; // [rsp+20h] [rbp-C8h] BYREF
  int v6; // [rsp+24h] [rbp-C4h]
  unsigned __int8 v7; // [rsp+29h] [rbp-BFh]
  char *v8; // [rsp+40h] [rbp-A8h]
  __int64 v9; // [rsp+48h] [rbp-A0h]
  __int64 v10; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall *v11)(__int64, _QWORD *, int); // [rsp+C8h] [rbp-20h]

  memset_0(&v5, 0, 0xC0uLL);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v6 &= 0xFFFFFE3F;
  v9 = qword_140E38CF8;
  v10 = qword_140E38D00 - 1 + qword_140E38CF8;
  v11 = MiCreatePteWsle;
  v8 = AnyMultiplexedVm;
  v5 = 7;
  v7 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v10, v1, v2);
  v3 = MiWalkPageTables(&v5);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v7);
  return v3 != 5;
}
