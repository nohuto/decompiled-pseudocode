/*
 * XREFs of ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x1800C3EE0
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800F4D78 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18003DED0 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x180078EC0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x180078FD0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800790C0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x180079260 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C4750 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800C6450 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800D0110 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::ShapeDataFromGeometry(
        const struct D2D_SIZE_F *a1,
        struct CGeometry *a2,
        struct CShapePtr *a3)
{
  bool v3; // zf
  void (__fastcall ***v7)(CRoundedRectangleShape *, __int64); // rbx
  void (__fastcall *v8)(CRoundedRectangleShape *, __int64); // rax
  int ShapeData; // eax
  unsigned int v10; // ebx
  CRectanglesShape *v11; // r14
  int v12; // esi
  __int64 (__fastcall *v13)(CPolygonShape *, struct D2D_RECT_F *, CMILMatrix *); // rax
  struct D2D_RECT_F *v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned int v17; // eax
  int TightBounds; // eax
  CRectanglesShape *v19; // rdi
  void (__fastcall *v20)(CRectanglesShape *, __int64); // rax
  char v22; // r15
  void (__fastcall ***v23)(CPolygonShape *, __int64); // rsi
  void (__fastcall *v24)(CPolygonShape *, __int64); // rax
  CRoundedRectangleShape *v25; // rcx
  CPolygonShape *v26; // rcx
  __int64 v27; // rsi
  CRectanglesShape *v28; // [rsp+38h] [rbp-19h] BYREF
  char v29; // [rsp+40h] [rbp-11h]
  struct D2D_RECT_F v30; // [rsp+48h] [rbp-9h] BYREF
  struct tagRECT v31; // [rsp+58h] [rbp+7h] BYREF

  v3 = *((_BYTE *)a3 + 8) == 0;
  v30 = 0LL;
  if ( !v3 )
  {
    v7 = *(void (__fastcall ****)(CRoundedRectangleShape *, __int64))a3;
    if ( *(_QWORD *)a3 )
    {
      v8 = **v7;
      if ( (char *)v8 == (char *)CRectanglesShape::`scalar deleting destructor' )
      {
        CRectanglesShape::~CRectanglesShape(*(CRectanglesShape **)a3);
        CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v7);
      }
      else
      {
        v25 = *(CRoundedRectangleShape **)a3;
        if ( (char *)v8 == (char *)CRoundedRectangleShape::`vector deleting destructor' )
        {
          CRoundedRectangleShape::~CRoundedRectangleShape(v25);
          CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v7);
        }
        else if ( (char *)v8 == (char *)CPolygonShape::`scalar deleting destructor' )
        {
          CPolygonShape::`scalar deleting destructor'(v25, 1);
        }
        else
        {
          v8(v25, 1LL);
        }
      }
    }
  }
  *(_QWORD *)a3 = 0LL;
  *((_BYTE *)a3 + 8) = 0;
  v28 = 0LL;
  v29 = 0;
  ShapeData = CGeometry::GetShapeData(a2, a1, (struct CShapePtr *)&v28);
  v10 = ShapeData;
  if ( ShapeData < 0 )
  {
    v12 = ShapeData;
    v17 = 2438;
    goto LABEL_17;
  }
  v11 = v28;
  v12 = -2003304309;
  if ( !v28 )
    goto LABEL_24;
  v13 = *(__int64 (__fastcall **)(CPolygonShape *, struct D2D_RECT_F *, CMILMatrix *))(*(_QWORD *)v28 + 48LL);
  if ( (char *)v13 == (char *)CRectanglesShape::GetTightBounds )
  {
    v14 = (struct D2D_RECT_F *)*((_QWORD *)v28 + 2);
    if ( *((struct D2D_RECT_F **)v28 + 3) != v14 )
    {
      v15 = 1LL;
      v30 = *v14;
      v16 = *((_QWORD *)v28 + 2);
      if ( (unsigned __int64)((*((_QWORD *)v28 + 3) - v16) >> 4) > 1 )
      {
        v27 = 16LL;
        do
        {
          TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(&v30.left, (float *)(v27 + v16));
          v16 = *((_QWORD *)v11 + 2);
          v27 += 16LL;
          ++v15;
        }
        while ( v15 < (*((_QWORD *)v11 + 3) - v16) >> 4 );
        v11 = v28;
      }
    }
    v10 = 0;
    goto LABEL_25;
  }
  if ( (char *)v13 == (char *)CRegionShape::GetTightBounds )
  {
    v31 = 0LL;
    if ( FastRegion::CRegion::GetBoundingRect((CRectanglesShape *)((char *)v28 + 16), &v31) )
    {
      v30.left = (float)v31.left;
      v30.top = (float)v31.top;
      v30.right = (float)v31.right;
      v30.bottom = (float)v31.bottom;
    }
    v11 = v28;
    v10 = 0;
    goto LABEL_25;
  }
  if ( v13 == CRoundedRectangleShape::GetTightBounds )
    TightBounds = CRoundedRectangleShape::GetTightBounds(v28, &v30, 0LL);
  else
    TightBounds = v13(v28, &v30, 0LL);
  v12 = TightBounds;
  v10 = TightBounds;
  if ( TightBounds >= 0 )
  {
    v11 = v28;
LABEL_24:
    v10 = v12;
    if ( v12 >= 0 )
    {
LABEL_25:
      v22 = v29;
      if ( *((_BYTE *)a3 + 8) )
      {
        v23 = *(void (__fastcall ****)(CPolygonShape *, __int64))a3;
        if ( *(_QWORD *)a3 )
        {
          v24 = **v23;
          if ( (char *)v24 == (char *)CRectanglesShape::`scalar deleting destructor' )
          {
            CRectanglesShape::~CRectanglesShape(*(CRectanglesShape **)a3);
            CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v23);
          }
          else if ( (char *)v24 == (char *)CRoundedRectangleShape::`vector deleting destructor' )
          {
            CRoundedRectangleShape::~CRoundedRectangleShape(*(CRoundedRectangleShape **)a3);
            CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v23);
          }
          else
          {
            v26 = *(CPolygonShape **)a3;
            if ( (char *)v24 == (char *)CPolygonShape::`scalar deleting destructor' )
              CPolygonShape::`scalar deleting destructor'(v26, 1);
            else
              v24(v26, 1LL);
          }
        }
      }
      *(_QWORD *)a3 = v11;
      *((_BYTE *)a3 + 8) = v22;
      v19 = 0LL;
      v29 = 0;
      v28 = 0LL;
      goto LABEL_18;
    }
    goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, TightBounds, 0x140u, 0LL);
LABEL_16:
  v17 = 2439;
LABEL_17:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, v17, 0LL);
  v19 = v28;
  if ( v10 == -2003304438 )
  {
LABEL_44:
    v10 = 0;
    goto LABEL_19;
  }
LABEL_18:
  if ( v10 == -2003304309 )
    goto LABEL_44;
LABEL_19:
  if ( v29 && v19 )
  {
    v20 = **(void (__fastcall ***)(CRectanglesShape *, __int64))v19;
    if ( (char *)v20 == (char *)CRectanglesShape::`scalar deleting destructor' )
    {
      CRectanglesShape::~CRectanglesShape(v19);
      CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v19);
    }
    else if ( (char *)v20 == (char *)CRoundedRectangleShape::`vector deleting destructor' )
    {
      CRoundedRectangleShape::~CRoundedRectangleShape(v19);
      CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v19);
    }
    else if ( (char *)v20 == (char *)CPolygonShape::`scalar deleting destructor' )
    {
      CPolygonShape::`scalar deleting destructor'(v19, 1);
    }
    else
    {
      v20(v19, 1LL);
    }
  }
  return v10;
}
