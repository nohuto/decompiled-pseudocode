/*
 * XREFs of MiInsertPageChainHead @ 0x14039EC34
 * Callers:
 *     MiAllocateEnclavePages @ 0x140394D84 (MiAllocateEnclavePages.c)
 *     MiAddSystemPageTableToList @ 0x14039E874 (MiAddSystemPageTableToList.c)
 *     MiGetPageTablePages @ 0x14039E9BC (MiGetPageTablePages.c)
 *     MiGetLargePageChain @ 0x1403D4E10 (MiGetLargePageChain.c)
 *     MiMapMdlWithLargePages @ 0x1404C71D0 (MiMapMdlWithLargePages.c)
 *     MiSplitDirectMapPage @ 0x1404D14D0 (MiSplitDirectMapPage.c)
 *     MiGetClusterPage @ 0x1404D2DE4 (MiGetClusterPage.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiInitializeDynamicBitmap @ 0x1406794B8 (MiInitializeDynamicBitmap.c)
 *     MiAddExpansionNonPagedPool @ 0x14067C9FC (MiAddExpansionNonPagedPool.c)
 *     MiCaptureSparsePages @ 0x1407FA6FC (MiCaptureSparsePages.c)
 *     MiPfPrepareReadList @ 0x1409557EC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
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
