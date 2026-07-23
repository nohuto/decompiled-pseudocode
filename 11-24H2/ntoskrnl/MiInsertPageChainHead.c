/*
 * XREFs of MiInsertPageChainHead @ 0x14021CD10
 * Callers:
 *     MiAddSystemPageTableToList @ 0x14021C950 (MiAddSystemPageTableToList.c)
 *     MiGetPageTablePages @ 0x14021CA98 (MiGetPageTablePages.c)
 *     MiGetLargePageChain @ 0x140263C74 (MiGetLargePageChain.c)
 *     MiAllocateEnclavePages @ 0x1403F85DC (MiAllocateEnclavePages.c)
 *     MiMapMdlWithLargePages @ 0x1404C0630 (MiMapMdlWithLargePages.c)
 *     MiSplitDirectMapPage @ 0x1404CA510 (MiSplitDirectMapPage.c)
 *     MiGetClusterPage @ 0x1404CBFA4 (MiGetClusterPage.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiInitializeDynamicBitmap @ 0x14067A698 (MiInitializeDynamicBitmap.c)
 *     MiAddExpansionNonPagedPool @ 0x14067DBDC (MiAddExpansionNonPagedPool.c)
 *     MiCaptureSparsePages @ 0x1407FAE6C (MiCaptureSparsePages.c)
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInsertPageChainHead(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = *a1;
  *a2 = *a1;
  v3 = a1[1] == 0;
  *a1 = (__int64)a2;
  if ( v3 )
    a1[1] = (__int64)a2;
  ++a1[2];
  return result;
}
