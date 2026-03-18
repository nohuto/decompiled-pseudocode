/*
 * XREFs of imp_WdfInterruptQueueWorkItemForIsr @ 0x14004C3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?QueueWorkItemForIsr@FxInterrupt@@QEAAEXZ @ 0x14004C3E8 (-QueueWorkItemForIsr@FxInterrupt@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall imp_WdfInterruptQueueWorkItemForIsr(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt)
{
  FxInterrupt *pFxInterrupt; // [rsp+30h] [rbp+8h] BYREF

  pFxInterrupt = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt);
  return FxInterrupt::QueueWorkItemForIsr(pFxInterrupt);
}
