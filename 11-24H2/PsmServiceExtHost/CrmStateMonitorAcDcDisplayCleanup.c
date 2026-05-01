/*
 * XREFs of CrmStateMonitorAcDcDisplayCleanup @ 0x180079758
 * Callers:
 *     CrmStateMonitorCleanup @ 0x18006E9D4 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x1800331A0 (CrmStateMonitorListenerRemove.c)
 */

void __fastcall CrmStateMonitorAcDcDisplayCleanup(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    CrmStateMonitorListenerRemove((int *)qword_1800EA870, a1 + 64);
  if ( *(_QWORD *)(a1 + 96) != a1 + 96 )
    CrmStateMonitorListenerRemove((int *)qword_1800EA880, a1 + 88);
}
