/*
 * XREFs of ?ReportAppStateChange@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAXPEBG_N@Z @ 0x180570130
 * Callers:
 *     <none>
 * Callees:
 *     ??$AsyncInvokeAll@$$TPEAVStateChangedEventArgsImpl@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_exception_policy@wil@@@wil@@QEAAXAEB$$TAEBQEAVStateChangedEventArgsImpl@@@Z @ 0x18056ACB0 (--$AsyncInvokeAll@$$TPEAVStateChangedEventArgsImpl@@@-$AsyncEventSourceT@U-$ITypedEventHandler@P.c)
 *     ??$MakeOrThrow@VStateChangedEventArgsImpl@@AEAPEBGAEA_N@wil@@YA?AV?$ComPtr@VStateChangedEventArgsImpl@@@WRL@Microsoft@@AEAPEBGAEA_N@Z @ 0x18056B564 (--$MakeOrThrow@VStateChangedEventArgsImpl@@AEAPEBGAEA_N@wil@@YA-AV-$ComPtr@VStateChangedEventArg.c)
 *     ??$ReportAppStateChange@AEAPEBGAEA_N@AppUsageTelemetry@@SAXAEAPEBGAEA_N@Z @ 0x18056B614 (--$ReportAppStateChange@AEAPEBGAEA_N@AppUsageTelemetry@@SAXAEAPEBGAEA_N@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18056FC50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IKeyValuePair@P.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::ReportAppStateChange(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this,
        const unsigned __int16 *a2,
        bool a3)
{
  const char *v4; // r9
  StateChangedEventArgsImpl *v5; // rcx
  StateChangedEventArgsImpl *v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const unsigned __int16 *v9; // [rsp+48h] [rbp+10h] BYREF
  bool v10; // [rsp+50h] [rbp+18h] BYREF
  StateChangedEventArgsImpl *v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = a3;
  v9 = a2;
  AppUsageTelemetry::ReportAppStateChange<unsigned short const * &,bool &>(&v9, (char *)&v10);
  try
  {
    wil::MakeOrThrow<StateChangedEventArgsImpl,unsigned short const * &,bool &>(&v11, &v9, &v10);
    v6 = v11;
    v7 = 0LL;
    wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_exception_policy>::AsyncInvokeAll<std::nullptr_t,StateChangedEventArgsImpl *>(
      (char *)this + 56,
      (__int64)&v7,
      (__int64 *)&v6);
    v5 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *>,Microsoft::WRL::FtmBase>::Release((__int64)v5);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x130,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
      v4);
  }
}
