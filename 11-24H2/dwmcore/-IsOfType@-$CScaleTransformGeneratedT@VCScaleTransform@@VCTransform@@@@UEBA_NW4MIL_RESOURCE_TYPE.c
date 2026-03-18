/*
 * XREFs of ?IsOfType@?$CScaleTransformGeneratedT@VCScaleTransform@@VCTransform@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801EAFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@?$CTransformGeneratedT@VCTransform@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801EAFE0 (-IsOfType@-$CTransformGeneratedT@VCTransform@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CScaleTransformGeneratedT<CScaleTransform,CTransform>::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( a2 == 140 )
    return 1;
  v4 = CTransformGeneratedT<CTransform,CTransform3D>::IsOfType();
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
