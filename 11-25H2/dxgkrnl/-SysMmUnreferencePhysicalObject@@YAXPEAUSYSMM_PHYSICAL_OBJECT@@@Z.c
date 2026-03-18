/*
 * XREFs of ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x140010C80
 * Callers:
 *     ?SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z @ 0x14000FEC0 (-SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z.c)
 *     DxgkDestroyPhysicalMemoryObjectCB @ 0x14000FFD0 (DxgkDestroyPhysicalMemoryObjectCB.c)
 *     DxgkFreePagesFromMdlCB @ 0x1400105A0 (DxgkFreePagesFromMdlCB.c)
 *     SmmClosePhysicalObject @ 0x14001094C (SmmClosePhysicalObject.c)
 *     DxgkUnmapMdlFromIoMmuCB @ 0x140073550 (DxgkUnmapMdlFromIoMmuCB.c)
 *     ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z @ 0x1403C26E0 (-PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z.c)
 *     ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1403D9024 (-UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z.c)
 * Callees:
 *     SmmDestroyPhysicalObject @ 0x140010DE8 (SmmDestroyPhysicalObject.c)
 */

void __fastcall SysMmUnreferencePhysicalObject(struct SYSMM_PHYSICAL_OBJECT *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 10, 0xFFFFFFFF) == 1 )
    SmmDestroyPhysicalObject(a1);
}
