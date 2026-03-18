/*
 * XREFs of ?VidSchSetHwQueueProgressFenceObject@VIDSCH_EXPORT@@QEAAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@W4VIDSCH_HW_QUEUE_PROGRESS_FENCE_TYPE@@@Z @ 0x140053FB0
 * Callers:
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1402BBA30 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ @ 0x1402F9A10 (-EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchSetHwQueueProgressFenceObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(a1 + 8) + 272LL))(a2, a3, a4);
}
