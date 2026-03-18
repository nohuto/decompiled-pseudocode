/*
 * XREFs of ?CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@00_KI@Z @ 0x1402FB13C
 * Callers:
 *     ?CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@_N@Z @ 0x1402FAE28 (-CreatePeriodicMonitoredFenceNotificationInternal@@YAJPEAVDXGADAPTER@@0PEAVDXGSYNCOBJECT@@PEBU_D.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?CreatePeriodicFrameNotification@DXGDODPRESENT@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEA_K@Z @ 0x14027AF74 (-CreatePeriodicFrameNotification@DXGDODPRESENT@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_K.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1402FCB50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGSYNCOBJECT::CreatePeriodicFrameNotification(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER **a2,
        struct ADAPTER_RENDER **a3,
        struct DXGADAPTER *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  DXGDODPRESENT *v11; // r9
  unsigned int PeriodicFrameNotification; // eax
  struct _VIDSCH_SYNC_OBJECT *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // esi

  DXGFASTMUTEX::Acquire((DXGSYNCOBJECT *)((char *)this + 32));
  if ( (*((_DWORD *)a4 + 111) & 0x100) != 0 )
  {
    if ( !a2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2172;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pSyncAdapter != nullptr", 2172LL, 0LL, 0LL, 0LL, 0LL);
    }
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(this, a2[391]);
    PeriodicFrameNotification = DXGDODPRESENT::CreatePeriodicFrameNotification(
                                  v11,
                                  (struct DXGADAPTER *)a2,
                                  VidSchSyncObject,
                                  (__int64)v11,
                                  a6,
                                  (struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 *)((char *)this + 208),
                                  (unsigned __int64 *)this + 24);
    *((_DWORD *)this + 50) = a6;
    *((_QWORD *)this + 23) = a4;
  }
  else
  {
    v13 = DXGSYNCOBJECT::GetVidSchSyncObject(this, a3[391]);
    PeriodicFrameNotification = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, unsigned __int64, _QWORD, char *, char *))(*(_QWORD *)(*(_QWORD *)(v14 + 736) + 8LL) + 944LL))(
                                  *(_QWORD *)(v14 + 744),
                                  v13,
                                  a5,
                                  a6,
                                  (char *)this + 208,
                                  (char *)this + 176);
  }
  v15 = PeriodicFrameNotification;
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 4);
  return v15;
}
