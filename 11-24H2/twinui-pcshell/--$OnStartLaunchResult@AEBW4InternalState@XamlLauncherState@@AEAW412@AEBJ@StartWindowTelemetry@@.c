/*
 * XREFs of ??$OnStartLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@Z @ 0x1801F3F48
 * Callers:
 *     wil::details::ScopeExitFn__lambda_be3b2c378271bcada8467139830e6008___::_ScopeExitFn__lambda_be3b2c378271bcada8467139830e6008___ @ 0x1801F3F1C (wil--details--ScopeExitFn__lambda_be3b2c378271bcada8467139830e6008___--_ScopeExitFn__lambda_be3b.c)
 *     ?OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x1802507E0 (-OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Intern.c)
 * Callees:
 *     ?Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800E8790 (-Provider@LauncherTelemetryLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1800E9348 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 */

int __fastcall StartWindowTelemetry::OnStartLaunchResult<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &,long const &>(
        _DWORD *a1,
        int *a2,
        int *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  int v11; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v12[5]; // [rsp+44h] [rbp-14h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v6 = LauncherTelemetryLogging::Provider((__int64)a1);
  v9 = (__int64)v6;
  if ( *(_DWORD *)v6 > 5u )
  {
    LODWORD(v6) = 0;
    if ( (*(_QWORD *)(v9 + 16) & 0x200000000000LL) != 0
      && (*(_QWORD *)(v9 + 24) & 0x200000000000LL) == *(_QWORD *)(v9 + 24) )
    {
      v13 = *a3;
      v11 = *a2;
      v12[0] = *a1;
      LODWORD(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                      v9,
                      byte_1807FB52A,
                      v7,
                      v8,
                      (__int64)v12,
                      (__int64)&v11,
                      (__int64)&v13);
    }
  }
  return (int)v6;
}
