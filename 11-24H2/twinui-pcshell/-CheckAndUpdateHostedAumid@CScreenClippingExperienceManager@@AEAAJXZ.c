/*
 * XREFs of ?CheckAndUpdateHostedAumid@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1803A22B0
 * Callers:
 *     wistd::__function::__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1803A1F20 (wistd--__function--__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(un_ea_1803A1F20.c)
 * Callees:
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180025298 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800537E8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800A4E04 (--$Write@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEA.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B40C4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x1801AAAB0 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x1802C4920 (_anonymous_namespace_--GetScreenClippingAUMID.c)
 *     ?StartAppClose@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1803A45F4 (-StartAppClose@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x180682728 (-SwapAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806846FC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenClippingExperienceManager::CheckAndUpdateHostedAumid(
        struct winrt::impl::hstring_header **this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // rax
  unsigned int v9; // r8d
  int started; // eax
  const char *v11; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING v14; // [rsp+48h] [rbp+10h] BYREF
  const WCHAR *v15; // [rsp+50h] [rbp+18h] BYREF
  const WCHAR *v16; // [rsp+58h] [rbp+20h] BYREF

  try
  {
    anonymous_namespace_::GetScreenClippingAUMID((WCHAR *)&v14);
    if ( *(_DWORD *)SingleViewExperienceLogging::Provider(v2) > 5u )
    {
      v15 = winrt::hstring::c_str((winrt::hstring *)&v14);
      v16 = winrt::hstring::c_str((winrt::hstring *)(this + 42));
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        v5,
        byte_1807F080C,
        v5,
        v6,
        &v16,
        &v15);
    }
    if ( !v14 )
      MicrosoftTelemetryAssertTriggeredNoArgs(v4, v3);
    if ( !winrt::operator==((__int64 *)&v14, (__int64 *)this + 42) )
    {
      v8 = SingleViewExperienceLogging::Provider(v7);
      if ( *(_DWORD *)v8 > 5u )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
          (__int64)v8,
          byte_1807F07B1,
          0LL);
      winrt::hstring::operator=(this + 42, (__int64 *)&v14, v9);
      if ( *((_DWORD *)this + 24) == 2 )
      {
        started = CScreenClippingExperienceManager::StartAppClose((CScreenClippingExperienceManager *)this);
        if ( started < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2A5,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
            (const char *)(unsigned int)started);
      }
      CSingleViewShellExperience::SwapAumid((CSingleViewShellExperience *)(this + 7), v14);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x124,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
                           v11);
  }
  return result;
}
