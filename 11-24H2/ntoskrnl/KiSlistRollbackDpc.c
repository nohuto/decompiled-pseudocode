/*
 * XREFs of KiSlistRollbackDpc @ 0x1405B1370
 * Callers:
 *     <none>
 * Callees:
 *     KiRequestSchedulerApcThread @ 0x1405C3044 (KiRequestSchedulerApcThread.c)
 */

void __fastcall KiSlistRollbackDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KiRequestSchedulerApcThread(KeGetCurrentThread(), DeferredContext, SystemArgument1, SystemArgument2);
}
