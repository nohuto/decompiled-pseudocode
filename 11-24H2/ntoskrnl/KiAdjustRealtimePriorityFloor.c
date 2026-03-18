/*
 * XREFs of KiAdjustRealtimePriorityFloor @ 0x140324448
 * Callers:
 *     KeRemovePriQueue @ 0x140208340 (KeRemovePriQueue.c)
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     KiWakePriQueueWaiter @ 0x1403248F0 (KiWakePriQueueWaiter.c)
 *     KeSetPriorityThread @ 0x1403F96D0 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1404E7260 (KeSetBasePriorityThread.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
