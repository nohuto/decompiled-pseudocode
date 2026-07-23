/*
 * XREFs of PopCompleteDirectedPowerTransitionCallback @ 0x1402F1298
 * Callers:
 *     PopFxCompleteDirectedPowerTransition @ 0x1404F756C (PopFxCompleteDirectedPowerTransition.c)
 *     PopIssueDirectedPowerTransition @ 0x140AB2688 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     PoFxIdleDevice @ 0x1402F11C4 (PoFxIdleDevice.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1402F2208 (PopCompleteNotifyTransitionCommon.c)
 *     KeReleaseSemaphore @ 0x1402F2490 (KeReleaseSemaphore.c)
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
