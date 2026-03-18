/*
 * XREFs of MiInsertPageChainHead @ 0x1402271F0
 * Callers:
 *     MiAddSystemPageTableToList @ 0x1402270A8 (MiAddSystemPageTableToList.c)
 *     MiGetLargePageChain @ 0x140378BB8 (MiGetLargePageChain.c)
 *     MiAllocateEnclavePages @ 0x1403B9BC4 (MiAllocateEnclavePages.c)
 *     MiMapMdlWithLargePages @ 0x1404C6BAC (MiMapMdlWithLargePages.c)
 *     MiSplitDirectMapPage @ 0x1404D1400 (MiSplitDirectMapPage.c)
 *     MiGetClusterPage @ 0x1404D2FFC (MiGetClusterPage.c)
 *     MiInitializeDynamicBitmap @ 0x14066DC0C (MiInitializeDynamicBitmap.c)
 *     MiAddExpansionNonPagedPool @ 0x14067123C (MiAddExpansionNonPagedPool.c)
 *     MiCaptureSparsePages @ 0x1407EA86C (MiCaptureSparsePages.c)
 *     MiPfPrepareReadList @ 0x1409C90BC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
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
