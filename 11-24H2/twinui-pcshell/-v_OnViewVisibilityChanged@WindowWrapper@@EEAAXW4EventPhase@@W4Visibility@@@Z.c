/*
 * XREFs of ?v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180434230
 * Callers:
 *     <none>
 * Callees:
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1804453D4 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 */

__int64 __fastcall WindowWrapper::v_OnViewVisibilityChanged(__int64 a1, __int64 a2, __int64 a3)
{
  return WindowReadyState::VisibilityChanged(a1 + 360, a2, a3);
}
