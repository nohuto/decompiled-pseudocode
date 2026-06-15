/*
 * XREFs of ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18007A700
 * Callers:
 *     ?HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z @ 0x18002E7E4 (-HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ @ 0x180112B18 (-OnCheckForMonitorRestart@CMonitorManager@@AEAAXXZ.c)
 *     ?SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N0@Z @ 0x1801139B0 (-SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N0@Z.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x18007A9EC (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z @ 0x18007ACB0 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1800C49A0 (WPP_SF_qD.c)
 *     WPP_SF_SS @ 0x1800C5D00 (WPP_SF_SS.c)
 *     McTemplateU0qzz_EtwEventWriteTransfer @ 0x180114374 (McTemplateU0qzz_EtwEventWriteTransfer.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180115B44 (-Start@CMonitor@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMonitorManager::CaptureMonitor::RestartMonitorIfAppropriate(CMonitorManager::CaptureMonitor *this)
{
  int v2; // edi
  int v3; // eax
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64, __int64, struct IMMDevice **); // r9
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64, struct IMMDevice **); // r9
  __int64 v11; // r10
  int v12; // eax
  unsigned int v13; // r8d
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // r9
  bool v20; // [rsp+70h] [rbp+40h] BYREF
  struct IMMDevice *v21; // [rsp+78h] [rbp+48h] BYREF
  struct IMMDevice *v22; // [rsp+80h] [rbp+50h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 26) + 72LL) != 3 && !*((_BYTE *)this + 12) )
  {
    v22 = 0LL;
    v21 = 0LL;
    SetThreadpoolWait(*((PTP_WAIT *)this + 2), *((HANDLE *)this + 4), 0LL);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      std::wstring::c_str((__int64)this + 168);
      v3 = std::wstring::c_str((__int64)this + 136);
      WPP_SF_SS(*(_QWORD *)(v4 + 16), 59, (unsigned int)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, v3, v5);
    }
    v6 = std::wstring::c_str((__int64)this + 136);
    v2 = v7(v8, v6, &v22);
    if ( v2 >= 0 && (v9 = std::wstring::c_str((__int64)this + 168), v2 = v10(v11, v9, &v21), v2 >= 0) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 60LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, this);
      }
      v20 = 0;
      v12 = CMonitor::Initialize(*((CMonitor **)this + 26), v22, v21, &v20);
      v2 = v12;
      if ( v12 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            62LL,
            &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
            this,
            v12);
        }
        v13 = *((_DWORD *)this + 6) + 1;
        *((_DWORD *)this + 6) = v13;
        if ( v13 > *(_DWORD *)(*((_QWORD *)this + 25) + 328LL) )
        {
          *((_BYTE *)this + 12) = 1;
          if ( (Microsoft_Windows_AudioEnableBits & 8) != 0 )
          {
            std::wstring::c_str((__int64)this + 168);
            v14 = std::wstring::c_str((__int64)this + 136);
            McTemplateU0qzz_EtwEventWriteTransfer(v16, v15, v17, v14, v18);
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
      if ( v21 )
        ((void (__fastcall *)(struct IMMDevice *))v21->lpVtbl->Release)(v21);
      if ( v22 )
        ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
    }
    else
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          63LL,
          &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
          (unsigned int)v2);
      }
    }
  }
  return (unsigned int)v2;
}
