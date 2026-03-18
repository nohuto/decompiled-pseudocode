/*
 * XREFs of ?StartedPowerFailed@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1400A6EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendD0Notification@FxPowerIdleMachine@@IEAAXXZ @ 0x140060E38 (-SendD0Notification@FxPowerIdleMachine@@IEAAXXZ.c)
 */

__int64 __fastcall FxPowerIdleMachine::StartedPowerFailed(FxPowerIdleMachine *This)
{
  This->m_Flags |= 0x10u;
  FxPowerIdleMachine::SendD0Notification(This);
  return 35LL;
}
