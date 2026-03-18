/*
 * XREFs of MiMarkLargePageMappings @ 0x140C3EBAC
 * Callers:
 *     MiMarkLargePageRanges @ 0x140C3ECDC (MiMarkLargePageRanges.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char MiMarkLargePageMappings()
{
  char *AnyMultiplexedVm; // rbx
  int v2; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v3; // [rsp+24h] [rbp-C4h]
  unsigned __int8 v4; // [rsp+29h] [rbp-BFh]
  char *v5; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v6; // [rsp+48h] [rbp-A0h]
  __int64 v7; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall *v8)(); // [rsp+C8h] [rbp-20h]

  memset_0(&v2, 0, 0xC0uLL);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v7 = -1LL;
  v2 = 8711;
  v3 = v3 & 0xFFFFFE3F | 0x40;
  v6 = 0xFFFF800000000000uLL;
  v5 = AnyMultiplexedVm;
  v8 = MiMarkLargePagePte;
  v4 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiWalkPageTables(&v2);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v4);
}
