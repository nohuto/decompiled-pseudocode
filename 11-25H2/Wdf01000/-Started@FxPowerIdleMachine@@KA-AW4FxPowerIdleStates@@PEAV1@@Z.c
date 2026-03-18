/*
 * XREFs of ?Started@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1400806F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPowerIdleMachine::Started(FxPowerIdleMachine *This)
{
  This->m_Flags |= 0x20u;
  KeClearEvent(&This->m_D0NotificationEvent.m_Event.m_Event);
  return 35LL;
}
