/*
 * XREFs of MiCopyFilePage @ 0x14067A640
 * Callers:
 *     MiTransferFileExtent @ 0x1404BEE98 (MiTransferFileExtent.c)
 * Callees:
 *     MiGetPteMappingSet @ 0x14020CA90 (MiGetPteMappingSet.c)
 *     MiGetPteFromCopyList @ 0x1402259B0 (MiGetPteFromCopyList.c)
 *     MiReturnPteMappingSet @ 0x140225EF0 (MiReturnPteMappingSet.c)
 *     MiPersistVa @ 0x14067B968 (MiPersistVa.c)
 *     KeCopyPage @ 0x1406B3410 (KeCopyPage.c)
 */

struct _KPRCB *__fastcall MiCopyFilePage(__int64 a1, __int64 a2, int a3)
{
  ULONG_PTR PteFromCopyList; // rdi
  __int64 v7; // rbx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  MiGetPteMappingSet(0, 2LL, (__int64)&v9);
  PteFromCopyList = MiGetPteFromCopyList((unsigned int *)&v9, a1, a2);
  v7 = (__int64)(PteFromCopyList << 25) >> 16;
  KeCopyPage(v7, v7 + 4096, 1LL);
  if ( a3 )
    MiPersistVa(v7);
  *(_QWORD *)PteFromCopyList = CLFS_LSN_NULL_EXT;
  *(_QWORD *)(PteFromCopyList + 8) = CLFS_LSN_NULL_EXT;
  return MiReturnPteMappingSet((__int64)&v9);
}
