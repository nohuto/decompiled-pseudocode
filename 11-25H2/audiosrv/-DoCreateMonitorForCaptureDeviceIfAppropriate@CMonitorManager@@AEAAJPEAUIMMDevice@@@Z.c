/*
 * XREFs of ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x180110388
 * Callers:
 *     ?CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180110000 (-CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WOR.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18002CF84 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002F408 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x18007A9EC (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18008445C (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x18008DF28 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ??1?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A43C4 (--1-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     WPP_SF_ @ 0x1800C1670 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800C17A4 (WPP_SF_S.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 *     WPP_SF_SS @ 0x1800C5D00 (WPP_SF_SS.c)
 *     ??$?0$0EB@@StringReference@Internal@Windows@@QEAA@AEAY0EB@$$CBG@Z @ 0x18010EE0C (--$-0$0EB@@StringReference@Internal@Windows@@QEAA@AEAY0EB@$$CBG@Z.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x18010FC20 (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0PEAUStreamConnectionSettings@@_NPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@PEAPEAVCaptureMonitor@1@@Z @ 0x18010FE60 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0PEAUStreamConnectionSettings@@_NPEAUICapabilityUsageSe.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x180110AC4 (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     GetAudioSrvResource @ 0x180110C64 (GetAudioSrvResource.c)
 *     ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x180113C44 (-Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180115B44 (-Start@CMonitor@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v12; // rcx
  const unsigned __int16 *v13; // rdx
  HSTRING *v14; // rax
  int ActivationFactory; // eax
  int v16; // edi
  __int64 v17; // rdi
  const WCHAR *v18; // rax
  unsigned __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  CMonitor *v22; // rcx
  _UNKNOWN **v23; // r10
  const wchar_t *v24; // rax
  __int64 v25; // r10
  ATL::CAtlException *v26; // rbx
  bool v27; // [rsp+40h] [rbp-2F8h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-2F0h] BYREF
  CMonitorManager::CaptureMonitor *v29; // [rsp+50h] [rbp-2E8h] BYREF
  unsigned __int16 *v30; // [rsp+58h] [rbp-2E0h] BYREF
  int v31; // [rsp+60h] [rbp-2D8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-2D0h] BYREF
  __int64 (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp-2C8h] BYREF
  __int64 v34; // [rsp+78h] [rbp-2C0h] BYREF
  __int64 v35; // [rsp+80h] [rbp-2B8h] BYREF
  PCWSTR v36; // [rsp+88h] [rbp-2B0h]
  int v37; // [rsp+90h] [rbp-2A8h]
  __int64 v38; // [rsp+98h] [rbp-2A0h] BYREF
  LPCRITICAL_SECTION v39[2]; // [rsp+A0h] [rbp-298h] BYREF
  LPCRITICAL_SECTION v40[2]; // [rsp+B0h] [rbp-288h] BYREF
  __int64 (__fastcall *v41)(__int64, HSTRING, _QWORD); // [rsp+C0h] [rbp-278h]
  ATL::CAtlException *v42; // [rsp+C8h] [rbp-270h] BYREF
  HSTRING string; // [rsp+D0h] [rbp-268h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+D8h] [rbp-260h] BYREF
  _BYTE v45[528]; // [rsp+F0h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+338h] [rbp+0h]

  v4 = 0;
  v38 = 0LL;
  v30 = 0LL;
  v27 = 0;
  v31 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v39, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  if ( *((_DWORD *)this + 14) == 1 )
  {
    v5 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
           &v38);
    if ( v5 < 0 || (v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v38 + 24LL))(v38, &v31), v5 < 0) )
    {
LABEL_12:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x4Cu,
          (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
          v5);
      }
      goto LABEL_16;
    }
    v6 = v31;
    if ( v31 == 1 )
    {
      if ( CMonitor::IsCaptureMonitorEnabled(a2, &v30, &v27) )
        goto LABEL_10;
      v6 = v31;
    }
    if ( v6 || !CMonitorManager::IsRenderMirrorEnabled(this, a2, &v30) )
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
          v30);
        v8 = WPP_GLOBAL_Control;
      }
      if ( v8 != &WPP_GLOBAL_Control && (*((_DWORD *)v8 + 7) & 0x800000) != 0 && *((_BYTE *)v8 + 25) >= 4u )
        WPP_SF_(v8[2], 69LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids);
    }
    v29 = 0LL;
    v9 = (unsigned __int16 *)&LocaleName;
    if ( !v27 )
      v9 = v30;
    v37 = CMonitorManager::CreateMonitor(this, (const unsigned __int16 *)pv, v9, 0LL, 0, 0LL, &v29);
    v5 = v37;
    if ( v37 < 0 )
      goto LABEL_80;
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v40, (struct _RTL_CRITICAL_SECTION *)((char *)this + 72));
    v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      v11 = v29;
    }
    else
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v11 = v29;
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x46u,
          (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
          v29);
        v10 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
      else
      {
        v11 = v29;
      }
      if ( v10 != &WPP_GLOBAL_Control && (*((_DWORD *)v10 + 7) & 0x800000) != 0 && *((_BYTE *)v10 + 25) >= 4u )
        WPP_SF_S((__int64)v10[2], 0x47u, (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, (const wchar_t *)pv);
    }
    CMonitorManager::FindMonitor(this, &v35, pv);
    if ( !v35 )
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
      catch ( ATL::CAtlException *v42 )
      {
        v26 = v42;
        if ( *(_DWORD *)v42 == -1073741571 )
          _o__resetstkoflw();
        LODWORD(v36) = *(_DWORD *)v26;
        v5 = (int)v36;
        if ( (int)v36 >= 0 )
        {
          v11 = v29;
          goto LABEL_46;
        }
LABEL_79:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v35);
        ATL::CCritSecLock::~CCritSecLock(v40);
LABEL_80:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v29);
        CoTaskMemFree(pv);
        if ( v5 < 0 )
          goto LABEL_12;
LABEL_16:
        ATL::CCritSecLock::~CCritSecLock(v39);
        CoTaskMemFree(v30);
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
          v30);
      }
      memset_0(v45, 0, 0x208uLL);
      v32 = 0LL;
      if ( (unsigned __int8)GetAudioSrvResource(v12, v45) )
      {
        v34 = 0LL;
        v14 = Windows::Internal::StringReference::StringReference(&string, (const unsigned __int16 (*)[65])v13);
        ActivationFactory = RoGetActivationFactory(*v14, &GUID_7c353e2a_46ee_44e5_af3d_6ad3fc49bd22, &v34);
        v16 = ActivationFactory;
        if ( ActivationFactory < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x989,
            (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
            (const char *)(unsigned int)ActivationFactory);
LABEL_53:
          wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>(&v34);
          wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>(&v32);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v35);
          ATL::CCritSecLock::~CCritSecLock(v40);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v29);
          CoTaskMemFree(pv);
          pv = 0LL;
          ATL::CCritSecLock::~CCritSecLock(v39);
          CoTaskMemFree(v30);
          v4 = v16;
          goto LABEL_17;
        }
        v33 = 0LL;
        v17 = v34;
        v41 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v34 + 64LL);
        v33 = 0LL;
        v18 = c_szCapabilityMicrophone;
        v36 = c_szCapabilityMicrophone;
        v19 = -1LL;
        do
          ++v19;
        while ( c_szCapabilityMicrophone[v19] );
        if ( v19 > 0xFFFFFFFF )
        {
          LODWORD(v19) = -1;
          RaiseException(0xC000000D, 1u, 0, 0LL);
          v18 = v36;
        }
        WindowsCreateStringReference(v18, v19, &hstringHeader, &string);
        v16 = v41(v17, string, &v33);
        if ( v16 < 0 )
        {
          v20 = 2444LL;
LABEL_60:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v20,
            (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
            (const char *)(unsigned int)v16);
          wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)&v33);
          goto LABEL_53;
        }
        v21 = v32;
        v32 = 0LL;
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        v16 = (**v33)(v33, &GUID_11c7ccb6_c74f_50a3_b960_88008767d939, &v32);
        if ( v16 < 0 )
        {
          v20 = 2445LL;
          goto LABEL_60;
        }
        wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)&v33);
        wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>(&v34);
      }
      v22 = (CMonitor *)*((_QWORD *)v11 + 26);
      if ( v37 )
        CMonitor::Terminate(v22, 1, 0LL);
      else
        CMonitor::Start(v22);
      wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>(&v32);
      goto LABEL_79;
    }
    v23 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v24 = (const wchar_t *)std::wstring::c_str(v35 + 168);
        WPP_SF_SS(
          *(_QWORD *)(v25 + 16),
          0x4Au,
          (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
          (const wchar_t *)pv,
          v24);
        v23 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
      if ( v23 != &WPP_GLOBAL_Control && (*((_DWORD *)v23 + 7) & 0x800000) != 0 && *((_BYTE *)v23 + 25) >= 4u )
        WPP_SF_q(
          (__int64)v23[2],
          0x4Bu,
          (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
          *((_QWORD *)v11 + 26));
    }
    CMonitorManager::CaptureMonitor::Uninitialize(v11);
    goto LABEL_79;
  }
  ATL::CCritSecLock::~CCritSecLock(v39);
  CoTaskMemFree(0LL);
LABEL_17:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
  return v4;
}
