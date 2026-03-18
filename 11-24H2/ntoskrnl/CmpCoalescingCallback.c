/*
 * XREFs of CmpCoalescingCallback @ 0x1404AD130
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     CmpEnableLazyFlush @ 0x1404AD184 (CmpEnableLazyFlush.c)
 *     CmpForceFlushForCoalescing @ 0x14088355C (CmpForceFlushForCoalescing.c)
 */

void __fastcall CmpCoalescingCallback(int a1)
{
  int v1; // ecx
  int v2; // ecx
  struct _KTHREAD *CurrentThread; // rax

  v1 = a1 - 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      if ( v2 == 1 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        CmpForceFlushForCoalescing();
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      CmpEnableLazyFlush(8LL);
    }
  }
  else
  {
    _InterlockedOr(&CmpHoldLazyFlush, 8u);
  }
}
