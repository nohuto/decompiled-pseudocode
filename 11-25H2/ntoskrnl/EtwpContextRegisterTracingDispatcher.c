/*
 * XREFs of EtwpContextRegisterTracingDispatcher @ 0x1404CEB00
 * Callers:
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14030BF40 (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x14042A060 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     EtwpQueueApc @ 0x1404309F0 (EtwpQueueApc.c)
 *     EtwpTraceContextRegisters @ 0x140641088 (EtwpTraceContextRegisters.c)
 */

void __fastcall EtwpContextRegisterTracingDispatcher(
        __int64 a1,
        unsigned int *a2,
        struct _KTHREAD *a3,
        unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // al

  CurrentThread = a3;
  if ( !a3 )
    CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) == 0 )
  {
    CurrentIrql = ObGetCurrentIrql();
    if ( CurrentIrql < 2u )
      EtwpTraceContextRegisters(a1, a2, CurrentThread, a4);
    else
      EtwpQueueApc(
        (unsigned int **)(a1 + 1088),
        CurrentThread,
        CurrentIrql,
        (unsigned int *)EtwpContextRegisterTracingApc,
        (_SLIST_ENTRY *)xHalTimerWatchdogStop,
        (unsigned int *)a2[1],
        (unsigned int *)*a2,
        0LL);
  }
}
