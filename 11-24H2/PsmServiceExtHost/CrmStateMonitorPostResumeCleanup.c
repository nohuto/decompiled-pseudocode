/*
 * XREFs of CrmStateMonitorPostResumeCleanup @ 0x18007A1B0
 * Callers:
 *     CrmStateMonitorCleanup @ 0x18006E9D4 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x1800331A0 (CrmStateMonitorListenerRemove.c)
 */

void __fastcall CrmStateMonitorPostResumeCleanup(_QWORD *a1)
{
  __int64 v2; // rcx

  if ( (_QWORD *)a1[9] != a1 + 9 )
    CrmStateMonitorListenerRemove((int *)qword_1800EA8A0, (__int64)(a1 + 8));
  v2 = a1[18];
  if ( v2 )
  {
    TpSetTimer(v2, 0LL, 0LL, 0LL);
    TpWaitForTimer(a1[18], 1LL);
    TpReleaseTimer(a1[18]);
  }
  if ( (_QWORD *)a1[13] != a1 + 13 )
    CrmStateMonitorListenerRemove((int *)qword_1800EA910, (__int64)(a1 + 12));
  if ( (_QWORD *)a1[16] != a1 + 16 )
    CrmStateMonitorListenerRemove((int *)qword_1800EA918, (__int64)(a1 + 15));
}
