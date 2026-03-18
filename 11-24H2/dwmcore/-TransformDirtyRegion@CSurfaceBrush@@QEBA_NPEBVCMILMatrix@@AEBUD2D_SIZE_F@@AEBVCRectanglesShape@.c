/*
 * XREFs of ?TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@@PEAV4@@Z @ 0x180173340
 * Callers:
 *     ?GetDirtyRegion@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x18004B820 (-GetDirtyRegion@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?GetDirtyRegionFromSurface@CSurfaceRenderStrategy@CSurfaceBrush@@KA_NPEBV2@PEBVCMILMatrix@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180173764 (-GetDirtyRegionFromSurface@CSurfaceRenderStrategy@CSurfaceBrush@@KA_NPEBV2@PEBVCMILMatrix@@AEBUD.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800B4D30 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180141330 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?AddRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x18017352C (-AddRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

bool __fastcall CSurfaceBrush::TransformDirtyRegion(
        CSurfaceBrush *this,
        __m128 *a2,
        const struct D2D_SIZE_F *a3,
        const struct CRectanglesShape *a4,
        struct CRectanglesShape *a5)
{
  int v8; // eax
  float width; // xmm7_4
  float height; // xmm8_4
  const struct D2D_RECT_F *v11; // rbx
  const struct D2D_RECT_F *v12; // rdi
  float left; // xmm0_4
  float top; // xmm1_4
  float right; // xmm3_4
  float bottom; // xmm2_4
  __int64 v18; // [rsp+28h] [rbp-91h] BYREF
  int v19; // [rsp+30h] [rbp-89h]
  int v20; // [rsp+34h] [rbp-85h]
  __int64 v21; // [rsp+38h] [rbp-81h]
  int v22; // [rsp+40h] [rbp-79h]
  int v23; // [rsp+44h] [rbp-75h]
  __int128 v24; // [rsp+48h] [rbp-71h]
  __int64 v25; // [rsp+58h] [rbp-61h]
  int v26; // [rsp+60h] [rbp-59h]
  int v27; // [rsp+64h] [rbp-55h]
  int v28; // [rsp+68h] [rbp-51h]
  __int128 v29; // [rsp+78h] [rbp-41h] BYREF
  __int128 v30; // [rsp+88h] [rbp-31h]
  __int64 v31; // [rsp+98h] [rbp-21h]
  struct D2D_RECT_F v32; // [rsp+A0h] [rbp-19h] BYREF

  v31 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v8 = CSurfaceBrush::ComputeLayout(this, a3, (struct CContent::LayoutData *)&v29, 0LL);
  if ( v8 >= 0 )
  {
    v28 = 10248;
    v19 = 0;
    v20 = 0;
    v22 = 0;
    v23 = 0;
    v26 = 0;
    v21 = *((_QWORD *)&v29 + 1);
    v18 = v29;
    v24 = _xmm;
    v25 = v30;
    v27 = 1065353216;
    if ( a2 )
      CMILMatrix::Multiply(a2, (const struct CMILMatrix *)&v18, (struct CMILMatrix *)&v18);
    width = a3->width;
    height = a3->height;
    v11 = (const struct D2D_RECT_F *)*((_QWORD *)a4 + 2);
    v12 = (const struct D2D_RECT_F *)*((_QWORD *)a4 + 3);
    v32 = 0LL;
    while ( v11 != v12 )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v18, v11, &v32.left);
      left = v32.left;
      if ( v32.left < 0.0 )
      {
        v32.left = 0.0;
        left = 0.0;
      }
      top = v32.top;
      if ( v32.top < 0.0 )
      {
        v32.top = 0.0;
        top = 0.0;
      }
      right = v32.right;
      if ( v32.right > width )
      {
        v32.right = width;
        right = width;
      }
      bottom = v32.bottom;
      if ( v32.bottom > height )
      {
        v32.bottom = height;
        bottom = height;
      }
      if ( right <= left || bottom <= top )
      {
        v32.bottom = 0.0;
        v32.right = 0.0;
        v32.top = 0.0;
        v32.left = 0.0;
      }
      else
      {
        CRectanglesShape::AddRect(a5, &v32);
      }
      ++v11;
    }
    return 1;
  }
  return v8 == -2003304441;
}
