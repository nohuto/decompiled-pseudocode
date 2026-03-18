/*
 * XREFs of KiScanQueues @ 0x14068A180
 * Callers:
 *     <none>
 * Callees:
 *     KiMcaDeferredRecoveryService @ 0x1406AA7E0 (KiMcaDeferredRecoveryService.c)
 */

void __fastcall __noreturn KiScanQueues(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KiMcaDeferredRecoveryService(
    *((unsigned int *)DeferredContext + 16),
    DeferredContext[9],
    DeferredContext[10],
    DeferredContext[11],
    DeferredContext[12]);
}
