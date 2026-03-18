/*
 * XREFs of ?Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z @ 0x1401FD7A4
 * Callers:
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1401FD8B4 (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidSchSubmitWaitFromCpu@VIDSCH_EXPORT@@QEAAJIPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KPEAU_KEVENT@@_N3PEAU_VIDSCH_DEVICE@@PEAX@Z @ 0x140036968 (-VidSchSubmitWaitFromCpu@VIDSCH_EXPORT@@QEAAJIPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KPEAU_KEVENT@@_N3P.c)
 *     ?CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z @ 0x1401FC6A8 (-CreateSynchObject@MonitoredFenceHelper@@AEAAJPEAVDXGDEVICE@@_K@Z.c)
 *     ?DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ @ 0x1401FC7A8 (-DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402FCB50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall MonitoredFenceHelper::Update(
        MonitoredFenceHelper *this,
        struct ADAPTER_RENDER **a2,
        UINT64 a3,
        unsigned __int64 a4)
{
  __int64 result; // rax
  struct _KTHREAD **v8; // rbx
  struct _KTHREAD **v9; // rbp
  int v10; // ebx
  struct _KEVENT *v11; // rdi
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v13 = a4;
  if ( a3 != *(_QWORD *)this )
  {
    MonitoredFenceHelper::DestroySynchObject(this);
    result = MonitoredFenceHelper::CreateSynchObject(this, (struct DXGDEVICE *)a2, a3);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)this = a3;
  }
  v8 = *(struct _KTHREAD ***)(*((_QWORD *)this + 4) + 32LL);
  v9 = v8 + 4;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v8 + 4));
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v8, a2[2]);
  if ( VidSchSyncObject )
  {
    v11 = (struct _KEVENT *)((char *)this + 8);
    ObfReferenceObject(v11);
    v10 = VIDSCH_EXPORT::VidSchSubmitWaitFromCpu(
            *((VIDSCH_EXPORT **)a2[2] + 92),
            1u,
            &VidSchSyncObject,
            &v13,
            v11,
            1,
            1,
            a2[100],
            0LL);
    if ( v10 < 0 )
      ObfDereferenceObject(v11);
  }
  else
  {
    v10 = -1073741811;
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2097;
  }
  DXGFASTMUTEX::Release(v9);
  return (unsigned int)v10;
}
