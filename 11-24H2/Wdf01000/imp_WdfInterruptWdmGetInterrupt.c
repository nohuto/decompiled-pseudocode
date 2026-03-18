/*
 * XREFs of imp_WdfInterruptWdmGetInterrupt @ 0x14005C180
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetInterruptPtr@FxInterrupt@@QEAAPEAU_KINTERRUPT@@XZ @ 0x14005C1B8 (-GetInterruptPtr@FxInterrupt@@QEAAPEAU_KINTERRUPT@@XZ.c)
 */

struct _KINTERRUPT *__fastcall imp_WdfInterruptWdmGetInterrupt(
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
  return FxInterrupt::GetInterruptPtr(pFxInterrupt);
}
