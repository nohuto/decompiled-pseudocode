/*
 * XREFs of imp_WdfWorkItemFlush @ 0x140068650
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FlushAndWait@FxWorkItem@@QEAAXXZ @ 0x14006869C (-FlushAndWait@FxWorkItem@@QEAAXXZ.c)
 */

void __fastcall imp_WdfWorkItemFlush(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWORKITEM__ *WorkItem)
{
  FxWorkItem *pFxWorkItem; // [rsp+30h] [rbp+8h] BYREF

  pFxWorkItem = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)WorkItem,
    0x1025u,
    (void **)&pFxWorkItem);
  if ( (int)FxVerifierCheckIrqlLevel(pFxWorkItem->m_Globals, 0) >= 0 )
    FxWorkItem::FlushAndWait(pFxWorkItem);
}
