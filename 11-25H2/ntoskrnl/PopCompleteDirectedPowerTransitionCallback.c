/*
 * XREFs of PopCompleteDirectedPowerTransitionCallback @ 0x140477304
 * Callers:
 *     PopFxCompleteDirectedPowerTransition @ 0x1404F73C4 (PopFxCompleteDirectedPowerTransition.c)
 *     PopIssueDirectedPowerTransition @ 0x140AB3DFC (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x14027FE40 (KeReleaseSemaphore.c)
 *     PopCompleteNotifyTransitionCommon @ 0x140477380 (PopCompleteNotifyTransitionCommon.c)
 *     PoFxIdleDevice @ 0x140477718 (PoFxIdleDevice.c)
 */

LONG __fastcall PopCompleteDirectedPowerTransitionCallback(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  int v6; // esi

  v4 = 0LL;
  v6 = *(_DWORD *)(a2 + 4);
  if ( (int)a3 < 0 )
    v4 = *(_QWORD *)(a1 + 96);
  PopCompleteNotifyTransitionCommon(a2, *(_QWORD *)(a1 + 48) + 160LL, a3, v4);
  if ( *(_BYTE *)a2 == 2 && v6 == 1 )
    PoFxIdleDevice(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
  return KeReleaseSemaphore(*(PRKSEMAPHORE *)(a2 + 40), 0, 1, 0);
}
