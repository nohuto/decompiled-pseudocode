/*
 * XREFs of ?RemoveFromSurfaceMap@CCompositionSurfaceManager@@MEAA_NU_LUID@@@Z @ 0x1801F8630
 * Callers:
 *     <none>
 * Callees:
 *     ?FindElement@?$CGenericTableMap@VCLuid@@VCCompositionSurfaceMap@CCompositionSurfaceManager@@@@QEAAPEAVCCompositionSurfaceMap@CCompositionSurfaceManager@@VCLuid@@@Z @ 0x1801F8674 (-FindElement@-$CGenericTableMap@VCLuid@@VCCompositionSurfaceMap@CCompositionSurfaceManager@@@@QE.c)
 *     ?RemoveElement@?$CGenericTableMap@VCLuid@@VCCompositionSurfaceMap@CCompositionSurfaceManager@@@@QEAAXPEAVCCompositionSurfaceMap@CCompositionSurfaceManager@@@Z @ 0x1801F86A0 (-RemoveElement@-$CGenericTableMap@VCLuid@@VCCompositionSurfaceMap@CCompositionSurfaceManager@@@@.c)
 */

bool __fastcall CCompositionSurfaceManager::RemoveFromSurfaceMap(CCompositionSurfaceManager *this, struct _LUID a2)
{
  char *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx

  v2 = (char *)this + 8;
  v3 = ((__int64 (__fastcall *)(_QWORD, _QWORD))CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::FindElement)(
         (char *)this + 8,
         a2);
  v4 = v3;
  if ( v3 )
    CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::RemoveElement(v2, v3);
  return v4 != 0;
}
