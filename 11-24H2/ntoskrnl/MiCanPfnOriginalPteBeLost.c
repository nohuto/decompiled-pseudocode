/*
 * XREFs of MiCanPfnOriginalPteBeLost @ 0x1402EE318
 * Callers:
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiUnlinkStandbyPfn @ 0x140210560 (MiUnlinkStandbyPfn.c)
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiLockPageAndSetDirty @ 0x140249DD0 (MiLockPageAndSetDirty.c)
 *     MiInitializePfn @ 0x14024B260 (MiInitializePfn.c)
 *     MiAddPageToInsertList @ 0x140257CC0 (MiAddPageToInsertList.c)
 *     MiCanBatchSystemCacheUnmapPages @ 0x140258E20 (MiCanBatchSystemCacheUnmapPages.c)
 *     MiProbeUnlockPage @ 0x140299FB0 (MiProbeUnlockPage.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiStoreMarkLockedPagesModified @ 0x1402E9CB0 (MiStoreMarkLockedPagesModified.c)
 *     MiReferencePageForModifiedWrite @ 0x1402EC7E8 (MiReferencePageForModifiedWrite.c)
 *     MiConvertLargePfnToSmall @ 0x1402EE180 (MiConvertLargePfnToSmall.c)
 *     MiInsertDemotedPages @ 0x1402EF010 (MiInsertDemotedPages.c)
 *     MiIsPfnOriginalPteLost @ 0x1402FABFC (MiIsPfnOriginalPteLost.c)
 *     MiConvertLargeActivePageToChain @ 0x1403122A0 (MiConvertLargeActivePageToChain.c)
 *     MiAddPageToFlushMdl @ 0x14033A230 (MiAddPageToFlushMdl.c)
 *     MiConvertLockedSmallPageToLarge @ 0x14034ED10 (MiConvertLockedSmallPageToLarge.c)
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
