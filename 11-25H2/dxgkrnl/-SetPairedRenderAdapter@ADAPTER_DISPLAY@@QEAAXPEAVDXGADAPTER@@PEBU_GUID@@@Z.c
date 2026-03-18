/*
 * XREFs of ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x140198B48
 * Callers:
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14018C9A0 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1401A8AE0 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1401AD31C (DxgkSetIndirectDisplayRenderAdapter.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x140302664 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140052068 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x140067D78 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline @ 0x140067DCC (Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline.c)
 *     TriggerRenderAdapterPairingChangedWnf @ 0x1401C2588 (TriggerRenderAdapterPairingChangedWnf.c)
 *     ?SetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAAXKPEAVDXGADAPTER@@@Z @ 0x1401F586C (-SetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAAXKPEAVDXGADAPTER@@@Z.c)
 *     DxgkIncreaseAdapterUniquenessOnSession @ 0x1401F6698 (DxgkIncreaseAdapterUniquenessOnSession.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x14031F83C (DxgkIncreaseSessionAdapterUniqueness.c)
 */

void __fastcall ADAPTER_DISPLAY::SetPairedRenderAdapter(
        ADAPTER_DISPLAY *this,
        struct DXGADAPTER *a2,
        const struct _GUID *a3)
{
  unsigned __int64 v3; // rbx
  struct _LUID *v7; // rdx
  struct _LUID *v8; // rdx
  DXGADAPTER *v9; // rcx
  struct DXGGLOBAL *Global; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0x200000000LL;
  v12 = 0x200000000LL;
  if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
  {
    DXGADAPTER::IsAdapterSessionized(*((DXGADAPTER **)this + 2), v7, 0LL, &v12);
    v3 = v12;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (ADAPTER_DISPLAY *)((char *)this + 200), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  DXGADAPTER_REFERENCE::Assign((ADAPTER_DISPLAY *)((char *)this + 248), a2);
  if ( a3 )
    *(struct _GUID *)((char *)this + 264) = *a3;
  if ( (unsigned int)Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline() )
  {
    v9 = (DXGADAPTER *)*((_QWORD *)this + 2);
    LODWORD(v12) = 0;
    if ( DXGADAPTER::IsAdapterSessionized(v9, v8, (unsigned int *)&v12, 0LL) )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXGSESSIONMGR::SetPairedRenderAdapterInRemoteSession(*((DXGSESSIONMGR **)Global + 118), v12, a2);
    }
  }
  if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
    DxgkIncreaseAdapterUniquenessOnSession(v3);
  else
    DxgkIncreaseSessionAdapterUniqueness();
  TriggerRenderAdapterPairingChangedWnf(v3);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
}
