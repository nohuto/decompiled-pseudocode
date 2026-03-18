/*
 * XREFs of MiCanPfnOriginalPteBeLost @ 0x14039E1D0
 * Callers:
 *     MiAddPageToFlushMdl @ 0x140210ED0 (MiAddPageToFlushMdl.c)
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     MiLockPageAndSetDirty @ 0x14021D080 (MiLockPageAndSetDirty.c)
 *     MiInitializePfn @ 0x14021E510 (MiInitializePfn.c)
 *     MiUnlinkStandbyPfn @ 0x1402363D0 (MiUnlinkStandbyPfn.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     MiProbeUnlockPage @ 0x14028A3B0 (MiProbeUnlockPage.c)
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1402ED6D0 (MiConvertLockedSmallPageToLarge.c)
 *     MiCanBatchSystemCacheUnmapPages @ 0x1402F0AE0 (MiCanBatchSystemCacheUnmapPages.c)
 *     MiAddPageToInsertList @ 0x1402F2180 (MiAddPageToInsertList.c)
 *     MiConvertLargeActivePageToChain @ 0x1403083C0 (MiConvertLargeActivePageToChain.c)
 *     MiReferencePageForModifiedWrite @ 0x14036AA48 (MiReferencePageForModifiedWrite.c)
 *     MiIsPfnOriginalPteLost @ 0x14039D8FC (MiIsPfnOriginalPteLost.c)
 *     MiConvertLargePfnToSmall @ 0x14041F790 (MiConvertLargePfnToSmall.c)
 *     MiInsertDemotedPages @ 0x14042F7AC (MiInsertDemotedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x140432B70 (MiStoreMarkLockedPagesModified.c)
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
