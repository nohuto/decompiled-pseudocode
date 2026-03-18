/*
 * XREFs of imp_WdfCmResourceListGetDescriptor @ 0x1400638F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetDescriptor@FxCmResList@@QEAAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@K@Z @ 0x140063930 (-GetDescriptor@FxCmResList@@QEAAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@K@Z.c)
 */

_CM_PARTIAL_RESOURCE_DESCRIPTOR *__fastcall imp_WdfCmResourceListGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        unsigned int Index)
{
  FxCmResList *pList; // [rsp+30h] [rbp+8h] BYREF

  pList = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)List, 0x1036u, (void **)&pList);
  return FxCmResList::GetDescriptor(pList, Index);
}
