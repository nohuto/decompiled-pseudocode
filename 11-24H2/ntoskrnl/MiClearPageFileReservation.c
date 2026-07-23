/*
 * XREFs of MiClearPageFileReservation @ 0x14030714C
 * Callers:
 *     MiCaptureDirtyBitToPfn @ 0x140206E50 (MiCaptureDirtyBitToPfn.c)
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiWsleFree @ 0x140248D20 (MiWsleFree.c)
 *     MiLockPageAndSetDirty @ 0x140249DD0 (MiLockPageAndSetDirty.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiCanBatchSystemCacheUnmapPages @ 0x140258E20 (MiCanBatchSystemCacheUnmapPages.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiCapturePfnPageFileInfoInline @ 0x140269E70 (MiCapturePfnPageFileInfoInline.c)
 *     MiDemoteCombinedPte @ 0x140296374 (MiDemoteCombinedPte.c)
 *     MiProbeUnlockPage @ 0x140299FB0 (MiProbeUnlockPage.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiStoreMarkLockedPagesModified @ 0x1402E9CB0 (MiStoreMarkLockedPagesModified.c)
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     MiWriteCompletePfn @ 0x1402FA874 (MiWriteCompletePfn.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiOutSwapWorkingSetPte @ 0x140346260 (MiOutSwapWorkingSetPte.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403D2314 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FDC68 (MiReservePageFileSpaceForPage.c)
 * Callees:
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 */

char __fastcall MiClearPageFileReservation(__int64 *a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // r9
  __int64 HasShadow; // rax
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // rcx

  v1 = *a1;
  v2 = (unsigned __int64)a1;
  LOBYTE(HasShadow) = 0;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL )
  {
    LOBYTE(HasShadow) = -8;
    if ( (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v4 = *a1;
      if ( (v1 & 1) != 0 )
      {
        LOBYTE(a1) = (v1 & 0x42) != 0;
        LOBYTE(HasShadow) = (v1 & 0x20) != 0;
        if ( ((unsigned __int8)a1 & (unsigned __int8)HasShadow) == 0 )
        {
          HasShadow = MiPteHasShadow(a1, v1, v4, v2);
          if ( HasShadow )
          {
            v6 = *(_QWORD *)(HasShadow + 1288);
            if ( v6 )
            {
              HasShadow = *(_QWORD *)(v6 + 8 * ((v2 >> 3) & 0x1FF));
              if ( (HasShadow & 0x20) != 0 )
                v5 |= 0x20uLL;
              v1 = v5 | 0x42;
              if ( (HasShadow & 0x42) == 0 )
                v1 = v5;
            }
          }
        }
      }
    }
  }
  *(_QWORD *)v2 = v1 & 0xFFFFFFFFFFFFFFFDuLL;
  return HasShadow;
}
