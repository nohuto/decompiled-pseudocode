/*
 * XREFs of imp_WdfWmiInstanceFireEvent @ 0x140072B50
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FireEvent@FxWmiInstance@@QEAAJPEAXK@Z @ 0x140072BB4 (-FireEvent@FxWmiInstance@@QEAAJPEAXK@Z.c)
 */

int __fastcall imp_WdfWmiInstanceFireEvent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIINSTANCE__ *WmiInstance,
        unsigned int EventDataSize,
        void *EventData)
{
  int result; // eax
  FxWmiInstanceExternal *pInstance; // [rsp+30h] [rbp+8h] BYREF

  pInstance = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)WmiInstance,
    0x1034u,
    (void **)&pInstance);
  result = FxVerifierCheckIrqlLevel(pInstance->m_Globals, 1u);
  if ( result >= 0 )
    return FxWmiInstance::FireEvent(pInstance, EventData, EventDataSize);
  return result;
}
