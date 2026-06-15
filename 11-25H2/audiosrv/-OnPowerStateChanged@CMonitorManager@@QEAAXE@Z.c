/*
 * XREFs of ?OnPowerStateChanged@CMonitorManager@@QEAAXE@Z @ 0x18002E318
 * Callers:
 *     ?SetACLineStatus@CStreamConnectionManagerImpl@@UEAAXE@Z @ 0x1800885F0 (-SetACLineStatus@CStreamConnectionManagerImpl@@UEAAXE@Z.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002CFAC (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800537D0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x180061210 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     WPP_SF_SS @ 0x1800C5D00 (WPP_SF_SS.c)
 *     ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x180115560 (-OnPowerStateChanged@CMonitor@@IEAAXE@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitorManager::OnPowerStateChanged(CMonitorManager *this, unsigned __int8 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *Next; // rax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // r10
  __int64 v10; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v12; // [rsp+38h] [rbp-10h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, a2);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 72);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = *((_QWORD *)this + 14);
  v14 = v5;
  while ( v5 )
  {
    Next = (_QWORD *)ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v4, &v14);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v13, *Next);
    v7 = v13;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v8 = std::wstring::c_str(v13 + 136);
      WPP_SF_SS(*(_QWORD *)(v9 + 16), 49, (unsigned int)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, v8, v10);
    }
    CMonitor::OnPowerStateChanged(*(CMonitor **)(v7 + 208), a2);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
    v5 = v14;
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
}
