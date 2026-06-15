/*
 * XREFs of ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x180069220
 * Callers:
 *     ?HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z @ 0x1800097F0 (-HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ @ 0x18011A978 (-OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ.c)
 *     ?SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N0@Z @ 0x18011B810 (-SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x18006950C (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z @ 0x1800697D0 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800C3678 (WPP_SF_qd.c)
 *     WPP_SF_SS @ 0x1800C51D0 (WPP_SF_SS.c)
 *     McTemplateU0qzz_EtwEventWriteTransfer @ 0x18011C1B4 (McTemplateU0qzz_EtwEventWriteTransfer.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x18011D984 (-Start@CMonitor@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMonitorManager::CaptureMonitor::RestartMonitorIfAppropriate(CMonitorManager::CaptureMonitor *this)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64, __int64, struct IMMDevice **); // r9
  __int64 v10; // r10
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64, __int64, struct IMMDevice **); // r9
  __int64 v14; // r10
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rdx
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // r9
  bool v24; // [rsp+70h] [rbp+40h] BYREF
  struct IMMDevice *v25; // [rsp+78h] [rbp+48h] BYREF
  struct IMMDevice *v26; // [rsp+80h] [rbp+50h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 26) + 72LL) != 3 && !*((_BYTE *)this + 12) )
  {
    v26 = 0LL;
    v25 = 0LL;
    SetThreadpoolWait(*((PTP_WAIT *)this + 2), *((HANDLE *)this + 4), 0LL);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      std::wstring::c_str((__int64)this + 168, v3);
      v5 = std::wstring::c_str((__int64)this + 136, v4);
      WPP_SF_SS(*(_QWORD *)(v6 + 16), 59, (unsigned int)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, v5, v7);
    }
    v8 = std::wstring::c_str((__int64)this + 136, v3);
    v2 = v9(v10, v8, &v26);
    if ( v2 >= 0 && (v12 = std::wstring::c_str((__int64)this + 168, v11), v2 = v13(v14, v12, &v25), v2 >= 0) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 60LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, this);
      }
      v24 = 0;
      v2 = CMonitor::Initialize(*((CMonitor **)this + 26), v26, v25, &v24);
      if ( v2 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 62LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, this);
        }
        v16 = *((_DWORD *)this + 6) + 1;
        *((_DWORD *)this + 6) = v16;
        if ( v16 > *(_DWORD *)(*((_QWORD *)this + 25) + 328LL) )
        {
          *((_BYTE *)this + 12) = 1;
          if ( (Microsoft_Windows_AudioEnableBits & 8) != 0 )
          {
            std::wstring::c_str((__int64)this + 168, v15);
            v18 = std::wstring::c_str((__int64)this + 136, v17);
            McTemplateU0qzz_EtwEventWriteTransfer(v20, v19, v21, v18, v22);
          }
        }
        CMonitor::Terminate(*((CMonitor **)this + 26), 1, 0LL);
        v2 = 0;
      }
      else
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 61LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, this);
        }
        *(_QWORD *)(*((_QWORD *)this + 25) + 304LL) = 0LL;
        *((_DWORD *)this + 6) = 0;
        CMonitor::Start(*((CMonitor **)this + 26));
      }
      if ( v25 )
        ((void (__fastcall *)(struct IMMDevice *))v25->lpVtbl->Release)(v25);
      if ( v26 )
        ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
    }
    else
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          63LL,
          &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
          (unsigned int)v2);
      }
    }
  }
  return (unsigned int)v2;
}
