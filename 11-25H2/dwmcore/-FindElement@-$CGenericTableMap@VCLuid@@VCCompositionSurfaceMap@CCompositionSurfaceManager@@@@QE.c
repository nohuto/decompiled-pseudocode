/*
 * XREFs of ?FindElement@?$CGenericTableMap@VCLuid@@VCCompositionSurfaceMap@CCompositionSurfaceManager@@@@QEAAPEAVCCompositionSurfaceMap@CCompositionSurfaceManager@@VCLuid@@@Z @ 0x1801F8674
 * Callers:
 *     ?RemoveFromSurfaceMap@CCompositionSurfaceManager@@MEAA_NU_LUID@@@Z @ 0x1801F8630 (-RemoveFromSurfaceMap@CCompositionSurfaceManager@@MEAA_NU_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::FindElement(
        struct _RTL_GENERIC_TABLE *a1,
        __int64 a2)
{
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[1] = 0LL;
  Buffer[0] = a2;
  return RtlLookupElementGenericTable(a1, Buffer);
}
