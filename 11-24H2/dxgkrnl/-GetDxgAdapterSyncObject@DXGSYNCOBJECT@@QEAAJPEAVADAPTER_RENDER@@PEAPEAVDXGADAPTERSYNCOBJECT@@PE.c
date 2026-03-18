/*
 * XREFs of ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x140183008
 * Callers:
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401CB914 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77@Z @ 0x1401F4640 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1401F65B0 (-SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAV.c)
 *     ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z @ 0x1403C1B14 (-DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1403E7E60 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGPAGINGQUEUE@@PEAE_N4@Z @ 0x140183100 (-GetDxgAdapterSyncObject@DXGSYNCOBJECTCA@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@.c)
 */

__int64 __fastcall DXGSYNCOBJECT::GetDxgAdapterSyncObject(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER *a2,
        struct DXGADAPTERSYNCOBJECT **a3,
        struct DXGPAGINGQUEUE *a4,
        unsigned __int8 *a5,
        bool a6,
        bool a7)
{
  struct ADAPTER_RENDER *v9; // rax
  __int64 v11; // [rsp+28h] [rbp-30h]

  *a3 = 0LL;
  if ( (*((_DWORD *)this + 102) & 4) != 0 )
    return DXGSYNCOBJECTCA::GetDxgAdapterSyncObject(this, a2, a3, a4, a5, a6, a7);
  if ( !a2 || (v9 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 55), v9 == a2) )
  {
    *a3 = (struct DXGADAPTERSYNCOBJECT *)(((unsigned __int64)this + 424) & -(__int64)(this != 0LL));
    return 0LL;
  }
  else
  {
    WdLogSingleEntry4(2LL, this, v9, a2, -1073741811LL);
    v11 = *((_QWORD *)this + 55);
    WdLogGlobalForLineNumber = 2490;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Mismatch RenderCore with 0x%I64x (0x%I64x vs 0x%I64x), returning 0x%I64x",
      (__int64)this,
      v11,
      (__int64)a2,
      -1073741811LL,
      0LL);
    return 3221225485LL;
  }
}
