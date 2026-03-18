/*
 * XREFs of ?TooltipRitShowTimerCallback@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C013CC20
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x1C003DA48 (FindTimer.c)
 *     ?PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z @ 0x1C01B4EB0 (-PostEventMessageWindow@@YA_NPEAUtagWND@@K_K_J@Z.c)
 */

void __fastcall TooltipRitShowTimerCallback(struct tagWND *a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(gptiCurrent + 456LL);
  FindTimer(0LL, *(_QWORD *)(v1 + 120), 4u, 1, 0LL);
  *(_QWORD *)(v1 + 120) = 0LL;
  PostEventMessageWindow(*(struct tagWND **)(v1 + 192), 0x1Au, *(int *)(v1 + 200), 0LL);
}
