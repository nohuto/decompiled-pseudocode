/*
 * XREFs of ?GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800873A0
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180013240 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180086F00 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ?FillShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180087010 (-FillShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANT.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x1800876E0 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800DD620 (-DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::GetWorldTransform3x2(CDrawingContext *this, struct D2D_MATRIX_3X2_F *a2)
{
  int v2; // eax
  float *v3; // rax
  FLOAT v4; // xmm0_4
  FLOAT v5; // xmm1_4
  FLOAT v6; // xmm2_4
  FLOAT v7; // xmm3_4
  FLOAT v8; // xmm4_4

  v2 = *((_DWORD *)this + 68);
  if ( v2 )
    v3 = (float *)(*((_QWORD *)this + 33) + 68LL * (unsigned int)(v2 - 1));
  else
    v3 = (float *)&CMILMatrix::Identity;
  v4 = v3[1];
  v5 = v3[4];
  v6 = v3[5];
  v7 = v3[12];
  v8 = v3[13];
  a2->m11 = *v3;
  a2->m12 = v4;
  a2->m21 = v5;
  a2->m22 = v6;
  a2->dx = v7;
  a2->dy = v8;
}
