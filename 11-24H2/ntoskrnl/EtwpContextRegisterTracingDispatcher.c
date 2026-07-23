/*
 * XREFs of EtwpContextRegisterTracingDispatcher @ 0x1404C7B30
 * Callers:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x1402D0080 (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x140415D90 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     EtwpQueueApc @ 0x1403DE1A0 (EtwpQueueApc.c)
 *     EtwpTraceContextRegisters @ 0x14064B6B8 (EtwpTraceContextRegisters.c)
 */

void __fastcall EtwpContextRegisterTracingDispatcher(
        __int64 a1,
        unsigned int *a2,
        struct _KTHREAD *a3,
        unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 EffectiveIrql; // al

  CurrentThread = a3;
  if ( !a3 )
    CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) == 0 )
  {
    EffectiveIrql = KeGetEffectiveIrql(a1, (__int64)a2);
    if ( EffectiveIrql < 2u )
      EtwpTraceContextRegisters(a1, a2, CurrentThread, a4);
    else
      EtwpQueueApc(
        (unsigned int **)(a1 + 1088),
        CurrentThread,
        EffectiveIrql,
        (unsigned int *)EtwpContextRegisterTracingApc,
        (_SLIST_ENTRY *)xHalTimerWatchdogStop,
        (unsigned int *)a2[1],
        (unsigned int *)*a2,
        0LL);
  }
}
