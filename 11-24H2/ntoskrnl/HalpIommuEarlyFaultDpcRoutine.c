/*
 * XREFs of HalpIommuEarlyFaultDpcRoutine @ 0x140553CA0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuLogEarlyFault @ 0x140554200 (HalpIommuLogEarlyFault.c)
 */

void __fastcall HalpIommuEarlyFaultDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  HalpIommuLogEarlyFault(Dpc, DeferredContext, SystemArgument1, SystemArgument2);
}
