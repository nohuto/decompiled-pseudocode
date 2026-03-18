/*
 * XREFs of ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x18014BD2C
 * Callers:
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x180135248 (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 * Callees:
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C4750 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x1800C5C50 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800C6240 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@.c)
 *     ?GetWidenedBounds@CShape@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18014CC9C (-GetWidenedBounds@CShape@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ @ 0x18014DDCC (-EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ.c)
 */

void __fastcall CSpriteVectorShape::ComputeBounds(CSpriteVectorShape *this)
{
  CGeometry *v2; // rcx
  int v3; // edi
  bool v4; // al
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  int v13; // eax
  int v14; // esi
  int WidenedBounds; // eax
  CPathSegmentsShape *v16; // [rsp+30h] [rbp-28h] BYREF
  char v17; // [rsp+38h] [rbp-20h]

  *((_WORD *)this + 48) = 0;
  v2 = (CGeometry *)*((_QWORD *)this + 15);
  v16 = 0LL;
  v17 = 0;
  if ( v2 )
    CGeometry::GetShapeData(v2, 0LL, &v16);
  if ( !CShapePtr::IsEmpty(&v16) )
  {
    v3 = -2003304309;
    if ( *((_QWORD *)this + 14) && (int)CSpriteVectorShape::EnsureStrokeStyleForBounds(this) >= 0 )
    {
      v14 = -2003304309;
      if ( v16 )
      {
        WidenedBounds = CShape::GetWidenedBounds(v16);
        v14 = WidenedBounds;
        if ( WidenedBounds < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, WidenedBounds, 0x150u, 0LL);
      }
      *((_BYTE *)this + 97) = v14 >= 0;
    }
    if ( *((_BYTE *)this + 97)
      || *((_QWORD *)this + 13)
      && (v4 = (int)CShapePtr::GetTightBounds(&v16, (__int64)this + 80, 0LL) >= 0, (*((_BYTE *)this + 97) = v4) != 0) )
    {
      v5 = *((float *)this + 20);
      if ( v5 <= -3.4028235e38 )
        v6 = FLOAT_N3_4028235e38;
      else
        v6 = v5 - 0.25;
      *((float *)this + 20) = v6;
      v7 = *((float *)this + 21);
      if ( v7 <= -3.4028235e38 )
        v8 = FLOAT_N3_4028235e38;
      else
        v8 = v7 - 0.25;
      *((float *)this + 21) = v8;
      v9 = *((float *)this + 22);
      if ( v9 >= 3.4028235e38 )
        v10 = FLOAT_3_4028235e38;
      else
        v10 = v9 + 0.25;
      *((float *)this + 22) = v10;
      v11 = *((float *)this + 23);
      if ( v11 >= 3.4028235e38 )
        v12 = FLOAT_3_4028235e38;
      else
        v12 = v11 + 0.25;
      *((float *)this + 23) = v12;
      if ( v16 )
      {
        v13 = CShape::GetWidenedBounds(v16);
        v3 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x150u, 0LL);
      }
      *((_BYTE *)this + 97) = v3 >= 0;
    }
  }
  CShapePtr::~CShapePtr(&v16);
}
