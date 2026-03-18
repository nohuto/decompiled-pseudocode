/*
 * XREFs of ?SysMmCreatePhysicalObjectForExistingMdl@@YAJPEAUSYSMM_ADAPTER@@PEAU_MDL@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14000FA0C
 * Callers:
 *     ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z @ 0x1403C26E0 (-PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z.c)
 * Callees:
 *     SmmCreatePhysicalObjectForMdl @ 0x1400112E8 (SmmCreatePhysicalObjectForMdl.c)
 */

__int64 __fastcall SysMmCreatePhysicalObjectForExistingMdl(
        struct SYSMM_ADAPTER *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  return SmmCreatePhysicalObjectForMdl(a1, a3, a4, a5, a6);
}
