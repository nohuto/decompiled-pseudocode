/*
 * XREFs of ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@KPEAUIAudioModeEffectsWatcher@@@Z @ 0x180059270
 * Callers:
 *     ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAKPEAUIAudioModeEffectsWatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUEndpointCharacteristicsDescriptor@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK$$QEAPEAUIAudioModeEffectsWatcher@@@Z @ 0x1800590C4 (--$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUEndpointCharacteristic.c)
 * Callees:
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18000C640 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x18000C978 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x18001DF28 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 *     ?QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@3@@Z @ 0x18001FB78 (-QueueRecurringWaitItem@CSerialWorkQueue@@QEAAJPEAXV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_.c)
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUStreamGroupParams@@K@Z @ 0x1800200FC (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUS.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180022D84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?ApplyStreamingEffectsOverride@CSharedStreamGroupProxy@@AEAAXXZ @ 0x18004C32C (-ApplyStreamingEffectsOverride@CSharedStreamGroupProxy@@AEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U_tlgWrapperPtrSize@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU_tlgWrapperPtrSize@@5@Z @ 0x18004C5EC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U_tlgWrapperPtrSize@@U3@@-$_tlgWriteTemplate@.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??$AsWeak@VCSharedStreamGroupProxy@@@WRL@Microsoft@@YAJPEAVCSharedStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x1800560B8 (--$AsWeak@VCSharedStreamGroupProxy@@@WRL@Microsoft@@YAJPEAVCSharedStreamGroupProxy@@PEAVWeakRef@.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x180058474 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ??4?$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z @ 0x18008118C (--4-$ComPtr@UIStreamGroup@@@WRL@Microsoft@@QEAAAEAV012@PEAUIStreamGroup@@@Z.c)
 *     ?ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ @ 0x1800A6330 (-ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSharedStreamGroupProxy::RuntimeClassInitialize(
        wil::details **this,
        struct EndpointCharacteristicsDescriptor *a2,
        const struct StreamGroupParams *a3,
        struct STREAM_GROUP_DESCRIPTOR *a4,
        unsigned int a5,
        struct IAudioModeEffectsWatcher *a6)
{
  __int64 *v10; // rax
  int v11; // eax
  unsigned int v12; // edi
  struct AudioSrvTelemetryProvider *v13; // rax
  HRESULT Instance; // eax
  LARGE_INTEGER *p_PerformanceCount; // rcx
  int event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z; // eax
  __int64 v17; // rdx
  struct AudioSrvTelemetryProvider *v18; // rax
  int v19; // eax
  __int64 v20; // r8
  wil::details *v21; // rdi
  CSerialWorkQueue *SerialWorkQueue; // rax
  struct AudioSrvTelemetryProvider *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int16 v27; // [rsp+40h] [rbp-C0h] BYREF
  IUnknown *pProxy; // [rsp+48h] [rbp-B8h] BYREF
  wil::details *v29; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  wil::details *v31; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v33; // [rsp+70h] [rbp-90h] BYREF
  int v34; // [rsp+78h] [rbp-88h]
  _QWORD v35[8]; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+C0h] [rbp-40h] BYREF
  LARGE_INTEGER v37; // [rsp+1B0h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  v29 = (wil::details *)(this + 45);
  v10 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v29);
  v11 = Microsoft::WRL::AsWeak<CSharedStreamGroupProxy>((__int64)this, v10);
  v12 = v11;
  if ( v11 >= 0 )
  {
    pProxy = 0LL;
    v13 = AudioSrvTelemetryProvider::Instance();
    CPerfTracker::CPerfTracker(
      &PerformanceCount,
      *((const struct _tlgProvider_t **)v13 + 1),
      "StreamGroup_CoCreate",
      0LL);
    Instance = CoCreateInstance(
                 &GUID_06b2132b_5b99_42a6_b8b6_a1709e191c70,
                 0LL,
                 0x17u,
                 &GUID_fa596fcf_8ef4_43bf_bfa1_9bc2e7c1bb7c,
                 (LPVOID *)&pProxy);
    v12 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B0,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)Instance);
      p_PerformanceCount = &PerformanceCount;
LABEL_10:
      CPerfTracker::~CPerfTracker((CPerfTracker *)p_PerformanceCount);
      goto LABEL_27;
    }
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
    v12 = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
    if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z >= 0 )
    {
      v18 = AudioSrvTelemetryProvider::Instance();
      CPerfTracker::CPerfTracker(&v37, *((const struct _tlgProvider_t **)v18 + 1), "StreamGroup_Initialize", 0LL);
      v19 = ((__int64 (__fastcall *)(IUnknown *, struct STREAM_GROUP_DESCRIPTOR *, unsigned __int64))pProxy->lpVtbl[1].AddRef)(
              pProxy,
              a4,
              -(__int64)(this != 0LL) & (unsigned __int64)(this + 2));
      v12 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3BB,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v19);
        p_PerformanceCount = &v37;
        goto LABEL_10;
      }
      CPerfTracker::~CPerfTracker((CPerfTracker *)&v37);
      Microsoft::WRL::ComPtr<IStreamGroup>::operator=(this + 11, pProxy);
      event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = CBaseStreamGroupProxy::RuntimeClassInitialize((CBaseStreamGroupProxy *)(this + 1), a2, a3, a5);
      v12 = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
      if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z >= 0 )
      {
        event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = CSharedStreamGroupProxy::ConfigureAuxiliaryInputStream((CSharedStreamGroupProxy *)this);
        v12 = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
        if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z >= 0 )
        {
          v21 = this[224];
          this[224] = a6;
          if ( a6 )
            (*(void (__fastcall **)(struct IAudioModeEffectsWatcher *))(*(_QWORD *)a6 + 8LL))(a6);
          if ( v21 )
            (*(void (__fastcall **)(wil::details *))(*(_QWORD *)v21 + 16LL))(v21);
          event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(this + 225, 0, v20, 0LL);
          v12 = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
          if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z >= 0 )
          {
            SerialWorkQueue = GetSerialWorkQueue();
            v35[0] = off_18016F4A8;
            v35[1] = this;
            v35[7] = v35;
            event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z = CSerialWorkQueue::QueueRecurringWaitItem(SerialWorkQueue, this[225], (__int64)v35, (__int64)(this + 226));
            v12 = event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z;
            if ( event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z >= 0 )
            {
              CSharedStreamGroupProxy::ApplyStreamingEffectsOverride((CSharedStreamGroupProxy *)this);
              v27 = -13107 * ((this[35] - this[34]) >> 2);
              v23 = AudioSrvTelemetryProvider::Instance();
              if ( **((_DWORD **)v23 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v23 + 1), 512LL) )
              {
                v31 = this[34];
                v32 = 20 * v27;
                v33 = &v27;
                v34 = 2;
                v29 = this[37];
                v30 = (unsigned __int64)(this + 1) & -(__int64)(this != 0LL);
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
                  v24,
                  (int)&unk_1801A2218,
                  v24,
                  v25,
                  (__int64)&v30,
                  (const WCHAR **)&v29,
                  (__int64 *)&v33,
                  (__int64 *)&v31);
              }
              v12 = 0;
              goto LABEL_27;
            }
            v17 = 977LL;
          }
          else
          {
            v17 = 967LL;
          }
        }
        else
        {
          v17 = 962LL;
        }
      }
      else
      {
        v17 = 959LL;
      }
    }
    else
    {
      v17 = 951LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z);
LABEL_27:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pProxy);
    return v12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3AA,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
