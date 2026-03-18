/*
 * XREFs of HalpIommuEarlyFaultDpcRoutine @ 0x1405513A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuLogEarlyFault @ 0x140551900 (HalpIommuLogEarlyFault.c)
 */

void __fastcall HalpIommuEarlyFaultDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  HalpIommuLogEarlyFault(Dpc, DeferredContext, SystemArgument1, SystemArgument2);
}
