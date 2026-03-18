/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@VCLuid@@VCCompositionSurfaceMap@CCompositionSurfaceManager@@@@QEAAXPEAVCCompositionSurfaceMap@CCompositionSurfaceManager@@@Z @ 0x1801EB0B0
 * Callers:
 *     ?RemoveFromSurfaceMap@CCompositionSurfaceManager@@MEAA_NU_LUID@@@Z @ 0x1801EB040 (-RemoveFromSurfaceMap@CCompositionSurfaceManager@@MEAA_NU_LUID@@@Z.c)
 *     ??_GCCompositionSurfaceManager@@MEAAPEAXI@Z @ 0x18025E600 (--_GCCompositionSurfaceManager@@MEAAPEAXI@Z.c)
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x180260F30 (--1CSurfaceManager@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::RemoveElement(
        struct _RTL_GENERIC_TABLE *a1,
        void *a2)
{
  if ( !RtlDeleteElementGenericTable(a1, a2) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
