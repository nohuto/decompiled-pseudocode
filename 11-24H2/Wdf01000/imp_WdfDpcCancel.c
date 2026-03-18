/*
 * XREFs of imp_WdfDpcCancel @ 0x14007E730
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

BOOLEAN __fastcall imp_WdfDpcCancel(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDPC__ *Dpc, unsigned __int8 Wait)
{
  BOOLEAN v5; // al
  BOOLEAN v6; // bl
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxDpc *pFxDpc; // [rsp+58h] [rbp+20h] BYREF

  pFxDriverGlobals = 0LL;
  pFxDpc = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Dpc,
    0x1015u,
    (void **)&pFxDpc,
    &pFxDriverGlobals);
  if ( Wait && (int)FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0) < 0 )
    return 0;
  v5 = KeRemoveQueueDpc(&pFxDpc->m_Dpc);
  v6 = v5;
  if ( Wait )
  {
    if ( !v5 )
      KeFlushQueuedDpcs();
  }
  return v6;
}
