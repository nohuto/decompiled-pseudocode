/*
 * XREFs of CrmStateMonitorPostResumeSetAndReset @ 0x18006A14C
 * Callers:
 *     CrmStateMonitorPostResumeSuspendCallback @ 0x18006A070 (CrmStateMonitorPostResumeSuspendCallback.c)
 *     CrmStateMonitorPostResumeTimerCallback @ 0x1800711C0 (CrmStateMonitorPostResumeTimerCallback.c)
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002D2A0 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorListenerRemove @ 0x180033220 (CrmStateMonitorListenerRemove.c)
 */

__int64 __fastcall CrmStateMonitorPostResumeSetAndReset(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( *(_QWORD *)(a1 + 104) != a1 + 104 )
    CrmStateMonitorListenerRemove((int *)qword_1800E9970, a1 + 96);
  if ( *(_QWORD *)(a1 + 128) != a1 + 128 )
    CrmStateMonitorListenerRemove((int *)qword_1800E9978, a1 + 120);
  return CrmStateMonitorStateSet((unsigned int *)a1, &v4, 4uLL, 0);
}
