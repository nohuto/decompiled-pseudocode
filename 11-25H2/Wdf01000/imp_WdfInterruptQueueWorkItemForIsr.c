/*
 * XREFs of imp_WdfInterruptQueueWorkItemForIsr @ 0x140046B10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?QueueWorkItemForIsr@FxInterrupt@@QEAAEXZ @ 0x140046B48 (-QueueWorkItemForIsr@FxInterrupt@@QEAAEXZ.c)
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
