/*
 * XREFs of PortpErrorDrainListDpc @ 0x14013B3E0
 * Callers:
 *     <none>
 * Callees:
 *     PortTraceErrorDrainList @ 0x14013B350 (PortTraceErrorDrainList.c)
 */

void __fastcall PortpErrorDrainListDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  PortTraceErrorDrainList(*((PVOID *)DeferredContext + 1), (PSLIST_HEADER)DeferredContext + 4);
  _InterlockedDecrement((volatile signed __int32 *)DeferredContext + 21);
}
