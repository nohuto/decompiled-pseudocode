/*
 * XREFs of ?HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z @ 0x1800097F0
 * Callers:
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x180009508 (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A940 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800480B0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x180053800 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x180069220 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     ?IsConnectedTo@CaptureMonitor@CMonitorManager@@QEBA_NPEBG@Z @ 0x18011A45C (-IsConnectedTo@CaptureMonitor@CMonitorManager@@QEBA_NPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitorManager::HandleDeviceArrivalForExistingMonitors(
        CMonitorManager *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // rcx
  _QWORD *Next; // rax
  int restarted; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  CMonitorManager::CaptureMonitor *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 72);
  v8 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v10 = *((_QWORD *)this + 14);
  while ( v10 )
  {
    Next = (_QWORD *)ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v4, &v10);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v9, *Next);
    if ( CMonitorManager::CaptureMonitor::IsConnectedTo(v9, a2) )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 77LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, a2);
      }
      restarted = CMonitorManager::CaptureMonitor::RestartMonitorIfAppropriate(v9);
      if ( restarted < 0
        && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          78LL,
          &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
          (unsigned int)restarted);
      }
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v9);
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
