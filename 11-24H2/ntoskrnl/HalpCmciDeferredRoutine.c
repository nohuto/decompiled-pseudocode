/*
 * XREFs of HalpCmciDeferredRoutine @ 0x14047CE90
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciPollProcessor @ 0x14047D688 (HalpCmciPollProcessor.c)
 *     HalpCmcStartPolling @ 0x1404F7940 (HalpCmcStartPolling.c)
 */

void __fastcall HalpCmciDeferredRoutine(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(DeferredContext + 172);
  if ( DeferredContext[128] )
    HalpCmcStartPolling(v4, DeferredContext, SystemArgument1, SystemArgument2);
  else
    HalpCmciPollProcessor(v4, DeferredContext, SystemArgument1, SystemArgument2);
}
