/*
 * XREFs of MiMarkLargePageMappings @ 0x140C51F6C
 * Callers:
 *     MiMarkLargePageRanges @ 0x140C5209C (MiMarkLargePageRanges.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char MiMarkLargePageMappings()
{
  char *AnyMultiplexedVm; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  int v5; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v6; // [rsp+24h] [rbp-C4h]
  unsigned __int8 v7; // [rsp+29h] [rbp-BFh]
  char *v8; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v9; // [rsp+48h] [rbp-A0h]
  __int64 v10; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall *v11)(); // [rsp+C8h] [rbp-20h]

  memset_0(&v5, 0, 0xC0uLL);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v10 = -1LL;
  v5 = 8711;
  v6 = v6 & 0xFFFFFE3F | 0x40;
  v9 = 0xFFFF800000000000uLL;
  v8 = AnyMultiplexedVm;
  v11 = MiMarkLargePagePte;
  v7 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v1, v2, v3);
  MiWalkPageTables(&v5);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v7);
}
