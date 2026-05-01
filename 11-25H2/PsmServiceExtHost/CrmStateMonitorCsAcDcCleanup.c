/*
 * XREFs of CrmStateMonitorCsAcDcCleanup @ 0x180079A54
 * Callers:
 *     CrmStateMonitorCleanup @ 0x18006EC04 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x180033220 (CrmStateMonitorListenerRemove.c)
 */

void __fastcall CrmStateMonitorCsAcDcCleanup(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 72) != a1 + 72 )
    CrmStateMonitorListenerRemove((int *)qword_1800E98D0, a1 + 64);
  if ( *(_QWORD *)(a1 + 96) != a1 + 96 )
    CrmStateMonitorListenerRemove((int *)qword_1800E98F0, a1 + 88);
}
