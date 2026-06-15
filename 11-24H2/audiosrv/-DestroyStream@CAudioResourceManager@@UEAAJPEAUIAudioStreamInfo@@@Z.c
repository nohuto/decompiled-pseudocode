/*
 * XREFs of ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800BBFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18000D574 (--0-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18000DC00 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x1800274F0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180027E54 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029ADC (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18004D400 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004FBEC (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForEachStream_Crash@@@details@wil@@QEAA_NXZ @ 0x1800C0138 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForEachStream_Crash@@@d.c)
 *     ?LockConnectDisconnectFromStreamGroup@CAudioStream@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800C8E70 (-LockConnectDisconnectFromStreamGroup@CAudioStream@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$r.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CAudioResourceManager::DestroyStream(CAudioResourceManager *this, struct IAudioStreamInfo *a2)
{
  __int64 v4; // rax
  int (__fastcall *v5)(struct IAudioStreamInfo *, __int64 *); // rbx
  _DWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 (__fastcall *v9)(struct IAudioStreamInfo *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64 *); // rdi
  unsigned int v15; // r14d
  __int64 (__fastcall *v16)(struct IAudioStreamInfo *, struct _RTL_CRITICAL_SECTION **); // rbx
  int v17; // eax
  __int64 v18; // rdx
  struct _RTL_CRITICAL_SECTION *v19; // rbx
  struct _LIST_ENTRY *Flink; // rdi
  __int64 v21; // rax
  const unsigned __int16 *v22; // rax
  CEndpointStoreCache *v23; // rcx
  struct CEndpointStore *v24; // rbx
  bool v25; // di
  volatile signed __int32 *v26; // rax
  __int64 v27; // r8
  __int64 v28; // r10
  int v29; // eax
  const char *v30; // r9
  __int64 v32; // [rsp+40h] [rbp-B8h] BYREF
  struct CEndpointStore *v33; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-A0h] BYREF
  char *v36; // [rsp+60h] [rbp-98h]
  volatile signed __int32 *v37; // [rsp+68h] [rbp-90h] BYREF
  bool v38; // [rsp+70h] [rbp-88h]
  struct _RTL_CRITICAL_SECTION *v39; // [rsp+78h] [rbp-80h] BYREF
  _QWORD v40[3]; // [rsp+88h] [rbp-70h] BYREF
  bool v41; // [rsp+A0h] [rbp-58h]
  _QWORD *v42; // [rsp+C0h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  unsigned int v44; // [rsp+108h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v45; // [rsp+110h] [rbp+18h] BYREF
  __int64 v46; // [rsp+118h] [rbp+20h] BYREF

  v35 = 0LL;
  v4 = *(_QWORD *)a2;
  v34 = 0LL;
  if ( (*(int (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v4 + 32))(a2, &v34) >= 0 )
  {
    if ( v34 )
    {
      v5 = *(int (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 24LL);
      wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset(&v35);
      if ( v5(a2, &v35) >= 0 )
      {
        if ( v34 )
        {
          v6 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
          if ( *v6 > 4u )
          {
            v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 40LL))(v35);
            v45 = (struct _RTL_CRITICAL_SECTION *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 64LL))(v34);
            v33 = (struct CEndpointStore *)(*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              (__int64)v6,
              byte_1801A9C2D,
              v7,
              v8,
              (__int64)&v33,
              (const WCHAR **)&v45,
              (__int64)&v44);
          }
        }
      }
    }
  }
  v46 = 0LL;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ForEachStream_Crash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_ForEachStream_Crash>::GetImpl'::`2'::impl) )
  {
    v45 = 0LL;
    v16 = *(__int64 (__fastcall **)(struct IAudioStreamInfo *, struct _RTL_CRITICAL_SECTION **))(*(_QWORD *)a2 + 128LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v45);
    v17 = v16(a2, &v45);
    v11 = v17;
    if ( v17 >= 0 )
    {
      v19 = v45;
      Flink = v45->DebugInfo[1].ProcessLocksList.Flink;
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v46);
      v17 = ((__int64 (__fastcall *)(struct _RTL_CRITICAL_SECTION *, __int64 *))Flink)(v19, &v46);
      v11 = v17;
      if ( v17 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(struct _RTL_CRITICAL_SECTION *, struct IAudioStreamInfo *))&v45->DebugInfo->EntryCount)(
                v45,
                a2);
        v44 = v15;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
        goto LABEL_20;
      }
      v18 = 1966LL;
    }
    else
    {
      v18 = 1964LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v17);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
    goto LABEL_38;
  }
  CAudioStream::LockConnectDisconnectFromStreamGroup(((unsigned __int64)a2 - 8) & -(__int64)(a2 != 0LL), &v45);
  v32 = 0LL;
  v9 = *(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 128LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v32);
  v10 = v9(a2, &v32);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 1955LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v10);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v32);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v45);
    goto LABEL_38;
  }
  v13 = v32;
  v14 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 64LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v46);
  v10 = v14(v13, &v46);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 1957LL;
    goto LABEL_12;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, struct IAudioStreamInfo *))(*(_QWORD *)v32 + 32LL))(v32, a2);
  v44 = v15;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v32);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v45);
LABEL_20:
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2)
    || (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2) )
  {
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 152LL))(v46);
    AudioPolicyManagerExtension_OnPreMatchFormatStateChange(v21);
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2)
    || (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2)
    || (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 152LL))(a2) )
  {
    try
    {
      v33 = 0LL;
      v22 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 152LL))(v46);
      if ( (int)CEndpointStoreCache::GetEndpointStore(v23, v22, &v33) >= 0 )
      {
        v24 = v33;
        if ( v33 )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)v33 + 48));
          v39 = (struct _RTL_CRITICAL_SECTION *)((char *)v24 + 48);
          v25 = (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2)
             || (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2);
          GetSerialWorkQueue();
          v36 = (char *)this - 8;
          wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::com_ptr_t<CEndpointStore,wil::err_returncode_policy>(
            &v37,
            (volatile int *)&v33);
          v38 = v25;
          v40[0] = off_18017AD98;
          v40[1] = v36;
          v26 = v37;
          v37 = 0LL;
          v40[2] = v26;
          v41 = v25;
          v42 = v40;
          v29 = CSerialWorkQueue::QueueRecurringItem(
                  v28,
                  g_TimeoutRevertAudioPumpFormatAndPeriodInMs,
                  v27,
                  v40,
                  (char *)v24 + 88);
          if ( v29 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              1994LL,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)(unsigned int)v29);
          wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v37);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v39);
        }
      }
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v33);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x7CD,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        v30);
      v15 = v44;
    }
  }
  v11 = v15;
LABEL_38:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v46);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v35);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
  return v11;
}
