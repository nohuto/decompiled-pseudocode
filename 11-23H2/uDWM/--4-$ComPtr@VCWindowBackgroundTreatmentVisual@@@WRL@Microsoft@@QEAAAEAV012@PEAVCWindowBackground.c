/*
 * XREFs of ??4?$ComPtr@VCWindowBackgroundTreatmentVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCWindowBackgroundTreatmentVisual@@@Z @ 0x180010848
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180010468 (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject **__fastcall Microsoft::WRL::ComPtr<CWindowBackgroundTreatmentVisual>::operator=(
        CBaseObject **a1,
        volatile signed __int32 *a2)
{
  CBaseObject *v3; // rcx

  if ( *a1 != (CBaseObject *)a2 )
  {
    if ( a2 )
      _InterlockedIncrement(a2 + 2);
    v3 = *a1;
    *a1 = (CBaseObject *)a2;
    if ( v3 )
      CBaseObject::Release(v3);
  }
  return a1;
}
