/*
 * XREFs of ?Start@CMonitor@@QEAAJXZ @ 0x18011D984
 * Callers:
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x180069220 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?Continue@CMonitorManager@@QEAAXXZ @ 0x180117C50 (-Continue@CMonitorManager@@QEAAXXZ.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1801181F0 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18011911C (-HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18011952C (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x18011CA10 (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x18011D134 (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x18011D224 (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x18011D3A0 (-OnPowerStateChanged@CMonitor@@IEAAXE@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180008BA8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18000A918 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_ @ 0x1800C0208 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 *     ?GetPowerStatus@CMonitor@@AEAA_NPEAE@Z @ 0x18011C89C (-GetPowerStatus@CMonitor@@AEAA_NPEAE@Z.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x18011DCE0 (-Stop@CMonitor@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CMonitor::Start(CMonitor *this)
{
  HRESULT v2; // ebx
  _UNKNOWN **v3; // rcx
  int v4; // r9d
  unsigned int v6; // esi
  __int64 v7; // rcx
  LPVOID v8; // r9
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  LPCRITICAL_SECTION v11[4]; // [rsp+38h] [rbp-20h] BYREF
  int v12; // [rsp+90h] [rbp+38h] BYREF
  LPVOID ppv; // [rsp+98h] [rbp+40h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+50h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v11, (struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  v2 = 0;
  v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Au,
      (__int64)&WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids,
      this);
    v3 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  v4 = *((_DWORD *)this + 18);
  if ( ((v4 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v3 != &WPP_GLOBAL_Control && (*((_DWORD *)v3 + 7) & 0x800000) != 0 && *((_BYTE *)v3 + 25) >= 4u )
      WPP_SF_D((__int64)v3[2], 0x2Eu, (__int64)&WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids, v4);
    goto LABEL_48;
  }
  if ( !*((_BYTE *)this + 77)
    || (LOBYTE(v12) = 0, !CMonitor::GetPowerStatus(this, (unsigned __int8 *)&v12))
    || (v12 & 0xFD) != 0 )
  {
    ppv = 0LL;
    v15 = 0LL;
    v14 = 0LL;
    v12 = 0;
    v2 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv);
    v6 = 1;
    if ( v2 >= 0 )
    {
      v7 = 0LL;
      v10 = 0LL;
      v8 = ppv;
      if ( ppv )
      {
        (**(void (__fastcall ***)(LPVOID, GUID *, __int64 *))ppv)(ppv, &GUID_8a189c00_2dd1_4f94_bfab_31ac1deb05d0, &v10);
        v8 = ppv;
        v7 = v10;
      }
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 88LL))(v7, 1LL);
        v8 = ppv;
      }
      v2 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *))(*(_QWORD *)v8 + 40LL))(
             v8,
             *((_QWORD *)this + 19),
             &v15);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
      if ( v2 >= 0 )
        v2 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 24LL))(
               v15,
               &GUID_5cdf2c82_841e_4546_9722_0cf74078229a,
               1LL,
               0LL,
               &v14);
    }
    if ( *((_BYTE *)this + 78) )
    {
      if ( v2 >= 0 )
      {
        v2 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 120LL))(v14, &v12);
        if ( v2 >= 0 )
        {
          if ( v12 )
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 44LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids);
            }
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
            goto LABEL_49;
          }
        }
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
    if ( v2 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 45LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids);
      }
      *((_DWORD *)this + 18) = 3;
      v9 = *((_QWORD *)this + 23);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9);
      v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 80LL))(*((_QWORD *)this + 13));
      if ( v2 < 0
        || (v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 80LL))(*((_QWORD *)this + 20)), v2 < 0) )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x2Fu,
            (__int64)&WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids,
            v2);
        }
        CMonitor::Stop(this);
      }
    }
LABEL_48:
    v6 = v2;
LABEL_49:
    ATL::CCritSecLock::~CCritSecLock(v11);
    return v6;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 43LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids);
  }
  ATL::CCritSecLock::~CCritSecLock(v11);
  return 1LL;
}
