/*
 * XREFs of ?IsOfType@?$CTransform3DGeneratedT@VCTransform3D@@VCEffect@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801F8600
 * Callers:
 *     ?IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801F8570 (-IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CTransformGeneratedT@VCTransform@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801F85D0 (-IsOfType@-$CTransformGeneratedT@VCTransform@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1802820B0 (-IsOfType@-$CRotateTransform3DGeneratedT@VCRotateTransform3D@@VCTransform3D@@@@UEBA_NW4MIL_RESOU.c)
 *     ?IsOfType@?$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180282110 (-IsOfType@-$CScaleTransform3DGeneratedT@VCScaleTransform3D@@VCTransform3D@@@@UEBA_NW4MIL_RESOURC.c)
 *     ?IsOfType@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180282210 (-IsOfType@-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@UEBA_NW4MIL_RESOURC.c)
 *     ?IsOfType@?$CTranslateTransform3DGeneratedT@VCTranslateTransform3D@@VCTransform3D@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180282240 (-IsOfType@-$CTranslateTransform3DGeneratedT@VCTranslateTransform3D@@VCTransform3D@@@@UEBA_NW4MIL.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTransform3DGeneratedT<CTransform3D,CEffect>::IsOfType(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  bool result; // al

  v2 = (unsigned int)(a2 - 113);
  result = (unsigned int)v2 <= 0x3C && (v3 = 0x1000000000000201LL, _bittest64(&v3, v2)) || a2 == 55;
  return result;
}
