/*
 * XREFs of CrmStateMonitorPostShellReadySetAndReset @ 0x18007147C
 * Callers:
 *     CrmStateMonitorPostShellReadyTimeSinceLogonCallback @ 0x18006C000 (CrmStateMonitorPostShellReadyTimeSinceLogonCallback.c)
 *     CrmStateMonitorPostShellReadyTimerCallback @ 0x18007A400 (CrmStateMonitorPostShellReadyTimerCallback.c)
 * Callees:
 *     CrmStateMonitorStateSet @ 0x18002D220 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorListenerRemove @ 0x1800331A0 (CrmStateMonitorListenerRemove.c)
 */

__int64 __fastcall CrmStateMonitorPostShellReadySetAndReset(__int64 a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( *(_QWORD *)(a1 + 96) != a1 + 96 )
    CrmStateMonitorListenerRemove((int *)qword_1800EA910, a1 + 88);
  if ( *(_QWORD *)(a1 + 120) != a1 + 120 )
    CrmStateMonitorListenerRemove((int *)qword_1800EA918, a1 + 112);
  return CrmStateMonitorStateSet((unsigned int *)a1, &v4, 4uLL, 0);
}
