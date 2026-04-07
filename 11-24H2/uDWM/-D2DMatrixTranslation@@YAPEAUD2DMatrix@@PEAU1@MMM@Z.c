/*
 * XREFs of ?D2DMatrixTranslation@@YAPEAUD2DMatrix@@PEAU1@MMM@Z @ 0x1800193CC
 * Callers:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017F9C (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z @ 0x18001908C (-GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180019180 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?CreateTransformMatrix@CTopLevelWindow3D@@AEAAXPEAUD2DMatrix@@AEBUD2D_POINT_3F@@1111@Z @ 0x1800199B0 (-CreateTransformMatrix@CTopLevelWindow3D@@AEAAXPEAUD2DMatrix@@AEBUD2D_POINT_3F@@1111@Z.c)
 *     ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A5BFC (-_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DMatrix *__fastcall D2DMatrixTranslation(struct D2DMatrix *a1, float a2, float a3, float a4)
{
  struct D2DMatrix *result; // rax

  *((float *)a1 + 12) = a2;
  *((_QWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *(_QWORD *)((char *)a1 + 12) = 0LL;
  *(_QWORD *)((char *)a1 + 4) = 0LL;
  *((_DWORD *)a1 + 15) = 1065353216;
  *((_DWORD *)a1 + 5) = 1065353216;
  *(_DWORD *)a1 = 1065353216;
  result = a1;
  *((float *)a1 + 13) = a3;
  *((float *)a1 + 14) = a4;
  *((_QWORD *)a1 + 5) = 1065353216LL;
  return result;
}
