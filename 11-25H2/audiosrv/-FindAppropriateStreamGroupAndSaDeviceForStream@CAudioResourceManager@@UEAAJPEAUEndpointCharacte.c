/*
 * XREFs of ?FindAppropriateStreamGroupAndSaDeviceForStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEBGPEAUIAudioStreamInfo@@@Z @ 0x180088C30
 * Callers:
 *     _lambda_0573610836bdf3032c5c5c6e5c762a50_::operator() @ 0x1800B759C (_lambda_0573610836bdf3032c5c5c6e5c762a50_--operator().c)
 *     _lambda_62f236fd636d2d8c09667a35590236bb_::operator() @ 0x1800B77C4 (_lambda_62f236fd636d2d8c09667a35590236bb_--operator().c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800020BC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@@Z @ 0x1800028F0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x1800132E0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002153C (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800601F4 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007576C (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$out_param_ptr_t@PEAPEAXV?$com_ptr_t@UIDeviceTopology@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800799C4 (--1-$out_param_ptr_t@PEAPEAXV-$com_ptr_t@UIDeviceTopology@@Uerr_returncode_policy@wil@@@wil@@@de.c)
 *     ?ConnectToNewStreamGroup@CAudioStream@@QEAAJPEAUIStreamGroupProxy@@@Z @ 0x1800C8FDC (-ConnectToNewStreamGroup@CAudioStream@@QEAAJPEAUIStreamGroupProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioResourceManager::FindAppropriateStreamGroupAndSaDeviceForStream(
        CAudioResourceManager *this,
        CEndpointCharacteristics **a2,
        const unsigned __int16 *a3,
        struct IAudioStreamInfo *a4)
{
  int EndpointStore; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  struct CEndpointStore *v11; // rdi
  int CustomResourceManagerService; // eax
  struct _RTL_CRITICAL_SECTION **v13; // rax
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64, _QWORD, struct IStreamGroupProxy **); // rbx
  __int64 (__fastcall *v16)(struct IAudioStreamInfo *, struct IStreamGroupProxy **); // rbx
  int v17; // eax
  __int64 v18; // rdx
  struct AudioSrvTelemetryProvider *v19; // rax
  _DWORD *v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // rcx
  int v24; // ecx
  _DWORD *v25; // rcx
  int v26; // ecx
  struct IStreamGroupProxy *v27; // rbx
  __int64 (__fastcall *v28)(struct IStreamGroupProxy *, __int64 *); // rsi
  int v29; // eax
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rdx
  char v35; // r12
  __int64 (__fastcall *v36)(struct IDeviceGraphManager *, CEndpointCharacteristics **, _QWORD, _QWORD, int, __int64, __int64 *); // rsi
  __int64 v37; // rbx
  int v38; // eax
  unsigned __int64 v39; // r9
  __int64 v40; // rdx
  int v41; // eax
  int v42; // eax
  struct IStreamGroupProxy *v44; // [rsp+48h] [rbp-49h] BYREF
  struct IStreamGroupProxy *v45; // [rsp+50h] [rbp-41h] BYREF
  void *v46; // [rsp+58h] [rbp-39h] BYREF
  struct _RTL_CRITICAL_SECTION *v47; // [rsp+60h] [rbp-31h] BYREF
  struct _RTL_CRITICAL_SECTION *v48; // [rsp+68h] [rbp-29h] BYREF
  __int64 v49; // [rsp+70h] [rbp-21h] BYREF
  struct _RTL_CRITICAL_SECTION *v50; // [rsp+78h] [rbp-19h] BYREF
  __int64 v51; // [rsp+80h] [rbp-11h] BYREF
  __int64 v52; // [rsp+88h] [rbp-9h] BYREF
  struct CEndpointStore *v53; // [rsp+90h] [rbp-1h] BYREF
  struct _RTL_CRITICAL_SECTION *v54; // [rsp+98h] [rbp+7h] BYREF
  struct IStreamGroupProxy *v55; // [rsp+A0h] [rbp+Fh] BYREF
  __int64 v56; // [rsp+A8h] [rbp+17h] BYREF
  __int64 *v57; // [rsp+B0h] [rbp+1Fh] BYREF
  __int64 v58; // [rsp+B8h] [rbp+27h] BYREF
  char v59; // [rsp+C0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v53 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(this, a3, &v53);
  v9 = EndpointStore;
  if ( EndpointStore >= 0 )
  {
    v10 = *((_QWORD *)this + 6);
    v11 = v53;
    (*(void (__fastcall **)(__int64, struct _RTL_CRITICAL_SECTION **, struct CEndpointStore *))(*(_QWORD *)v10 + 80LL))(
      v10,
      &v48,
      v53);
    v46 = 0LL;
    CustomResourceManagerService = CEndpointCharacteristics::TryGetCustomResourceManagerService(
                                     *a2,
                                     &GUID_4d3814ae_3db5_4fb3_819c_1493075ce6e3,
                                     &v46);
    v9 = CustomResourceManagerService;
    if ( CustomResourceManagerService < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD62,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)CustomResourceManagerService);
LABEL_5:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v46);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v48);
      goto LABEL_52;
    }
    v47 = 0LL;
    if ( v46 )
    {
      v13 = (struct _RTL_CRITICAL_SECTION **)(*(__int64 (__fastcall **)(void *, struct _RTL_CRITICAL_SECTION **))(*(_QWORD *)v46 + 96LL))(
                                               v46,
                                               &v54);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::operator=(
        &v47,
        v13);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v54);
    }
    (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION **))(**((_QWORD **)v11 + 13) + 128LL))(
      *((_QWORD *)v11 + 13),
      &v50);
    v45 = 0LL;
    v14 = *((_QWORD *)v11 + 13);
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IStreamGroupProxy **))(*(_QWORD *)v14 + 40LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v45);
    v9 = v15(v14, *(_QWORD *)((((unsigned __int64)a4 - 8) & -(__int64)(a4 != 0LL)) + 0x280), &v45);
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2147023728 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD72,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v9);
LABEL_11:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v50);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v47);
      goto LABEL_5;
    }
    v44 = 0LL;
    v16 = *(__int64 (__fastcall **)(struct IAudioStreamInfo *, struct IStreamGroupProxy **))(*(_QWORD *)a4 + 120LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v44);
    v17 = v16(a4, &v44);
    v9 = v17;
    if ( v17 < 0 )
    {
      v18 = 3445LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v17);
LABEL_15:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
      goto LABEL_11;
    }
    if ( v45 )
    {
      v19 = AudioSrvTelemetryProvider::Instance();
      v20 = (_DWORD *)*((_QWORD *)v19 + 1);
      if ( *v20 > 4u && tlgKeywordOn(*((_QWORD *)v19 + 1), 512LL) )
      {
        v54 = (struct _RTL_CRITICAL_SECTION *)a3;
        v55 = v44;
        v56 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 80LL))(a4);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
          (int)v20,
          (int)&unk_18019E836,
          v21,
          v22,
          (__int64)&v56,
          (__int64)&v55,
          (const WCHAR **)&v54);
      }
      if ( v45 != v44 )
      {
        v17 = CAudioStream::ConnectToNewStreamGroup(
                (CAudioStream *)(((unsigned __int64)a4 - 8) & -(__int64)(a4 != 0LL)),
                v45);
        v9 = v17;
        if ( v17 < 0 )
        {
          v18 = 3459LL;
          goto LABEL_14;
        }
      }
LABEL_28:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v50);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v47);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v46);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v48);
      v9 = 0;
      goto LABEL_52;
    }
    if ( (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v44 + 432LL))(v44) == 1 )
    {
      v23 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v23 > 4u && tlgKeywordOn((__int64)v23, 512LL) )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
          v24,
          (int)&unk_18019E7E1);
      if ( (*(int (__fastcall **)(struct IStreamGroupProxy *, unsigned __int64))(*(_QWORD *)v44 + 448LL))(
             v44,
             (((unsigned __int64)a4 - 8) & -(__int64)(a4 != 0LL)) + 600) >= 0 )
        goto LABEL_28;
    }
    v25 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v25 > 4u && tlgKeywordOn((__int64)v25, 512LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v26,
        (int)&unk_18019E79B);
    v49 = 0LL;
    v27 = v44;
    v28 = *(__int64 (__fastcall **)(struct IStreamGroupProxy *, __int64 *))(*(_QWORD *)v44 + 224LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v49);
    v29 = v28(v27, &v49);
    v9 = v29;
    if ( v29 < 0 )
    {
      v30 = (unsigned int)v29;
      v31 = 3486LL;
LABEL_34:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v31,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)v30);
LABEL_35:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v49);
      goto LABEL_15;
    }
    if ( !v49 )
    {
      v9 = -2147418113;
      v30 = 2147549183LL;
      v31 = 3487LL;
      goto LABEL_34;
    }
    v32 = *(_QWORD *)a4;
    v51 = 0LL;
    v33 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v32 + 192))(a4, &v51);
    v9 = v33;
    if ( v33 >= 0 )
    {
      v33 = (*(__int64 (__fastcall **)(__int64, struct IAudioStreamInfo *, _QWORD))(*(_QWORD *)v51 + 72LL))(
              v51,
              a4,
              0LL);
      v9 = v33;
      if ( v33 >= 0 )
      {
        v35 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v44 + 240LL))(v44);
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v44);
        v52 = 0LL;
        v36 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, CEndpointCharacteristics **, _QWORD, _QWORD, int, __int64, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 56LL);
        v57 = &v52;
        v58 = 0LL;
        v59 = 1;
        v37 = *(_QWORD *)((((unsigned __int64)a4 - 8) & -(__int64)(a4 != 0LL)) + 0x288);
        v38 = (*(__int64 (**)(void))(*(_QWORD *)((((unsigned __int64)a4 - 8) & -(__int64)(a4 != 0LL)) + 8) + 72LL))();
        v9 = v36(
               g_DeviceGraphManager,
               a2,
               *((_QWORD *)v11 + 13),
               *(_QWORD *)((((unsigned __int64)a4 - 8) & -(__int64)(a4 != 0LL)) + 0x280),
               v38,
               v37,
               &v58);
        wil::details::out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>::~out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>(&v57);
        if ( (v9 & 0x80000000) == 0 )
        {
          v41 = (*(__int64 (__fastcall **)(__int64, __int64, bool, _QWORD))(*(_QWORD *)v52 + 208LL))(
                  v52,
                  v49,
                  v35 == 0,
                  0LL);
          v9 = v41;
          if ( v41 >= 0 )
          {
            v42 = (*(__int64 (__fastcall **)(__int64, struct IAudioStreamInfo *, __int64, __int64))(*(_QWORD *)v51 + 64LL))(
                    v51,
                    a4,
                    v52,
                    1LL);
            v9 = v42;
            if ( v42 >= 0 )
            {
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v52);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v51);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v49);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v50);
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v47);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v46);
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v48);
              v9 = 0;
              goto LABEL_52;
            }
            v39 = (unsigned int)v42;
            v40 = 3506LL;
          }
          else
          {
            v39 = (unsigned int)v41;
            v40 = 3504LL;
          }
        }
        else
        {
          v39 = v9;
          v40 = 3502LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v40,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)v39);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v52);
        goto LABEL_41;
      }
      v34 = 3492LL;
    }
    else
    {
      v34 = 3490LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v33);
LABEL_41:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v51);
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD59,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)EndpointStore);
LABEL_52:
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v53);
  return v9;
}
