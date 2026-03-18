/*
 * XREFs of MiClearPageFileReservation @ 0x140213DEC
 * Callers:
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     MiWsleFree @ 0x14021BFD0 (MiWsleFree.c)
 *     MiLockPageAndSetDirty @ 0x14021D080 (MiLockPageAndSetDirty.c)
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     MiCaptureDirtyBitToPfn @ 0x14023ED00 (MiCaptureDirtyBitToPfn.c)
 *     MiProbeUnlockPage @ 0x14028A3B0 (MiProbeUnlockPage.c)
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiCanBatchSystemCacheUnmapPages @ 0x1402F0AE0 (MiCanBatchSystemCacheUnmapPages.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiOutSwapWorkingSetPte @ 0x140302690 (MiOutSwapWorkingSetPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1403687E0 (MiReservePageFileSpaceForPage.c)
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 *     MiCapturePfnPageFileInfoInline @ 0x14036D370 (MiCapturePfnPageFileInfoInline.c)
 *     MiWriteCompletePfn @ 0x14039D574 (MiWriteCompletePfn.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403E4774 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDemoteCombinedPte @ 0x1403FABBC (MiDemoteCombinedPte.c)
 *     MiStoreMarkLockedPagesModified @ 0x140432B70 (MiStoreMarkLockedPagesModified.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402141A0 (MiPteHasShadow.c)
 */

char __fastcall MiClearPageFileReservation(__int64 *a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r9
  __int64 HasShadow; // rax
  __int64 v4; // r8
  __int64 v5; // rcx

  v1 = *a1;
  v2 = (unsigned __int64)a1;
  LOBYTE(HasShadow) = 0;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL )
  {
    LOBYTE(HasShadow) = -8;
    if ( (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL && (v1 & 1) != 0 )
    {
      LOBYTE(a1) = (v1 & 0x42) != 0;
      LOBYTE(HasShadow) = (v1 & 0x20) != 0;
      if ( ((unsigned __int8)a1 & (unsigned __int8)HasShadow) == 0 )
      {
        HasShadow = MiPteHasShadow(a1, v1);
        if ( HasShadow )
        {
          v5 = *(_QWORD *)(HasShadow + 1288);
          if ( v5 )
          {
            HasShadow = *(_QWORD *)(v5 + 8 * ((v2 >> 3) & 0x1FF));
            if ( (HasShadow & 0x20) != 0 )
              v4 |= 0x20uLL;
            v1 = v4 | 0x42;
            if ( (HasShadow & 0x42) == 0 )
              v1 = v4;
          }
        }
      }
    }
  }
  *(_QWORD *)v2 = v1 & 0xFFFFFFFFFFFFFFFDuLL;
  return HasShadow;
}
