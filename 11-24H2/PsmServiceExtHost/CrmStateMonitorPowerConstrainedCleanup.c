/*
 * XREFs of CrmStateMonitorPowerConstrainedCleanup @ 0x18007A414
 * Callers:
 *     CrmStateMonitorCleanup @ 0x18006E9D4 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x1800331A0 (CrmStateMonitorListenerRemove.c)
 */

void __fastcall CrmStateMonitorPowerConstrainedCleanup(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 104) != a1 + 104 )
    CrmStateMonitorListenerRemove((int *)qword_1800EA870, a1 + 96);
  if ( *(_QWORD *)(a1 + 128) != a1 + 128 )
    CrmStateMonitorListenerRemove((int *)qword_1800EA908, a1 + 120);
}
