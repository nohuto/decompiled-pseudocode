/*
 * XREFs of ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x1800586C0
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180117180 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180058110 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058F30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180088CB0 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x1800AADF0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800AAEE0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::ShapeDataFromGeometry(
        const struct D2D_SIZE_F *a1,
        struct CGeometry *a2,
        struct CShapePtr *a3)
{
  bool v3; // zf
  void *(__fastcall ***v7)(CRoundedRectangleShape *__hidden, unsigned int); // rbx
  void *(__fastcall *v8)(CRoundedRectangleShape *__hidden, unsigned int); // rax
  int ShapeData; // eax
  unsigned int v10; // ebx
  CRectanglesShape *v11; // r14
  int v12; // esi
  __int64 (__fastcall *v13)(__int64, struct D2D_RECT_F *, __int64); // rax
  struct D2D_RECT_F *v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned int v17; // eax
  int TightBounds; // eax
  CRectanglesShape *v19; // rdi
  void *(__fastcall *v20)(CRoundedRectangleShape *__hidden, unsigned int); // rax
  char v22; // r15
  void *(__fastcall ***v23)(CRoundedRectangleShape *__hidden, unsigned int); // rsi
  void *(__fastcall *v24)(CRoundedRectangleShape *__hidden, unsigned int); // rax
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
    v7 = *(void *(__fastcall ****)(CRoundedRectangleShape *__hidden, unsigned int))a3;
    if ( *(_QWORD *)a3 )
    {
      v8 = **v7;
      if ( v8 == CRectanglesShape::`scalar deleting destructor' )
      {
        CRectanglesShape::~CRectanglesShape(*(CRectanglesShape **)a3);
        CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v7);
      }
      else
      {
        v25 = *(CRoundedRectangleShape **)a3;
        if ( v8 == CRoundedRectangleShape::`vector deleting destructor' )
        {
          CRoundedRectangleShape::~CRoundedRectangleShape(v25);
          CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v7);
        }
        else if ( v8 == CPolygonShape::`scalar deleting destructor' )
        {
          CPolygonShape::`scalar deleting destructor'(v25, 1u);
        }
        else
        {
          v8(v25, 1u);
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
  v13 = *(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *, __int64))(*(_QWORD *)v28 + 48LL);
  if ( v13 == CRectanglesShape::GetTightBounds )
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
          TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe(&v30, v27 + v16);
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
    if ( FastRegion::CRegion::GetBoundingRect((LONG **)v28 + 2, &v31) )
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
  if ( (char *)v13 == (char *)CRoundedRectangleShape::GetTightBounds )
    TightBounds = CRoundedRectangleShape::GetTightBounds(v28, &v30, 0LL);
  else
    TightBounds = v13((__int64)v28, &v30, 0LL);
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
        v23 = *(void *(__fastcall ****)(CRoundedRectangleShape *__hidden, unsigned int))a3;
        if ( *(_QWORD *)a3 )
        {
          v24 = **v23;
          if ( v24 == CRectanglesShape::`scalar deleting destructor' )
          {
            CRectanglesShape::~CRectanglesShape(*(CRectanglesShape **)a3);
            CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v23);
          }
          else if ( v24 == CRoundedRectangleShape::`vector deleting destructor' )
          {
            CRoundedRectangleShape::~CRoundedRectangleShape(*(CRoundedRectangleShape **)a3);
            CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v23);
          }
          else
          {
            v26 = *(CPolygonShape **)a3;
            if ( v24 == CPolygonShape::`scalar deleting destructor' )
              CPolygonShape::`scalar deleting destructor'(v26, 1u);
            else
              v24(v26, 1u);
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
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x140u, 0LL);
LABEL_16:
  v17 = 2439;
LABEL_17:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v17, 0LL);
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
    v20 = **(void *(__fastcall ***)(CRoundedRectangleShape *__hidden, unsigned int))v19;
    if ( v20 == CRectanglesShape::`scalar deleting destructor' )
    {
      CRectanglesShape::~CRectanglesShape(v19);
      CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v19);
    }
    else if ( v20 == CRoundedRectangleShape::`vector deleting destructor' )
    {
      CRoundedRectangleShape::~CRoundedRectangleShape(v19);
      CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v19);
    }
    else if ( v20 == CPolygonShape::`scalar deleting destructor' )
    {
      CPolygonShape::`scalar deleting destructor'(v19, 1u);
    }
    else
    {
      v20(v19, 1u);
    }
  }
  return v10;
}
