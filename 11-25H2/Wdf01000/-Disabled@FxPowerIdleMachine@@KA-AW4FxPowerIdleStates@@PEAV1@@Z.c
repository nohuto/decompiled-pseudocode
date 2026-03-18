/*
 * XREFs of ?Disabled@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x14006B4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPowerIdleMachine::Disabled(FxPowerIdleMachine *This)
{
  This->m_Flags &= ~1u;
  return 35LL;
}
