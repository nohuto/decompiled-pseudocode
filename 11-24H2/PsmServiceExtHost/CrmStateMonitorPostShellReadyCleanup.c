/*
 * XREFs of CrmStateMonitorPostShellReadyCleanup @ 0x18007A2D4
 * Callers:
 *     CrmStateMonitorCleanup @ 0x18006E9D4 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x1800331A0 (CrmStateMonitorListenerRemove.c)
 */

void __fastcall CrmStateMonitorPostShellReadyCleanup(_QWORD *a1)
{
  __int64 v2; // rcx

  if ( (_QWORD *)a1[9] != a1 + 9 )
    CrmStateMonitorListenerRemove((int *)qword_1800EA8B0, (__int64)(a1 + 8));
  v2 = a1[17];
  if ( v2 )
  {
    TpSetTimer(v2, 0LL, 0LL, 0LL);
    TpWaitForTimer(a1[17], 1LL);
    TpReleaseTimer(a1[17]);
  }
  if ( (_QWORD *)a1[12] != a1 + 12 )
    CrmStateMonitorListenerRemove((int *)qword_1800EA910, (__int64)(a1 + 11));
  if ( (_QWORD *)a1[15] != a1 + 15 )
    CrmStateMonitorListenerRemove((int *)qword_1800EA918, (__int64)(a1 + 14));
}
