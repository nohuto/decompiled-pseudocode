/*
 * XREFs of CrmStateMonitorCompositeTestCleanup @ 0x1800799B0
 * Callers:
 *     CrmStateMonitorCleanup @ 0x18006EC04 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x180033220 (CrmStateMonitorListenerRemove.c)
 */

void __fastcall CrmStateMonitorCompositeTestCleanup(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    CrmStateMonitorListenerRemove((int *)qword_1800E98B0, a1 + 64);
  if ( *(_QWORD *)(a1 + 104) != a1 + 104 )
    CrmStateMonitorListenerRemove((int *)qword_1800E98B8, a1 + 96);
}
