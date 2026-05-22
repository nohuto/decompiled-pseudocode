/*
 * XREFs of ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x18001118C
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180011C00 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x1800BD354 (-OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?OnUniversalPropertyChanged@MPCTarget@@AEAAJUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x1800FE3C0 (-OnUniversalPropertyChanged@MPCTarget@@AEAAJUIUniversalAppModelWatcher@WindowManagement@Applicat.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801B7A00 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801B87E0 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInput.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801B89D0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     std::call_once__lambda_e877c53153750a022a5d5eb128b5cc30___ @ 0x1800111C4 (std--call_once__lambda_e877c53153750a022a5d5eb128b5cc30___.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct MPCGamepadInputHelper *MPCGamepadInputHelper::GetInstance(void)
{
  const char *v0; // r9
  struct MPCGamepadInputHelper *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  std::call_once__lambda_e877c53153750a022a5d5eb128b5cc30___();
  result = MPCGamepadInputHelper::s_instance;
  if ( !MPCGamepadInputHelper::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x22,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadinputhelper.cpp",
      v0);
  return result;
}
