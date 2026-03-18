/*
 * XREFs of MiCanPfnOriginalPteBeLost @ 0x140388D44
 * Callers:
 *     MiIsPfnOriginalPteLost @ 0x14020D7D0 (MiIsPfnOriginalPteLost.c)
 *     MiUnlinkStandbyPfn @ 0x14020EBB4 (MiUnlinkStandbyPfn.c)
 *     MiConvertLargeActivePageToChain @ 0x1402220D4 (MiConvertLargeActivePageToChain.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MiAddPageToFlushMdl @ 0x14022FA30 (MiAddPageToFlushMdl.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiLockPageAndSetDirty @ 0x14023A2A0 (MiLockPageAndSetDirty.c)
 *     MiCanBatchSystemCacheUnmapPages @ 0x14023C510 (MiCanBatchSystemCacheUnmapPages.c)
 *     MiAddPageToInsertList @ 0x14023DD30 (MiAddPageToInsertList.c)
 *     MiInitializePfn @ 0x14024CD40 (MiInitializePfn.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1402C4D20 (MiConvertLockedSmallPageToLarge.c)
 *     MiStoreMarkLockedPagesModified @ 0x1402CB6C0 (MiStoreMarkLockedPagesModified.c)
 *     MiProbeUnlockPage @ 0x1402CB9A0 (MiProbeUnlockPage.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     MiConvertLargePfnToSmall @ 0x14038A700 (MiConvertLargePfnToSmall.c)
 *     MiReferencePageForModifiedWrite @ 0x14040DA18 (MiReferencePageForModifiedWrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCanPfnOriginalPteBeLost(__int64 a1)
{
  unsigned int v1; // r9d
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rdx

  v1 = 0;
  if ( *(__int64 *)(a1 + 40) < 0 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( v2 < 0xFFFFF68000000000uLL || v2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    LOBYTE(v1) = (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL) == 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
    return v1;
  }
  v3 = (__int64)(v2 << 25) >> 16;
  return v3 >= 0xFFFFF68000000000uLL && v3 <= 0xFFFFF6FFFFFFFFFFuLL;
}
