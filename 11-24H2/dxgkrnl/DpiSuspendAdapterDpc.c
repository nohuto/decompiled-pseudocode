/*
 * XREFs of DpiSuspendAdapterDpc @ 0x14002A990
 * Callers:
 *     <none>
 * Callees:
 *     DpiRequestDevicePowerState @ 0x14002AC88 (DpiRequestDevicePowerState.c)
 */

void __fastcall DpiSuspendAdapterDpc(
        struct _KDPC *Dpc,
        int *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  WdLogSingleEntry3(5LL, DeferredContext, DeferredContext[1072], DeferredContext[1073]);
  WdLogGlobalForLineNumber = 4702;
  if ( DeferredContext[1072] != 4 && DeferredContext[1073] == 1 )
    DpiRequestDevicePowerState(*((_QWORD *)DeferredContext + 3), 4LL);
}
