/*
 * XREFs of ?GetWidenedBounds@CShape@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18007BB8C
 * Callers:
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x18007AC1C (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x1800DD364 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180089900 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800A45E0 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::GetWidenedBounds(CRoundedRectangleShape *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  int (*v8)(CPathSegmentsShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rsi
  int D2DGeometry; // eax
  unsigned int v10; // ebx
  int v11; // eax
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  struct ID2D1Geometry *v16; // rcx
  struct ID2D1Geometry *v18; // [rsp+40h] [rbp-30h] BYREF
  __int128 v19; // [rsp+48h] [rbp-28h] BYREF

  v4 = *(_QWORD *)this;
  v18 = 0LL;
  v8 = *(int (**)(CPathSegmentsShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(v4 + 24);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  if ( v8 == CPathSegmentsShape::GetD2DGeometry )
  {
    D2DGeometry = CPathSegmentsShape::GetD2DGeometry(this, 0LL, &v18);
  }
  else if ( (char *)v8 == (char *)CRoundedRectangleShape::GetD2DGeometry )
  {
    D2DGeometry = CRoundedRectangleShape::GetD2DGeometry(this, 0LL, &v18);
  }
  else
  {
    D2DGeometry = ((__int64 (__fastcall *)(CRoundedRectangleShape *, _QWORD, struct ID2D1Geometry **))v8)(
                    this,
                    0LL,
                    &v18);
  }
  v10 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x422u, 0LL);
  }
  else
  {
    v19 = 0LL;
    v11 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int128 *, __int64, _QWORD, _DWORD, __int128 *))(*(_QWORD *)v18 + 40LL))(
            v18,
            &v19,
            a4,
            0LL,
            LODWORD(FLOAT_0_25),
            &v19);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x42Bu, 0LL);
    }
    else
    {
      v12 = *(float *)&v19;
      v13 = *((float *)&v19 + 1);
      v14 = *((float *)&v19 + 2);
      v15 = *((float *)&v19 + 3);
      *(_DWORD *)a2 = v19;
      *(float *)(a2 + 4) = v13;
      *(float *)(a2 + 8) = v14;
      *(float *)(a2 + 12) = v15;
      if ( v14 < v12 || v15 < v13 )
      {
        *(_DWORD *)(a2 + 12) = 0;
        *(_DWORD *)(a2 + 8) = 0;
        *(_DWORD *)(a2 + 4) = 0;
        *(_DWORD *)a2 = 0;
      }
    }
  }
  v16 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v10;
}
