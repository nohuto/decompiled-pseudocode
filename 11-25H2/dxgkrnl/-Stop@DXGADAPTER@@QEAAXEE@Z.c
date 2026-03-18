/*
 * XREFs of ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x140193B2C
 * Callers:
 *     DxgkRemoveAdapter @ 0x1401D22A8 (DxgkRemoveAdapter.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U4@U1@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@555AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@6355555555@Z @ 0x1400014F8 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$03@.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x14005CC28 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x14006912C (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJU_LUID@@_N@Z @ 0x1400788CC (-RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJU_LUID@@_N@Z.c)
 *     ?AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z @ 0x14018B658 (-AcquireLocksForStop@DXGADAPTER@@QEAAXPEA_K@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x14018C23C (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x14018C7DC (-DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x140198C50 (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x14019D7E8 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z @ 0x1401D0BF4 (-NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z.c)
 *     ?Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z @ 0x1401EE4F0 (-Clear@REMOTEMONITORMAPPING@@QEAAXPEAU_LUID@@@Z.c)
 *     ?DxgkpAcquireTestLockForStopReset@@YAXXZ @ 0x1401FC19C (-DxgkpAcquireTestLockForStopReset@@YAXXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028DA40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x140295218 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402BAC68 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1402BB3F0 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1402BC984 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1403240C0 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 */

void __fastcall DXGADAPTER::Stop(DXGADAPTER *this, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // edi
  char v4; // r12
  struct _LUID v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  struct _LUID *v11; // rdx
  __int64 v12; // rcx
  KSPIN_LOCK *Global; // rax
  DXGGLOBAL *v14; // rax
  ADAPTER_DISPLAY *v15; // rcx
  ADAPTER_RENDER *v16; // rcx
  BOOLEAN v17; // di
  BOOLEAN v18; // al
  struct DXGGLOBAL *v19; // rax
  struct DXGGLOBAL *v20; // rax
  struct DXGGLOBAL *v21; // rax
  int v22; // [rsp+B0h] [rbp-80h] BYREF
  unsigned int v23; // [rsp+B4h] [rbp-7Ch] BYREF
  int v24; // [rsp+B8h] [rbp-78h] BYREF
  int v25; // [rsp+BCh] [rbp-74h] BYREF
  int v26; // [rsp+C0h] [rbp-70h] BYREF
  int v27; // [rsp+C4h] [rbp-6Ch] BYREF
  int v28; // [rsp+C8h] [rbp-68h] BYREF
  int v29; // [rsp+CCh] [rbp-64h] BYREF
  int v30; // [rsp+D0h] [rbp-60h] BYREF
  int v31; // [rsp+D4h] [rbp-5Ch] BYREF
  int v32; // [rsp+D8h] [rbp-58h] BYREF
  int v33; // [rsp+DCh] [rbp-54h] BYREF
  struct _LUID v34; // [rsp+E0h] [rbp-50h]
  __int64 v35; // [rsp+E8h] [rbp-48h] BYREF
  void *v36; // [rsp+F0h] [rbp-40h] BYREF
  struct _LUID v37; // [rsp+F8h] [rbp-38h] BYREF
  unsigned __int16 *v38; // [rsp+100h] [rbp-30h] BYREF
  unsigned __int64 v39; // [rsp+108h] [rbp-28h] BYREF
  struct _LUID v40; // [rsp+110h] [rbp-20h] BYREF
  __int16 v41; // [rsp+160h] [rbp+30h] BYREF
  __int16 v42; // [rsp+170h] [rbp+40h] BYREF
  unsigned int v43; // [rsp+178h] [rbp+48h]

  v3 = a2;
  v4 = 0;
  WdLogSingleEntry1(4LL, this);
  WdLogGlobalForLineNumber = 9407;
  DXGADAPTER::GetAdapterType(this);
  v34 = *(struct _LUID *)((char *)this + 412);
  v7 = v34;
  v40 = v34;
  if ( (unsigned int)dword_14015B660 > 5 && tlgKeywordOn((__int64)&dword_14015B660, 0x400000000800LL) )
  {
    v23 = v43;
    v22 = v3;
    v25 = (v43 >> 1) & 1;
    v24 = v9;
    v27 = (v43 >> 2) & 1;
    v28 = *((unsigned __int8 *)this + 2948);
    v29 = *((unsigned __int8 *)this + 2943);
    v42 = *((_WORD *)this + 1502);
    v35 = *((_QWORD *)this + 251);
    v36 = (void *)*((_QWORD *)this + 250);
    v37 = v34;
    v30 = *((_DWORD *)this + 108);
    v31 = *((_DWORD *)this + 107);
    v32 = *((_DWORD *)this + 106);
    v33 = *((_DWORD *)this + 105);
    v38 = (unsigned __int16 *)*((_QWORD *)this + 241);
    v26 = v43 & 1;
    v41 = 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v43 & 1,
      (__int64)&unk_1401393FC,
      v8,
      v9,
      (__int64)&v41,
      &v38,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v37,
      &v36,
      (__int64)&v35,
      (__int64)&v42,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22);
  }
  KeSetEvent((PRKEVENT)this + 129, 0, 0);
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9454;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!IsCoreResourceExclusiveOwner()",
      9454LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_DWORD *)this + 50) = 5;
  if ( !*((_BYTE *)this + 209) )
  {
    v10 = *((_QWORD *)this + 391);
    if ( v10 )
    {
      if ( (_BYTE)v3 )
      {
        *(_BYTE *)(v10 + 1025) = 1;
        ADAPTER_RENDER::ResumeVidMmWorkerThread(*((ADAPTER_RENDER **)this + 391), 1u, 1u);
      }
    }
  }
  DxgkpAcquireTestLockForStopReset();
  v39 = 0LL;
  DXGADAPTER::AcquireLocksForStop(this, &v39);
  if ( !*((_BYTE *)this + 209) )
  {
    v12 = *((_QWORD *)this + 391);
    if ( v12 )
    {
      ADAPTER_RENDER::FlushScheduler(v12, 5LL, 0xFFFFFFFFLL);
      ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 391), 1LL, 0LL);
      ADAPTER_RENDER::ResumeVidMmWorkerThread(*((ADAPTER_RENDER **)this + 391), 0, 1u);
    }
    if ( *((_BYTE *)this + 206) )
    {
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      DXGGLOBAL::SetSchedulerCrossAdapterData(Global, 0LL);
    }
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 5816LL) )
    {
      v14 = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::NotifySharedPowerGraphicsRemoving(v14, this);
    }
  }
  v15 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 390);
  if ( v15 )
    ADAPTER_DISPLAY::Stop(v15, a3);
  v16 = (ADAPTER_RENDER *)*((_QWORD *)this + 391);
  if ( v16 )
  {
    v4 = 1;
    ADAPTER_RENDER::Stop(v16, v3, a3);
  }
  if ( *((_QWORD *)this + 463) )
  {
    *((_BYTE *)this + 3662) = 1;
    v17 = KeCancelTimer((PKTIMER)this + 59);
    v18 = KeCancelTimer((PKTIMER)((char *)this + 4496));
    if ( !v17 || !v18 )
      KeFlushQueuedDpcs();
    if ( !KeCancelTimer((PKTIMER)this + 59) )
      KeFlushQueuedDpcs();
    PoUnregisterPowerSettingCallback(*((PVOID *)this + 463));
    *((_QWORD *)this + 463) = 0LL;
  }
  if ( a3 )
  {
    *((_DWORD *)this + 50) = 4;
  }
  else
  {
    if ( *((_BYTE *)this + 3665)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 40LL) + 28LL) >= 0x3008u )
    {
      DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STOPPED, 0LL, 0LL, 0LL, 0LL, 0LL);
      *((_BYTE *)this + 3665) = 0;
    }
    DXGADAPTER::Destroy(this, v11);
    *((_DWORD *)this + 50) = 2;
    DXGADAPTER::ReleaseReference(this);
  }
  *((_QWORD *)this + 240) = 0LL;
  *((_QWORD *)this + 250) = 0LL;
  DXGADAPTER::ReleaseCoreResource(this, 0LL);
  DXGADAPTER::ReleaseReference(this);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *((_QWORD *)this + 18) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 136, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER::DestroySerializeFStateTransitWorker(this);
  if ( v4 && !*((_BYTE *)this + 3017) )
  {
    v19 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(v19, DxgkCheckPairedRenderAdapterForStopCallBack, this, 1LL);
  }
  v20 = DXGGLOBAL::GetGlobal();
  REMOTEMONITORMAPPING::Clear((struct DXGGLOBAL *)((char *)v20 + 305176), &v40);
  v21 = DXGGLOBAL::GetGlobal();
  HOSTVMMONITORMAPPING::RemoveMapping((struct DXGGLOBAL *)((char *)v21 + 305232), v7);
  WdLogSingleEntry1(4LL, this);
  WdLogGlobalForLineNumber = 9699;
  ExReleasePushLockSharedEx(&qword_14015D690, 0LL);
}
