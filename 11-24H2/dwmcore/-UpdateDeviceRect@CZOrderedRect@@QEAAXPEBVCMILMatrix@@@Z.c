/*
 * XREFs of ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x1801C25F0
 * Callers:
 *     ?FlushOcclusionRects@COcclusionContext@@QEAAJXZ @ 0x1800FEF90 (-FlushOcclusionRects@COcclusionContext@@QEAAJXZ.c)
 *     ?Add@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@PEBVCVisual@@@Z @ 0x1802846F0 (-Add@CArrayBasedCoverageSet@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ceilf_0 @ 0x1802DF5CC (ceilf_0.c)
 *     floorf_0 @ 0x1802DF608 (floorf_0.c)
 */

void __fastcall CZOrderedRect::UpdateDeviceRect(CZOrderedRect *this, const struct CMILMatrix *a2)
{
  const struct D2D_RECT_F *v4; // rdx
  float v5; // xmm9_4
  float v6; // xmm6_4
  float v7; // xmm10_4
  float v8; // xmm1_4

  v4 = (const struct D2D_RECT_F *)((char *)this + 32);
  if ( a2 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)a2, v4, (float *)this);
    v5 = *((float *)this + 1);
    v6 = *((float *)this + 2);
    v7 = *((float *)this + 3);
  }
  else
  {
    v5 = *((float *)this + 9);
    v6 = *((float *)this + 10);
    v7 = *((float *)this + 11);
    *(FLOAT *)this = v4->left;
  }
  v8 = *(float *)this;
  if ( COERCE_FLOAT(*(_DWORD *)this & _xmm) < 8388608.0 )
    v8 = (float)(int)ceilf_0(*(float *)this);
  *(float *)this = v8;
  if ( COERCE_FLOAT(LODWORD(v5) & _xmm) < 8388608.0 )
    v5 = (float)(int)ceilf_0(v5);
  *((float *)this + 1) = v5;
  if ( COERCE_FLOAT(LODWORD(v6) & _xmm) < 8388608.0 )
    v6 = (float)(int)floorf_0(v6);
  *((float *)this + 2) = v6;
  if ( COERCE_FLOAT(LODWORD(v7) & _xmm) >= 8388608.0 )
    *((float *)this + 3) = v7;
  else
    *((float *)this + 3) = (float)(int)floorf_0(v7);
}
