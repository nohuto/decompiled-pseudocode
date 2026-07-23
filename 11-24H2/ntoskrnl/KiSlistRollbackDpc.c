/*
 * XREFs of KiSlistRollbackDpc @ 0x1405AE2E0
 * Callers:
 *     <none>
 * Callees:
 *     KiRequestSchedulerApcThread @ 0x1405C0614 (KiRequestSchedulerApcThread.c)
 */

void __fastcall KiSlistRollbackDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KiRequestSchedulerApcThread(KeGetCurrentThread(), DeferredContext, SystemArgument1, SystemArgument2);
}
