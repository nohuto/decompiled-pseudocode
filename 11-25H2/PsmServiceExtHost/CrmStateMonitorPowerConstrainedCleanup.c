/*
 * XREFs of CrmStateMonitorPowerConstrainedCleanup @ 0x18007A3B4
 * Callers:
 *     CrmStateMonitorCleanup @ 0x18006EC04 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x180033220 (CrmStateMonitorListenerRemove.c)
 */

void __fastcall CrmStateMonitorPowerConstrainedCleanup(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 104) != a1 + 104 )
    CrmStateMonitorListenerRemove((int *)qword_1800E98D0, a1 + 96);
  if ( *(_QWORD *)(a1 + 128) != a1 + 128 )
    CrmStateMonitorListenerRemove((int *)qword_1800E9968, a1 + 120);
}
