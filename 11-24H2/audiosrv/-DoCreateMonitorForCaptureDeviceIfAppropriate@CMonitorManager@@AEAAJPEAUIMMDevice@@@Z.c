/*
 * XREFs of ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1801181F0
 * Callers:
 *     ?CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180117EB0 (-CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WOR.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180008BA8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18000A918 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x18006950C (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x1800712BC (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180089658 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ??1?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A07F8 (--1-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     WPP_SF_ @ 0x1800C0208 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 *     WPP_SF_SS @ 0x1800C51D0 (WPP_SF_SS.c)
 *     ??$?0$0EB@@StringReference@Internal@Windows@@QEAA@AEAY0EB@$$CBG@Z @ 0x180116CD8 (--$-0$0EB@@StringReference@Internal@Windows@@QEAA@AEAY0EB@$$CBG@Z.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180117AD0 (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0PEAUStreamConnectionSettings@@_NPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@PEAPEAVCaptureMonitor@1@@Z @ 0x180117D10 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0PEAUStreamConnectionSettings@@_NPEAUICapabilityUsageSe.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x18011892C (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     GetAudioSrvResource @ 0x180118ACC (GetAudioSrvResource.c)
 *     ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18011BAA4 (-Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x18011D984 (-Start@CMonitor@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate(
        CMonitorManager *this,
        struct IMMDevice *a2)
{
  unsigned int v4; // esi
  int v5; // r12d
  int v6; // eax
  _QWORD *v8; // rcx
  unsigned __int16 *v9; // r8
  _UNKNOWN **v10; // rcx
  CMonitorManager::CaptureMonitor *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  const unsigned __int16 *v14; // rdx
  HSTRING *v15; // rax
  int ActivationFactory; // eax
  int v17; // edi
  __int64 v18; // rdi
  const WCHAR *v19; // rax
  unsigned __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  CMonitor *v23; // rcx
  _UNKNOWN **v24; // r10
  const wchar_t *v25; // rax
  __int64 v26; // r10
  ATL::CAtlException *v27; // rbx
  bool v28; // [rsp+40h] [rbp-2F8h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-2F0h] BYREF
  CMonitorManager::CaptureMonitor *v30; // [rsp+50h] [rbp-2E8h] BYREF
  unsigned __int16 *v31; // [rsp+58h] [rbp-2E0h] BYREF
  int v32; // [rsp+60h] [rbp-2D8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-2D0h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp-2C8h] BYREF
  __int64 v35; // [rsp+78h] [rbp-2C0h] BYREF
  __int64 v36; // [rsp+80h] [rbp-2B8h] BYREF
  PCWSTR v37; // [rsp+88h] [rbp-2B0h]
  int v38; // [rsp+90h] [rbp-2A8h]
  __int64 v39; // [rsp+98h] [rbp-2A0h] BYREF
  LPCRITICAL_SECTION v40[2]; // [rsp+A0h] [rbp-298h] BYREF
  LPCRITICAL_SECTION v41[2]; // [rsp+B0h] [rbp-288h] BYREF
  __int64 (__fastcall *v42)(__int64, HSTRING, _QWORD); // [rsp+C0h] [rbp-278h]
  ATL::CAtlException *v43; // [rsp+C8h] [rbp-270h] BYREF
  HSTRING string; // [rsp+D0h] [rbp-268h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+D8h] [rbp-260h] BYREF
  _BYTE v46[528]; // [rsp+F0h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+338h] [rbp+0h]

  v4 = 0;
  v39 = 0LL;
  v31 = 0LL;
  v28 = 0;
  v32 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v40, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  if ( *((_DWORD *)this + 14) == 1 )
  {
    v5 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
           &v39);
    if ( v5 < 0 || (v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v39 + 24LL))(v39, &v32), v5 < 0) )
    {
LABEL_12:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x4Cu,
          (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
          v5);
      }
      goto LABEL_16;
    }
    v6 = v32;
    if ( v32 == 1 )
    {
      if ( CMonitor::IsCaptureMonitorEnabled(a2, &v31, &v28) )
        goto LABEL_10;
      v6 = v32;
    }
    if ( v6 || !CMonitorManager::IsRenderMirrorEnabled(this, a2, &v31) )
      goto LABEL_16;
LABEL_10:
    pv = 0LL;
    v5 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
    if ( v5 < 0 )
    {
      CoTaskMemFree(pv);
      goto LABEL_12;
    }
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x44u,
          (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
          v31);
        v8 = WPP_GLOBAL_Control;
      }
      if ( v8 != &WPP_GLOBAL_Control && (*((_DWORD *)v8 + 7) & 0x800000) != 0 && *((_BYTE *)v8 + 25) >= 4u )
        WPP_SF_(v8[2], 69LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids);
    }
    v30 = 0LL;
    v9 = (unsigned __int16 *)&LocaleName;
    if ( !v28 )
      v9 = v31;
    v38 = CMonitorManager::CreateMonitor(this, (const unsigned __int16 *)pv, v9, 0LL, 0, 0LL, &v30);
    v5 = v38;
    if ( v38 < 0 )
      goto LABEL_80;
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v41, (struct _RTL_CRITICAL_SECTION *)((char *)this + 72));
    v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      v11 = v30;
    }
    else
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v11 = v30;
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x46u,
          (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
          v30);
        v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
      else
      {
        v11 = v30;
      }
      if ( v10 != &WPP_GLOBAL_Control && (*((_DWORD *)v10 + 7) & 0x800000) != 0 && *((_BYTE *)v10 + 25) >= 4u )
        WPP_SF_S((__int64)v10[2], 0x47u, (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, (const wchar_t *)pv);
    }
    CMonitorManager::FindMonitor(this, &v36, pv);
    if ( !v36 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x48u,
          (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
          (const wchar_t *)pv);
      }
      try
      {
        v5 = 0;
        ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
          (__int64 *)this + 14,
          (__int64)v11);
      }
      catch ( ATL::CAtlException *v43 )
      {
        v27 = v43;
        if ( *(_DWORD *)v43 == -1073741571 )
          _o__resetstkoflw();
        LODWORD(v37) = *(_DWORD *)v27;
        v5 = (int)v37;
        if ( (int)v37 >= 0 )
        {
          v11 = v30;
          goto LABEL_46;
        }
LABEL_79:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
        ATL::CCritSecLock::~CCritSecLock(v41);
LABEL_80:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v30);
        CoTaskMemFree(pv);
        if ( v5 < 0 )
          goto LABEL_12;
LABEL_16:
        ATL::CCritSecLock::~CCritSecLock(v40);
        CoTaskMemFree(v31);
        v4 = v5;
        goto LABEL_17;
      }
LABEL_46:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x49u,
          (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
          v31);
      }
      memset_0(v46, 0, 0x208uLL);
      v33 = 0LL;
      if ( (unsigned __int8)GetAudioSrvResource(v13, v46) )
      {
        v35 = 0LL;
        v15 = Windows::Internal::StringReference::StringReference(&string, (const unsigned __int16 (*)[65])v14);
        ActivationFactory = RoGetActivationFactory(*v15, &GUID_7c353e2a_46ee_44e5_af3d_6ad3fc49bd22, &v35);
        v17 = ActivationFactory;
        if ( ActivationFactory < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x989,
            (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
            (const char *)(unsigned int)ActivationFactory);
LABEL_53:
          wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>(&v35);
          wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>(&v33);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
          ATL::CCritSecLock::~CCritSecLock(v41);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v30);
          CoTaskMemFree(pv);
          pv = 0LL;
          ATL::CCritSecLock::~CCritSecLock(v40);
          CoTaskMemFree(v31);
          v4 = v17;
          goto LABEL_17;
        }
        v34 = 0LL;
        v18 = v35;
        v42 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v35 + 64LL);
        v34 = 0LL;
        v19 = c_szCapabilityMicrophone;
        v37 = c_szCapabilityMicrophone;
        v20 = -1LL;
        do
          ++v20;
        while ( c_szCapabilityMicrophone[v20] );
        if ( v20 > 0xFFFFFFFF )
        {
          LODWORD(v20) = -1;
          RaiseException(0xC000000D, 1u, 0, 0LL);
          v19 = v37;
        }
        WindowsCreateStringReference(v19, v20, &hstringHeader, &string);
        v17 = v42(v18, string, &v34);
        if ( v17 < 0 )
        {
          v21 = 2444LL;
LABEL_60:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
            (const char *)(unsigned int)v17);
          wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)&v34);
          goto LABEL_53;
        }
        v22 = v33;
        v33 = 0LL;
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        v17 = (**v34)(v34, &GUID_11c7ccb6_c74f_50a3_b960_88008767d939, &v33);
        if ( v17 < 0 )
        {
          v21 = 2445LL;
          goto LABEL_60;
        }
        wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)&v34);
        wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>(&v35);
      }
      v23 = (CMonitor *)*((_QWORD *)v11 + 26);
      if ( v38 )
        CMonitor::Terminate(v23, 1, 0LL);
      else
        CMonitor::Start(v23);
      wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>(&v33);
      goto LABEL_79;
    }
    v24 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v25 = (const wchar_t *)std::wstring::c_str(v36 + 168, v12);
        WPP_SF_SS(
          *(_QWORD *)(v26 + 16),
          0x4Au,
          (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
          (const wchar_t *)pv,
          v25);
        v24 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
      if ( v24 != &WPP_GLOBAL_Control && (*((_DWORD *)v24 + 7) & 0x800000) != 0 && *((_BYTE *)v24 + 25) >= 4u )
        WPP_SF_q(
          (__int64)v24[2],
          0x4Bu,
          (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
          *((_QWORD *)v11 + 26));
    }
    CMonitorManager::CaptureMonitor::Uninitialize(v11);
    goto LABEL_79;
  }
  ATL::CCritSecLock::~CCritSecLock(v40);
  CoTaskMemFree(0LL);
LABEL_17:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
  return v4;
}
