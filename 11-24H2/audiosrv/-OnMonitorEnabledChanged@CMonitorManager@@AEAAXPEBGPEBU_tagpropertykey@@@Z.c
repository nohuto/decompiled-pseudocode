/*
 * XREFs of ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18006FC90
 * Callers:
 *     ?OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ @ 0x18011A6F4 (-OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18006F710 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x1800712BC (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180089658 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     WPP_SF_ @ 0x1800C0208 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     WPP_SF_qS @ 0x1800C3528 (WPP_SF_qS.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x18011892C (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18011B424 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CMonitorManager::OnMonitorEnabledChanged(
        CMonitorManager *this,
        const unsigned __int16 *a2,
        const struct _tagpropertykey *a3)
{
  int MonitorForCaptureDeviceIfAppropriate; // ebx
  void *v6; // rbx
  _QWORD *v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  struct IMMDevice *v11; // [rsp+30h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-18h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h] BYREF
  int v14; // [rsp+80h] [rbp+30h] BYREF
  struct CMonitorManager::CaptureMonitor *v15; // [rsp+98h] [rbp+48h] BYREF

  v11 = 0LL;
  v13 = 0LL;
  v14 = 0;
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)this + 8) + 40LL))(
                                           *((_QWORD *)this + 8),
                                           a2,
                                           &v11);
  if ( MonitorForCaptureDeviceIfAppropriate < 0 )
    goto LABEL_35;
  MonitorForCaptureDeviceIfAppropriate = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v11->lpVtbl->QueryInterface)(
                                           v11,
                                           &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                                           &v13);
  if ( MonitorForCaptureDeviceIfAppropriate < 0 )
    goto LABEL_35;
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 24LL))(v13, &v14);
  if ( MonitorForCaptureDeviceIfAppropriate < 0 )
    goto LABEL_35;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 39LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, a2);
  }
  CMonitorManager::FindMonitor(this, &v15, a2);
  if ( v15 )
  {
    v6 = 0LL;
    pv = 0LL;
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        40,
        (unsigned int)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
        (_DWORD)v15,
        (__int64)a2);
      v7 = WPP_GLOBAL_Control;
    }
    if ( *((_BYTE *)v15 + 12) )
      goto LABEL_28;
    v8 = v14;
    if ( v14 == 1 )
    {
      if ( CMonitor::IsCaptureMonitorEnabled(v11, (unsigned __int16 **)&pv, 0LL) )
        goto LABEL_19;
      v8 = v14;
      v6 = pv;
      v7 = WPP_GLOBAL_Control;
    }
    if ( v8 )
      goto LABEL_28;
    if ( !CMonitorManager::IsRenderMirrorEnabled(this, v11, (unsigned __int16 **)&pv) )
    {
      v6 = pv;
LABEL_27:
      v7 = WPP_GLOBAL_Control;
LABEL_28:
      if ( v7 != &WPP_GLOBAL_Control && (*((_DWORD *)v7 + 7) & 0x800000) != 0 && *((_BYTE *)v7 + 25) >= 4u )
        WPP_SF_S(v7[2], 42LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, a2);
      CMonitorManager::RemoveMonitor(this, v15, 1);
      CoTaskMemFree(v6);
      goto LABEL_33;
    }
LABEL_19:
    v10 = std::wstring::c_str((__int64)v15 + 168, v9);
    v6 = pv;
    if ( !(unsigned int)_o__wcsicmp(v10, pv) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids);
      }
      CoTaskMemFree(v6);
      goto LABEL_25;
    }
    goto LABEL_27;
  }
LABEL_33:
  MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(this, v11);
  if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
  {
LABEL_25:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
    goto LABEL_39;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
LABEL_35:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      43LL,
      &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
      (unsigned int)MonitorForCaptureDeviceIfAppropriate);
  }
LABEL_39:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v11 )
    ((void (__fastcall *)(struct IMMDevice *))v11->lpVtbl->Release)(v11);
}
