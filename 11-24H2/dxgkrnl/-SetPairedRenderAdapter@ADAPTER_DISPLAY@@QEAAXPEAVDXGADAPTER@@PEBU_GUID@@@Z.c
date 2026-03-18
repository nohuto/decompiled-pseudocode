/*
 * XREFs of ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x14019B038
 * Callers:
 *     ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14018EBD0 (-DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1401AB000 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1401AF7FC (DxgkSetIndirectDisplayRenderAdapter.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1402B8DC8 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140051AB8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14006799C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline @ 0x140067A44 (Feature_SavePairedAdapterInRemoteSession__private_IsEnabledDeviceUsageNoInline.c)
 *     TriggerRenderAdapterPairingChangedWnf @ 0x1401C6BA8 (TriggerRenderAdapterPairingChangedWnf.c)
 *     ?SetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAAXKPEAVDXGADAPTER@@@Z @ 0x1401FC0CC (-SetPairedRenderAdapterInRemoteSession@DXGSESSIONMGR@@QEAAXKPEAVDXGADAPTER@@@Z.c)
 *     DxgkIncreaseAdapterUniquenessOnSession @ 0x1401FCFA8 (DxgkIncreaseAdapterUniquenessOnSession.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1403986AC (DxgkIncreaseSessionAdapterUniqueness.c)
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
      DXGSESSIONMGR::SetPairedRenderAdapterInRemoteSession(*((DXGSESSIONMGR **)Global + 122), v12, a2);
    }
  }
  if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
    DxgkIncreaseAdapterUniquenessOnSession(v3);
  else
    DxgkIncreaseSessionAdapterUniqueness();
  TriggerRenderAdapterPairingChangedWnf(v3);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
}
