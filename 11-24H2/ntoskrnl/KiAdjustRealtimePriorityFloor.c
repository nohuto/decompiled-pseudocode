/*
 * XREFs of KiAdjustRealtimePriorityFloor @ 0x1402CCFD8
 * Callers:
 *     KiWakePriQueueWaiter @ 0x1402CD480 (KiWakePriQueueWaiter.c)
 *     KeRemovePriQueue @ 0x14032F920 (KeRemovePriQueue.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1404DDF20 (KeSetBasePriorityThread.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall KiAdjustRealtimePriorityFloor(ULONG_PTR BugCheckParameter1, int a2)
{
  ULONG_PTR v2; // r9
  char v3; // al
  char v4; // al
  char v5; // r8

  v2 = *(int *)(BugCheckParameter1 + 1028);
  if ( a2 >= 16 )
  {
    v5 = *(_BYTE *)(a2 + BugCheckParameter1 + 824);
    if ( v5 == -1 )
      KeBugCheckEx(0x157u, BugCheckParameter1, a2, 1uLL, 0LL);
    *(_BYTE *)(a2 + BugCheckParameter1 + 824) = v5 + 1;
    *(_DWORD *)(BugCheckParameter1 + 856) |= 1 << a2;
  }
  else
  {
    a2 = 32;
  }
  *(_DWORD *)(BugCheckParameter1 + 1028) = a2;
  if ( (_DWORD)v2 != 32 )
  {
    v3 = *(_BYTE *)(v2 + BugCheckParameter1 + 824);
    if ( !v3 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v2, 2uLL, 0LL);
    v4 = v3 - 1;
    *(_BYTE *)(v2 + BugCheckParameter1 + 824) = v4;
    if ( !v4 )
      *(_DWORD *)(BugCheckParameter1 + 856) ^= 1 << v2;
  }
}
