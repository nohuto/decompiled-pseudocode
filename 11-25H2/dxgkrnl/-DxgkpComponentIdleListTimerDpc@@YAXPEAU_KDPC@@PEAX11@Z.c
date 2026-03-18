/*
 * XREFs of ?DxgkpComponentIdleListTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x140036D20
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ @ 0x140036D38 (-ProcessComponentIdleList@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkpComponentIdleListTimerDpc(
        struct _KDPC *Dpc,
        DXGADAPTER *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  DXGADAPTER::ProcessComponentIdleList(DeferredContext);
}
