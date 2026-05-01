/*
 * XREFs of CrmStateMonitorPostResumeSetAndReset @ 0x180069FCC
 * Callers:
 *     CrmStateMonitorPostResumeSuspendCallback @ 0x180069EF0 (CrmStateMonitorPostResumeSuspendCallback.c)
 *     CrmStateMonitorPostResumeTimerCallback @ 0x180071010 (CrmStateMonitorPostResumeTimerCallback.c)
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002D220 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorListenerRemove @ 0x1800331A0 (CrmStateMonitorListenerRemove.c)
 */

__int64 __fastcall CrmStateMonitorPostResumeSetAndReset(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( *(_QWORD *)(a1 + 104) != a1 + 104 )
    CrmStateMonitorListenerRemove((int *)qword_1800EA910, a1 + 96);
  if ( *(_QWORD *)(a1 + 128) != a1 + 128 )
    CrmStateMonitorListenerRemove((int *)qword_1800EA918, a1 + 120);
  return CrmStateMonitorStateSet((unsigned int *)a1, &v4, 4uLL, 0);
}
