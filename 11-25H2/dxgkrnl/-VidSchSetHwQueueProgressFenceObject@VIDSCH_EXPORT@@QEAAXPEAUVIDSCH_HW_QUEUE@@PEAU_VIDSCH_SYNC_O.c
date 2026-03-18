/*
 * XREFs of ?VidSchSetHwQueueProgressFenceObject@VIDSCH_EXPORT@@QEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@W4VIDSCH_HW_QUEUE_PROGRESS_FENCE_TYPE@@@Z @ 0x140054220
 * Callers:
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x140321478 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ @ 0x14032EA88 (-EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchSetHwQueueProgressFenceObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 + 8) + 272LL))(a2, a3, a4);
}
