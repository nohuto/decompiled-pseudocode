/*
 * XREFs of QuickCapTraceDpc @ 0x1400051F0
 * Callers:
 *     <none>
 * Callees:
 *     QueueCapWork @ 0x140005220 (QueueCapWork.c)
 */

void __fastcall QuickCapTraceDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  QueueCapWork(DeferredContext, DeferredContext + 776, &PPM_ETW_QUICK_CAP_INFO, &PPM_ETW_QUICK_CAP_INFO_HV);
}
