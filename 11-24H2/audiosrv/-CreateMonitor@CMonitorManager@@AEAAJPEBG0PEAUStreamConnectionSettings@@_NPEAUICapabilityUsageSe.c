/*
 * XREFs of ?CreateMonitor@CMonitorManager@@AEAAJPEBG0PEAUStreamConnectionSettings@@_NPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@PEAPEAVCaptureMonitor@1@@Z @ 0x180117D10
 * Callers:
 *     ?CreateStreamConnection@CMonitorManager@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0PEAUStreamConnectionSettings@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x180117ED8 (-CreateStreamConnection@CMonitorManager@@QEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1801181F0 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18011952C (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C2FD0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D0C70 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CaptureMonitor@CMonitorManager@@QEAA@PEAV1@PEBG1PEAUStreamConnectionSettings@@_N@Z @ 0x1801171B0 (--0CaptureMonitor@CMonitorManager@@QEAA@PEAV1@PEBG1PEAUStreamConnectionSettings@@_N@Z.c)
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@@Z @ 0x180119C08 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@Capabili.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMonitorManager::CreateMonitor(
        CMonitorManager *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct StreamConnectionSettings *a4,
        bool a5,
        struct Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession *a6,
        struct CMonitorManager::CaptureMonitor **a7)
{
  struct CMonitorManager::CaptureMonitor **v11; // rsi
  int v12; // edi
  CMonitorManager::CaptureMonitor *v13; // rax
  const char *v14; // r9
  CMonitorManager::CaptureMonitor *v15; // rbx
  int v16; // eax
  unsigned int v17; // edi
  const char *v18; // r9
  __int64 result; // rax
  ATL::CAtlException *v20; // rbx
  int v21; // [rsp+20h] [rbp-48h]
  CMonitorManager::CaptureMonitor *v22; // [rsp+38h] [rbp-30h] BYREF
  __int64 v23; // [rsp+40h] [rbp-28h] BYREF
  ATL::CAtlException *v24; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v23 = 0LL;
  v22 = 0LL;
  v11 = a7;
  *a7 = 0LL;
  v12 = 0;
  v13 = (CMonitorManager::CaptureMonitor *)operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  try
  {
    try
    {
      if ( v13 )
        v15 = CMonitorManager::CaptureMonitor::CaptureMonitor(v13, this, a2, a3, a4, a5);
      else
        v15 = 0LL;
      v22 = v15;
    }
    catch ( ATL::CAtlException *v24 )
    {
      v20 = v24;
      if ( *(_DWORD *)v24 == -1073741571 )
        _o__resetstkoflw();
      v11 = a7;
      v12 = *(_DWORD *)v20;
      v15 = v22;
    }
    if ( v12 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        2903LL,
        (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
        (const char *)(unsigned int)v12,
        v21);
    if ( !v15 )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        2905LL,
        (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
        v14);
    v16 = CMonitorManager::CaptureMonitor::Initialize(v15, a6);
    v17 = v16;
    if ( v16 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        2909LL,
        (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
        (const char *)(unsigned int)v16,
        v21);
    v22 = 0LL;
    *v11 = v15;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x55u,
        (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
        v15);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
    result = v17;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB65,
                           (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
                           v18);
  }
  return result;
}
