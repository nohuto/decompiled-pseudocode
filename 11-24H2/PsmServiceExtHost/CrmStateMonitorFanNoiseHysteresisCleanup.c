/*
 * XREFs of CrmStateMonitorFanNoiseHysteresisCleanup @ 0x18006DF2C
 * Callers:
 *     CrmStateMonitorCleanup @ 0x18006E9D4 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorListenerRemove @ 0x1800331A0 (CrmStateMonitorListenerRemove.c)
 */

void __fastcall CrmStateMonitorFanNoiseHysteresisCleanup(__int64 a1)
{
  __int64 v2; // rcx

  if ( *(_QWORD *)(a1 + 96) != a1 + 96 )
    CrmStateMonitorListenerRemove((int *)qword_1800EA990, a1 + 88);
  v2 = *(_QWORD *)(a1 + 112);
  if ( v2 )
  {
    TpSetTimer(v2, 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(a1 + 112), 1LL);
    TpReleaseTimer(*(_QWORD *)(a1 + 112));
  }
}
