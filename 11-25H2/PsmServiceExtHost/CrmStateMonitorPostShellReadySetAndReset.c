/*
 * XREFs of CrmStateMonitorPostShellReadySetAndReset @ 0x18007168C
 * Callers:
 *     CrmStateMonitorPostShellReadyTimeSinceLogonCallback @ 0x18006C1E0 (CrmStateMonitorPostShellReadyTimeSinceLogonCallback.c)
 *     CrmStateMonitorPostShellReadyTimerCallback @ 0x18007A3A0 (CrmStateMonitorPostShellReadyTimerCallback.c)
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002D2A0 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorListenerRemove @ 0x180033220 (CrmStateMonitorListenerRemove.c)
 */

__int64 __fastcall CrmStateMonitorPostShellReadySetAndReset(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( *(_QWORD *)(a1 + 96) != a1 + 96 )
    CrmStateMonitorListenerRemove((int *)qword_1800E9970, a1 + 88);
  if ( *(_QWORD *)(a1 + 120) != a1 + 120 )
    CrmStateMonitorListenerRemove((int *)qword_1800E9978, a1 + 112);
  return CrmStateMonitorStateSet((unsigned int *)a1, &v4, 4uLL, 0);
}
