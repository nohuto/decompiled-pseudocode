/*
 * XREFs of KiSlistRollbackDpc @ 0x1405AD9E0
 * Callers:
 *     <none>
 * Callees:
 *     KiRequestSchedulerApcThread @ 0x1405BEF64 (KiRequestSchedulerApcThread.c)
 */

void __fastcall KiSlistRollbackDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KiRequestSchedulerApcThread(KeGetCurrentThread(), DeferredContext, SystemArgument1, SystemArgument2);
}
