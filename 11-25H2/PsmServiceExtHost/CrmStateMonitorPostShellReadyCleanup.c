/*
 * XREFs of CrmStateMonitorPostShellReadyCleanup @ 0x18007A274
 * Callers:
 *     CrmStateMonitorCleanup @ 0x18006EC04 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x180033220 (CrmStateMonitorListenerRemove.c)
 */

void __fastcall CrmStateMonitorPostShellReadyCleanup(_QWORD *a1)
{
  __int64 v2; // rcx

  if ( (_QWORD *)a1[9] != a1 + 9 )
    CrmStateMonitorListenerRemove((int *)qword_1800E9910, (__int64)(a1 + 8));
  v2 = a1[17];
  if ( v2 )
  {
    TpSetTimer(v2, 0LL, 0LL, 0LL);
    TpWaitForTimer(a1[17], 1LL);
    TpReleaseTimer(a1[17]);
  }
  if ( (_QWORD *)a1[12] != a1 + 12 )
    CrmStateMonitorListenerRemove((int *)qword_1800E9970, (__int64)(a1 + 11));
  if ( (_QWORD *)a1[15] != a1 + 15 )
    CrmStateMonitorListenerRemove((int *)qword_1800E9978, (__int64)(a1 + 14));
}
