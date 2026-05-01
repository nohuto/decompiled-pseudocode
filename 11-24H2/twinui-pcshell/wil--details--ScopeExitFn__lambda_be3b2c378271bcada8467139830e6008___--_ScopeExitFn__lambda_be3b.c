/*
 * XREFs of wil::details::ScopeExitFn__lambda_be3b2c378271bcada8467139830e6008___::_ScopeExitFn__lambda_be3b2c378271bcada8467139830e6008___ @ 0x1801F3F1C
 * Callers:
 *     _XamlLauncherState::OnStartLaunchResult_::_1_::dtor$0 @ 0x1806ECF03 (_XamlLauncherState--OnStartLaunchResult_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnStartLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@Z @ 0x1801F3F48 (--$OnStartLaunchResult@AEBW4InternalState@XamlLauncherState@@AEAW412@AEBJ@StartWindowTelemetry@@.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_be3b2c378271bcada8467139830e6008___::_ScopeExitFn__lambda_be3b2c378271bcada8467139830e6008___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return StartWindowTelemetry::OnStartLaunchResult<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &,long const &>(
             a1,
             *(_QWORD *)(a1 + 8) + 64LL,
             a1 + 16);
  }
  return result;
}
