/*
 * XREFs of ?GetWidenedBounds@CShape@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18014CC9C
 * Callers:
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x1800FD464 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x18014BD2C (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180072D70 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800D0D60 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?HasValidValues@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18014CE50 (-HasValidValues@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::GetWidenedBounds(CPathSegmentsShape *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v8)(CRoundedRectangleShape *, const struct CMILMatrix *, struct ID2D1Geometry **); // rsi
  int D2DGeometry; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  float v15; // xmm1_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm4_4
  struct ID2D1Geometry *v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-50h]
  struct ID2D1Geometry *v22; // [rsp+40h] [rbp-30h] BYREF
  __int128 v23; // [rsp+48h] [rbp-28h] BYREF

  v4 = *(_QWORD *)this;
  v22 = 0LL;
  v8 = *(__int64 (__fastcall **)(CRoundedRectangleShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(v4 + 24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  if ( v8 == CPathSegmentsShape::GetD2DGeometry )
  {
    D2DGeometry = CPathSegmentsShape::GetD2DGeometry(this, 0LL, &v22);
  }
  else if ( v8 == CRoundedRectangleShape::GetD2DGeometry )
  {
    D2DGeometry = CRoundedRectangleShape::GetD2DGeometry(this, 0LL, &v22);
  }
  else
  {
    D2DGeometry = v8(this, 0LL, &v22);
  }
  v10 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    v21 = 1058;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v21, 0LL);
    goto LABEL_8;
  }
  v23 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int128 *, __int64, _QWORD, _DWORD, __int128 *))(*(_QWORD *)v22 + 40LL))(
          v22,
          &v23,
          a4,
          0LL,
          LODWORD(FLOAT_0_25),
          &v23);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x42Bu, 0LL);
    goto LABEL_8;
  }
  v15 = *((float *)&v23 + 1);
  v16 = *((float *)&v23 + 2);
  v17 = *((float *)&v23 + 3);
  *(_DWORD *)a2 = v23;
  *(float *)(a2 + 4) = v15;
  *(float *)(a2 + 8) = v16;
  *(float *)(a2 + 12) = v17;
  if ( !(unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::HasValidValues(
                           a2,
                           v12,
                           v13,
                           v14) )
  {
    v10 = -2003304438;
    v21 = 1073;
    goto LABEL_14;
  }
  if ( v16 < v18 || v17 < v15 )
  {
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = 0;
  }
LABEL_8:
  v19 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return v10;
}
