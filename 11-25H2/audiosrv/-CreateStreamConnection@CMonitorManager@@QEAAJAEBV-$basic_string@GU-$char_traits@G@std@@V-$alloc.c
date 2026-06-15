/*
 * XREFs of ?CreateStreamConnection@CMonitorManager@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0PEAUStreamConnectionSettings@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x180110028
 * Callers:
 *     ?CreateStreamConnection@CStreamConnectionManagerImpl@@UEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0PEAUStreamConnectionSettings@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x180110330 (-CreateStreamConnection@CStreamConnectionManagerImpl@@UEAAJAEBV-$basic_string@GU-$char_traits@G@.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180064D38 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A43C4 (--1-$com_ptr_t@UIMulticastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800A5C5C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C4370 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?0$0DD@@StringReference@Internal@Windows@@QEAA@AEAY0DD@$$CBG@Z @ 0x1800C5FF8 (--$-0$0DD@@StringReference@Internal@Windows@@QEAA@AEAY0DD@$$CBG@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800CFBC0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$reset@VCStreamConnectionImpl@CMonitorManager@@$0A@@?$shared_ptr@VCStreamConnection@@@std@@QEAAXPEAVCStreamConnectionImpl@CMonitorManager@@@Z @ 0x18010EF80 (--$reset@VCStreamConnectionImpl@CMonitorManager@@$0A@@-$shared_ptr@VCStreamConnection@@@std@@QEA.c)
 *     ??0CStreamConnectionImpl@CMonitorManager@@QEAA@V?$ComPtr@VCMonitorManager@@@WRL@Microsoft@@V?$ComPtr@VCaptureMonitor@CMonitorManager@@@34@@Z @ 0x18010F24C (--0CStreamConnectionImpl@CMonitorManager@@QEAA@V-$ComPtr@VCMonitorManager@@@WRL@Microsoft@@V-$Co.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0PEAUStreamConnectionSettings@@_NPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@PEAPEAVCaptureMonitor@1@@Z @ 0x18010FE60 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0PEAUStreamConnectionSettings@@_NPEAUICapabilityUsageSe.c)
 *     ?GetCapabilityUsageSession@@YAJPEAPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@@Z @ 0x180110CC4 (-GetCapabilityUsageSession@@YAJPEAPEAUICapabilityUsageSession@Management@CapabilityAccess@Intern.c)
 *     ?HasMicrophoneAccess@@YAJPEA_N@Z @ 0x1801114DC (-HasMicrophoneAccess@@YAJPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CMonitorManager::CreateStreamConnection(
        CMonitorManager *this,
        __int64 a2,
        __int64 a3,
        struct StreamConnectionSettings *a4,
        _QWORD *a5)
{
  std::_Ref_count_base *v9; // rcx
  unsigned int v10; // eax
  const unsigned __int16 *v11; // rdx
  __int64 result; // rax
  HSTRING *v13; // rax
  HRESULT ActivationFactory; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  int v17; // eax
  int CapabilityUsageSession; // eax
  const unsigned __int16 *v19; // rax
  const unsigned __int16 *v20; // r8
  int v21; // eax
  __int64 v22; // rax
  const char *v23; // r9
  __int64 v24; // rbx
  struct CMonitorManager::CaptureMonitor *v25; // rcx
  const char *v26; // r9
  int v27; // [rsp+20h] [rbp-A8h]
  bool v28; // [rsp+40h] [rbp-88h] BYREF
  IUnknown *pProxy; // [rsp+48h] [rbp-80h] BYREF
  struct CMonitorManager::CaptureMonitor *v30; // [rsp+50h] [rbp-78h] BYREF
  CMonitorManager *v31; // [rsp+58h] [rbp-70h] BYREF
  struct CMonitorManager::CaptureMonitor *v32; // [rsp+60h] [rbp-68h] BYREF
  HSTRING string; // [rsp+68h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  *a5 = 0LL;
  v9 = (std::_Ref_count_base *)a5[1];
  a5[1] = 0LL;
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  v28 = 0;
  v10 = RpcImpersonateClient(0LL);
  if ( v10 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0xF0,
             (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
             (const char *)v10);
  BYTE1(v30) = 1;
  pProxy = 0LL;
  v13 = Windows::Internal::StringReference::StringReference(&string, (const unsigned __int16 (*)[51])v11);
  ActivationFactory = RoGetActivationFactory(*v13, &GUID_518f3880_4e5c_4524_ab03_cd01336b2178, &pProxy);
  v15 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v16 = 246LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
    wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)&pProxy);
    RpcRevertToSelf();
    return v15;
  }
  ActivationFactory = CoSetProxyBlanket(
                        pProxy,
                        0xFFFFFFFF,
                        0xFFFFFFFF,
                        (OLECHAR *)0xFFFFFFFFFFFFFFFFLL,
                        0,
                        3u,
                        (RPC_AUTH_IDENTITY_HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        0x40u);
  v15 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v16 = 255LL;
    goto LABEL_9;
  }
  v17 = HasMicrophoneAccess(&v28);
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      257LL,
      (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
      (const char *)(unsigned int)v17);
  wil::com_ptr_t<IMulticastProvider,wil::err_returncode_policy>::~com_ptr_t<IMulticastProvider,wil::err_returncode_policy>((__int64 *)&pProxy);
  RpcRevertToSelf();
  if ( !v28 )
    return 2289827958LL;
  pProxy = 0LL;
  CapabilityUsageSession = GetCapabilityUsageSession((struct Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession **)&pProxy);
  v15 = CapabilityUsageSession;
  if ( CapabilityUsageSession < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x108,
      (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
      (const char *)(unsigned int)CapabilityUsageSession);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pProxy);
    return v15;
  }
  v30 = 0LL;
  std::wstring::c_str(a3);
  v19 = (const unsigned __int16 *)std::wstring::c_str(a2);
  try
  {
    v21 = CMonitorManager::CreateMonitor(
            this,
            v19,
            v20,
            a4,
            1,
            (struct Windows::Internal::CapabilityAccess::Management::ICapabilityUsageSession *)pProxy,
            &v30);
    if ( v21 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        269LL,
        (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
        (const char *)(unsigned int)v21,
        v27);
    v22 = (__int64)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v24 = v22;
    v31 = (CMonitorManager *)v22;
    if ( v22 )
    {
      v25 = v30;
      v30 = 0LL;
      v32 = v25;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v32);
      v31 = this;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v31);
      v22 = CMonitorManager::CStreamConnectionImpl::CStreamConnectionImpl(v24, (__int64 *)&v31, &v32);
    }
    if ( !v22 )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        271LL,
        (__int64)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
        v23);
    std::shared_ptr<CStreamConnection>::reset<CMonitorManager::CStreamConnectionImpl,0>(a5, v22);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v30);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pProxy);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v30) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x113,
                     (int)"avcore\\audiocore\\capturemonitor\\monitormanager.cpp",
                     v26);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pProxy);
    return (unsigned int)v30;
  }
  return result;
}
