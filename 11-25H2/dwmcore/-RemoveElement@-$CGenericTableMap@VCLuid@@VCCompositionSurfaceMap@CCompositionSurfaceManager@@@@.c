/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@VCLuid@@VCCompositionSurfaceMap@CCompositionSurfaceManager@@@@QEAAXPEAVCCompositionSurfaceMap@CCompositionSurfaceManager@@@Z @ 0x1801F86A0
 * Callers:
 *     ?RemoveFromSurfaceMap@CCompositionSurfaceManager@@MEAA_NU_LUID@@@Z @ 0x1801F8630 (-RemoveFromSurfaceMap@CCompositionSurfaceManager@@MEAA_NU_LUID@@@Z.c)
 *     ??_GCCompositionSurfaceManager@@MEAAPEAXI@Z @ 0x180268540 (--_GCCompositionSurfaceManager@@MEAAPEAXI@Z.c)
 *     ??1CSurfaceManager@@MEAA@XZ @ 0x18026CF80 (--1CSurfaceManager@@MEAA@XZ.c)
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
