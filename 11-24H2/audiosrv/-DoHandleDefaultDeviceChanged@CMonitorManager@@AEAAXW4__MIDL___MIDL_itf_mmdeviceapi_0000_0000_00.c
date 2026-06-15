/*
 * XREFs of ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180008BD8
 * Callers:
 *     ?HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1801190F0 (-HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180008BA8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?EnableAudioMirroringOnEndpointIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@PEAG@Z @ 0x180009268 (-EnableAudioMirroringOnEndpointIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@PEAG@Z.c)
 *     ??1?$CAtlArray@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA@XZ @ 0x180009B9C (--1-$CAtlArray@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A940 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180019F28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18001B2E0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800480B0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004A2E8 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x180053800 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18006F710 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x1800712BC (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180089658 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x1800C0208 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     WPP_SF_SS @ 0x1800C51D0 (WPP_SF_SS.c)
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18011796C (-Add@-$CAtlArray@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@.c)
 *     ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18011911C (-HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z @ 0x18011A580 (-IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18011B424 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall CMonitorManager::DoHandleDefaultDeviceChanged(
        CMonitorManager *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        const unsigned __int16 *a3)
{
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v3; // r13d
  CMonitorManager::CaptureMonitor *v4; // r14
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int16 *v7; // rax
  _QWORD *Next; // rax
  __int64 v9; // rdx
  _QWORD *v10; // r10
  _QWORD *v11; // rbx
  int v12; // eax
  __int64 v13; // r10
  __int64 v14; // r8
  bool v15; // zf
  unsigned __int64 i; // rbx
  int v17; // esi
  unsigned int j; // ebx
  int v19; // eax
  int v20; // eax
  int MonitorForCaptureDeviceIfAppropriate; // eax
  unsigned __int16 *v22; // rcx
  const unsigned __int16 *v23; // rbx
  CMonitorManager *v24; // rcx
  ATL::CAtlException *v25; // rbx
  _QWORD *v26; // [rsp+30h] [rbp-B8h] BYREF
  struct IMMDevice *v27; // [rsp+38h] [rbp-B0h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-A0h] BYREF
  unsigned __int16 *v30; // [rsp+50h] [rbp-98h] BYREF
  struct IMMDevice *v31; // [rsp+58h] [rbp-90h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-88h] BYREF
  char v33; // [rsp+68h] [rbp-80h]
  __int64 v34; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v35; // [rsp+78h] [rbp-70h]
  __int64 v36; // [rsp+80h] [rbp-68h]
  int v37; // [rsp+88h] [rbp-60h]
  LPCRITICAL_SECTION v38; // [rsp+90h] [rbp-58h] BYREF
  char v39; // [rsp+98h] [rbp-50h]
  ATL::CAtlException *v40; // [rsp+A0h] [rbp-48h] BYREF
  CMonitorManager::CaptureMonitor *v41; // [rsp+F0h] [rbp+8h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v42; // [rsp+F8h] [rbp+10h]
  const unsigned __int16 *v43; // [rsp+100h] [rbp+18h]
  __int64 v44; // [rsp+108h] [rbp+20h] BYREF

  v43 = a3;
  v42 = a2;
  v41 = this;
  v3 = a2;
  v4 = this;
  v38 = (LPCRITICAL_SECTION)((char *)this + 16);
  v39 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v38);
  if ( *((_DWORD *)v4 + 14) != 1 )
    goto LABEL_85;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v4 + 72);
  v33 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v29 = 0LL;
  v31 = 0LL;
  v34 = 0LL;
  v6 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0;
  v7 = (unsigned __int16 *)*((_QWORD *)v4 + 14);
  v30 = v7;
  while ( v7 )
  {
    Next = (_QWORD *)ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v5, &v30);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v26, *Next);
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      v11 = v26;
    }
    else
    {
      v11 = v26;
      v12 = std::wstring::c_str(v26 + 17, v9, *(_QWORD *)(v26[26] + 96LL));
      WPP_SF_SS(*(_QWORD *)(v13 + 16), 30, (unsigned int)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, v12, v14);
      v10 = WPP_GLOBAL_Control;
    }
    if ( v3 )
    {
      if ( v3 != eCapture )
        goto LABEL_21;
      v15 = v11[9] == 0LL;
    }
    else
    {
      v15 = v11[13] == 0LL;
    }
    if ( v15 )
    {
      if ( v10 != &WPP_GLOBAL_Control && (*((_DWORD *)v10 + 7) & 0x800000) != 0 && *((_BYTE *)v10 + 25) >= 4u )
        WPP_SF_(v10[2], 31LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids);
      try
      {
        ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::Add(
          &v34,
          v11);
      }
      catch ( ATL::CAtlException *v40 )
      {
        v25 = v40;
        if ( *(_DWORD *)v40 == -1073741571 )
          _o__resetstkoflw();
        LODWORD(v44) = *(_DWORD *)v25;
        if ( (int)v44 < 0 )
        {
          v4 = v41;
          v3 = v42;
          v6 = v35;
          goto LABEL_21;
        }
        v4 = v41;
        v3 = v42;
      }
      v6 = v35;
    }
LABEL_21:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
    v7 = v30;
  }
  for ( i = 0LL; i < v6; ++i )
  {
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
      &v41,
      *(_QWORD *)(v34 + 8 * i));
    v44 = 0LL;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 32LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids);
    }
    if ( *((_BYTE *)v41 + 49) )
      CMonitorManager::CaptureMonitor::HandleDefaultDeviceChanges(v41);
    else
      CMonitorManager::RemoveMonitor(v4, v41, 1);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v44);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)v4 + 8) + 24LL))(
          *((_QWORD *)v4 + 8),
          2LL,
          1LL,
          &v29);
  if ( v17 < 0
    || (v28 = 0, v17 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v29 + 24LL))(v29, &v28), v17 < 0) )
  {
    ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::~CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>(&v34);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v29);
    ATL::CCritSecLock::~CCritSecLock(&lpCriticalSection);
    goto LABEL_81;
  }
  for ( j = 0; j < v28; ++j )
  {
    v27 = 0LL;
    v26 = 0LL;
    v30 = 0LL;
    LOBYTE(v41) = 0;
    LODWORD(v44) = 0;
    if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v29 + 32LL))(v29, j, &v27) < 0 )
    {
      CoTaskMemFree(0LL);
      if ( v26 )
        (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
LABEL_50:
      if ( v27 )
        ((void (__fastcall *)(struct IMMDevice *))v27->lpVtbl->Release)(v27);
      continue;
    }
    if ( ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, _QWORD **))v27->lpVtbl->QueryInterface)(
           v27,
           &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
           &v26) < 0
      || (*(int (__fastcall **)(_QWORD *, __int64 *))(*v26 + 24LL))(v26, &v44) < 0 )
    {
      v22 = 0LL;
      goto LABEL_67;
    }
    v19 = v44;
    if ( !(_DWORD)v44 )
    {
      v20 = CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate(v4, v27, *((unsigned __int16 **)v4 + 42));
      if ( v20 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            33LL,
            &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
            (unsigned int)v20);
        }
        CoTaskMemFree(0LL);
        if ( v26 )
          (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
        goto LABEL_50;
      }
      v19 = v44;
    }
    if ( v19 == 1 )
    {
      if ( CMonitor::IsCaptureMonitorEnabled(v27, &v30, (bool *)&v41) && (_BYTE)v41 )
      {
LABEL_60:
        MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(v4, v27);
        if ( MonitorForCaptureDeviceIfAppropriate < 0
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            34LL,
            &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
            (unsigned int)MonitorForCaptureDeviceIfAppropriate);
        }
        goto LABEL_65;
      }
      v19 = v44;
    }
    if ( !v19 && CMonitorManager::IsRenderMirrorEnabled(v4, v27, &v30) )
      goto LABEL_60;
LABEL_65:
    v22 = v30;
LABEL_67:
    CoTaskMemFree(v22);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v27);
  }
  v23 = v43;
  v17 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)v4 + 8) + 40LL))(
          *((_QWORD *)v4 + 8),
          v43,
          &v31);
  if ( v17 < 0 )
  {
    ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::~CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>(&v34);
    if ( v31 )
      ((void (__fastcall *)(struct IMMDevice *))v31->lpVtbl->Release)(v31);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    if ( v33 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_81;
  }
  if ( v3 == eRender && !CMonitorManager::IsMonitorMirrorEligible(v24, v31) )
  {
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v41,
      v23,
      -1LL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      (char *)v4 + 336,
      &v41);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v41);
    if ( !*((_QWORD *)v4 + 42) )
      v17 = -2147024882;
  }
  ATL::CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::~CAtlArray<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>(&v34);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v29);
  ATL::CCritSecLock::~CCritSecLock(&lpCriticalSection);
  if ( v17 < 0 )
  {
LABEL_81:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        35LL,
        &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
        (unsigned int)v17);
    }
  }
LABEL_85:
  if ( v39 )
    LeaveCriticalSection(v38);
}
