/*
 * XREFs of QuickCapTraceDpc @ 0x140008C60
 * Callers:
 *     <none>
 * Callees:
 *     QueueCapWork @ 0x140008BA0 (QueueCapWork.c)
 */

void __fastcall QuickCapTraceDpc(
        struct _KDPC *Dpc,
        PVOID *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  QueueCapWork(
    DeferredContext,
    (__int64)(DeferredContext + 97),
    (__int64)&PPM_ETW_QUICK_CAP_INFO,
    (__int64)&PPM_ETW_QUICK_CAP_INFO_HV);
}
