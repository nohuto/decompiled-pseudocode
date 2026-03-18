/*
 * XREFs of ?VidSchSignalSyncObjectsFromCpu@VIDSCH_EXPORT@@QEAAJIPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_K@Z @ 0x14004F184
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x140093270 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?DestroyPeriodicFrameNotification@BLTQUEUE@@QEAAJPEA_K@Z @ 0x140281C94 (-DestroyPeriodicFrameNotification@BLTQUEUE@@QEAAJPEA_K@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1402BA4F8 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchSignalSyncObjectsFromCpu(
        VIDSCH_EXPORT *this,
        unsigned int a2,
        struct _VIDSCH_SYNC_OBJECT **a3,
        struct _D3DDDICB_SIGNALFLAGS a4,
        const unsigned __int64 *a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT **, _QWORD, const unsigned __int64 *))(*((_QWORD *)this + 1) + 664LL))(
           a2,
           a3,
           a4.Value,
           a5);
}
