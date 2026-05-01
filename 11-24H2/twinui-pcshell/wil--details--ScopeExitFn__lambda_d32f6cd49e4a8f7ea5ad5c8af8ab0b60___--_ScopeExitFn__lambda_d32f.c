/*
 * XREFs of wil::details::ScopeExitFn__lambda_d32f6cd49e4a8f7ea5ad5c8af8ab0b60___::_ScopeExitFn__lambda_d32f6cd49e4a8f7ea5ad5c8af8ab0b60___ @ 0x1801F6CC4
 * Callers:
 *     _XamlLauncherState::OnCortanaShown_::_1_::dtor$0 @ 0x1806ECE97 (_XamlLauncherState--OnCortanaShown_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnCortanaShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1801F6CEC (--$OnCortanaShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4I.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_d32f6cd49e4a8f7ea5ad5c8af8ab0b60___::_ScopeExitFn__lambda_d32f6cd49e4a8f7ea5ad5c8af8ab0b60___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnCortanaShown<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             a1,
             *(_QWORD *)(a1 + 8) + 64LL);
  }
  return result;
}
