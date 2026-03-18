/*
 * XREFs of MiClearPageFileReservation @ 0x1402CC084
 * Callers:
 *     MiWriteCompletePfn @ 0x14020D42C (MiWriteCompletePfn.c)
 *     MiOutSwapWorkingSetPte @ 0x140225A10 (MiOutSwapWorkingSetPte.c)
 *     MiCaptureDirtyBitToPfn @ 0x14022F970 (MiCaptureDirtyBitToPfn.c)
 *     MiWsleFree @ 0x14022FD60 (MiWsleFree.c)
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MiLockPageAndSetDirty @ 0x14023A2A0 (MiLockPageAndSetDirty.c)
 *     MiCanBatchSystemCacheUnmapPages @ 0x14023C510 (MiCanBatchSystemCacheUnmapPages.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x1402CB6C0 (MiStoreMarkLockedPagesModified.c)
 *     MiCapturePfnPageFileInfoInline @ 0x1402CB93C (MiCapturePfnPageFileInfoInline.c)
 *     MiProbeUnlockPage @ 0x1402CB9A0 (MiProbeUnlockPage.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033D068 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDemoteCombinedPte @ 0x14037EFEC (MiDemoteCombinedPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FAC48 (MiReservePageFileSpaceForPage.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiClearPageFileReservation(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 result; // rax
  __int64 v4; // rdx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r10
  __int64 v7; // rcx

  v1 = *(_QWORD *)a1;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v4 = *(_QWORD *)a1;
    if ( (v1 & 1) != 0 && ((v1 & 0x42) == 0 || (v1 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v7 = *(_QWORD *)(KernelWaitTime + 8 * ((a1 >> 3) & 0x1FF));
          if ( (v7 & 0x20) != 0 )
            v4 = v1 | 0x20;
          v1 = v4 | 0x42;
          if ( (v7 & 0x42) == 0 )
            v1 = v4;
        }
      }
    }
  }
  result = v1 & 0xFFFFFFFFFFFFFFFDuLL;
  *(_QWORD *)a1 = result;
  return result;
}
