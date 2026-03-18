/*
 * XREFs of ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058F30
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18000F914 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180013240 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800193E0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x180024410 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180055A90 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180056FC0 (-CalcRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?CheckClipAllowsOcclusion@COcclusionContext@@AEBAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEA_N@Z @ 0x180058150 (-CheckClipAllowsOcclusion@COcclusionContext@@AEBAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEA_N@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800583D0 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x1800586C0 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x18005A960 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 *     ?GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x18005E280 (-GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E4C0 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x18007AC1C (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18007AE20 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B5890 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1801F3018 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?GetFlipExSurfaceClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801F3698 (-GetFlipExSurfaceClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020985C (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_.c)
 *     ?GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180213EB0 (-GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18021A830 (-GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?PushClipInternal@COcclusionContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@AEBVCMILMatrix@@@Z @ 0x18023DE80 (-PushClipInternal@COcclusionContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@AEBVCMILMatrix@@@Z.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18023FEC0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x18029BA48 (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1802A5D40 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180035440 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058AB0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180059890 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?HasTransform@CGeometry@@MEBA_NXZ @ 0x18005B260 (-HasTransform@CGeometry@@MEBA_NXZ.c)
 *     ?GetShapeDataCore@CPathGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18005B330 (-GetShapeDataCore@CPathGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z @ 0x18005B678 (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z.c)
 *     ?GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18005E150 (-GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x1800AADF0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800AAEE0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry::GetShapeData(CGeometry *this, const struct D2D_SIZE_F *a2, struct CShapePtr *a3)
{
  unsigned int v6; // esi
  char v7; // al
  const struct D2D_SIZE_F *v8; // r12
  __int64 (__fastcall *v9)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *); // rax
  int ShapeDataCore; // eax
  int v11; // ebx
  bool (__fastcall *v12)(CGeometry *__hidden); // rax
  int v13; // eax
  __int64 v15; // rbx
  char v16; // bl
  __int64 v17; // rdi
  void *(__fastcall ***v18)(CRoundedRectangleShape *__hidden, unsigned int); // rbx
  CRectanglesShape *v19; // rcx
  void *(__fastcall *v20)(CRoundedRectangleShape *__hidden, unsigned int); // r8
  __int64 v21; // r12
  char *v22; // rbx
  void *(__fastcall *v23)(CRoundedRectangleShape *__hidden, unsigned int); // r8
  __int64 v24; // rax
  CResource *v25; // rcx
  char *v26; // rdi
  __int64 v27; // rax
  CPathData *v28; // rcx
  _QWORD *v29; // rdi
  HANDLE v30; // rax
  bool HasTransform; // al
  CShape *v32; // rcx
  int v33; // eax
  char *v34; // rsi
  void *(__fastcall *v35)(CRoundedRectangleShape *__hidden, unsigned int); // r8
  __int64 v36; // rax
  CResource *v37; // rcx
  char *v38; // r15
  __int64 v39; // rax
  CPathData *v40; // rcx
  _QWORD *Value; // r15
  HANDLE v42; // rax
  HANDLE v43; // rax
  CRoundedRectangleShape *v44; // rcx
  HANDLE ProcessHeap; // rax
  CRoundedRectangleShape *v46; // rcx
  struct CShape *v47; // rax
  CThreadContext *v48; // rax
  CThreadContext *v49; // rax
  int ShapeDataWorker; // eax
  CThreadContext *v51; // rax
  CThreadContext *v52; // rax
  __int64 v53; // rbx
  int TrimmedShapeData; // eax
  __int64 v55; // rdi
  int v56; // eax
  struct CShape *v57; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v58[4]; // [rsp+40h] [rbp-49h] BYREF
  __int128 v59; // [rsp+60h] [rbp-29h]
  __int64 v60; // [rsp+70h] [rbp-19h]
  int v61; // [rsp+78h] [rbp-11h]
  __int64 v62; // [rsp+7Ch] [rbp-Dh]
  __int128 v63; // [rsp+90h] [rbp+7h] BYREF
  __int64 v64; // [rsp+A0h] [rbp+17h]
  void *retaddr; // [rsp+E8h] [rbp+5Fh]

  v6 = 0;
  if ( !*((_BYTE *)this + 132) )
  {
    v15 = *((_QWORD *)this + 3);
    if ( GetCurrentThreadId() == *(_DWORD *)(v15 + 5712) )
    {
      if ( (*((_BYTE *)this + 40) & 1) != 0 )
      {
        v16 = 1;
        ShapeDataWorker = CGeometry::GetShapeDataWorker(this, a2, (CGeometry *)((char *)this + 88));
        v6 = ShapeDataWorker;
        if ( ShapeDataWorker < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeDataWorker, 0xAAu, 0LL);
          return v6;
        }
        *((_DWORD *)this + 10) &= ~1u;
      }
      else
      {
        v16 = 0;
      }
      if ( *((_BYTE *)this + 133) )
      {
        if ( v16 || *((_BYTE *)this + 134) || !*((_QWORD *)this + 13) )
        {
          TrimmedShapeData = CGeometry::GetTrimmedShapeData(
                               this,
                               (CGeometry *)((char *)this + 88),
                               (CGeometry *)((char *)this + 104));
          v6 = TrimmedShapeData;
          if ( TrimmedShapeData < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TrimmedShapeData, 0xB2u, 0LL);
            return v6;
          }
          *((_BYTE *)this + 134) = 0;
        }
        v55 = *((_QWORD *)this + 13);
        CShapePtr::~CShapePtr(a3);
        *(_QWORD *)a3 = v55;
        *((_BYTE *)a3 + 8) = 0;
      }
      else
      {
        v17 = *((_QWORD *)this + 11);
        if ( *((_BYTE *)a3 + 8) )
        {
          v18 = *(void *(__fastcall ****)(CRoundedRectangleShape *__hidden, unsigned int))a3;
          if ( *(_QWORD *)a3 )
          {
            v19 = *(CRectanglesShape **)a3;
            v20 = **v18;
            if ( v20 == CRectanglesShape::`scalar deleting destructor' )
            {
              CRectanglesShape::~CRectanglesShape(v19);
              CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v18);
            }
            else
            {
              if ( v20 == CRoundedRectangleShape::`vector deleting destructor' )
              {
                CRoundedRectangleShape::~CRoundedRectangleShape(v19);
                CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v18);
                *(_QWORD *)a3 = v17;
                *((_BYTE *)a3 + 8) = 0;
                return v6;
              }
              if ( v20 == CPolygonShape::`scalar deleting destructor' )
              {
                CPolygonShape::`scalar deleting destructor'(v19, 1u);
                *(_QWORD *)a3 = v17;
                *((_BYTE *)a3 + 8) = 0;
                return v6;
              }
              (**v18)(v19, 1u);
            }
          }
        }
        *(_QWORD *)a3 = v17;
        *((_BYTE *)a3 + 8) = 0;
      }
      return v6;
    }
  }
  v7 = *((_BYTE *)this + 132);
  if ( v7 || (*((_BYTE *)this + 40) & 1) != 0 || (v21 = *((_QWORD *)this + 11)) == 0 )
  {
    v8 = 0LL;
    if ( v7 )
      v8 = a2;
    v9 = *(__int64 (__fastcall **)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)this + 216LL);
    if ( v9 == CRectangleGeometry::GetShapeDataCore )
    {
      ShapeDataCore = CRectangleGeometry::GetShapeDataCore(this, v8, a3);
    }
    else if ( v9 == CRegionGeometry::GetShapeDataCore )
    {
      ShapeDataCore = CRegionGeometry::GetShapeDataCore(this, v8, a3);
    }
    else if ( v9 == CPathGeometry::GetShapeDataCore )
    {
      ShapeDataCore = CPathGeometry::GetShapeDataCore(this, v8, a3);
    }
    else
    {
      ShapeDataCore = v9(this, v8, a3);
    }
    v11 = ShapeDataCore;
    v6 = ShapeDataCore;
    if ( ShapeDataCore < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeDataCore, 0xFAu, 0LL);
      goto LABEL_16;
    }
    v12 = *(bool (__fastcall **)(CGeometry *__hidden))(*(_QWORD *)this + 232LL);
    if ( v12 == CProxyGeometry::HasTransform )
    {
      if ( !CGeometry::HasTransform(this) && !*((_QWORD *)this + 18) )
        goto LABEL_11;
    }
    else
    {
      if ( v12 == CGeometry::HasTransform )
        HasTransform = CGeometry::HasTransform(this);
      else
        HasTransform = v12(this);
      if ( !HasTransform )
      {
LABEL_11:
        v6 = v11;
        if ( v11 >= 0 )
        {
          if ( *((_BYTE *)this + 133) )
          {
            v13 = CGeometry::GetTrimmedShapeData(this, a3, a3);
            v6 = v13;
            if ( v13 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xCAu, 0LL);
          }
          return v6;
        }
LABEL_16:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC6u, 0LL);
        return v6;
      }
    }
    v63 = 0LL;
    v64 = 0LL;
    if ( !*(_QWORD *)a3 )
      goto LABEL_11;
    (*(void (__fastcall **)(CGeometry *, const struct D2D_SIZE_F *, __int128 *))(*(_QWORD *)this + 224LL))(
      this,
      v8,
      &v63);
    v32 = *(CShape **)a3;
    v58[0] = v63;
    v62 = 0x28083F800000LL;
    v59 = _xmm;
    v58[2] = *((_QWORD *)&v63 + 1);
    v60 = v64;
    v58[1] = 0LL;
    v58[3] = 0LL;
    v61 = 0;
    v57 = 0LL;
    v33 = CShape::CopyShape(v32, (const struct CMILMatrix *)v58, &v57);
    v11 = v33;
    v6 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x108u, 0LL);
      goto LABEL_16;
    }
    if ( *((_BYTE *)a3 + 8) )
    {
      v34 = *(char **)a3;
      if ( *(_QWORD *)a3 )
      {
        v35 = **(void *(__fastcall ***)(CRoundedRectangleShape *__hidden, unsigned int))v34;
        if ( v35 == CRectanglesShape::`scalar deleting destructor' )
        {
          *(_QWORD *)v34 = &CRectanglesShape::`vftable';
          v36 = (__int64)(*((_QWORD *)v34 + 3) - *((_QWORD *)v34 + 2)) >> 4;
          if ( v36 )
            *((_QWORD *)v34 + 3) -= 16 * v36;
          v37 = (CResource *)*((_QWORD *)v34 + 7);
          if ( v37 )
          {
            if ( *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v37 + 16LL) == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
              CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v37);
            else
              (*(void (__fastcall **)(CResource *))(*(_QWORD *)v37 + 16LL))(v37);
            *((_QWORD *)v34 + 7) = 0LL;
          }
          v38 = (char *)*((_QWORD *)v34 + 2);
          v39 = (__int64)(*((_QWORD *)v34 + 3) - (_QWORD)v38) >> 4;
          if ( v39 )
            *((_QWORD *)v34 + 3) -= 16 * v39;
          *((_QWORD *)v34 + 2) = 0LL;
          if ( v38 == v34 + 40 )
            v38 = 0LL;
          if ( v38 )
          {
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, v38);
          }
          v40 = (CPathData *)*((_QWORD *)v34 + 1);
          if ( v40 )
          {
            *((_QWORD *)v34 + 1) = 0LL;
            if ( *(__int64 (__fastcall **)(CPathData *))(*(_QWORD *)v40 + 16LL) == CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
              CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v40);
            else
              (*(void (__fastcall **)(CPathData *))(*(_QWORD *)v40 + 16LL))(v40);
          }
          Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
          if ( !Value )
          {
            v51 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
            if ( !v51 || (v52 = CThreadContext::CThreadContext(v51), (Value = v52) == 0LL) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
              ModuleFailFastForHRESULT(-2147024882, retaddr);
            }
            TlsSetValue(CThreadContext::s_dwTlsIndex, v52);
          }
          if ( *((_DWORD *)Value + 13) < *((_DWORD *)Value + 12) )
          {
            *(_QWORD *)v34 = Value[7];
            ++*((_DWORD *)Value + 13);
            v47 = v57;
            Value[7] = v34;
            *(_QWORD *)a3 = v47;
            *((_BYTE *)a3 + 8) = 1;
            goto LABEL_11;
          }
          v42 = GetProcessHeap();
          HeapFree(v42, 0, v34);
        }
        else
        {
          v46 = *(CRoundedRectangleShape **)a3;
          if ( v35 == CRoundedRectangleShape::`vector deleting destructor' )
          {
            CRoundedRectangleShape::~CRoundedRectangleShape(v46);
            CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v34);
            *(_QWORD *)a3 = v57;
            *((_BYTE *)a3 + 8) = 1;
            goto LABEL_11;
          }
          if ( v35 == CPolygonShape::`scalar deleting destructor' )
          {
            CPolygonShape::`scalar deleting destructor'(v46, 1u);
            *(_QWORD *)a3 = v57;
            *((_BYTE *)a3 + 8) = 1;
            goto LABEL_11;
          }
          (**(void (__fastcall ***)(CRoundedRectangleShape *, __int64))v34)(v46, 1LL);
        }
      }
    }
    *(_QWORD *)a3 = v57;
    *((_BYTE *)a3 + 8) = 1;
    goto LABEL_11;
  }
  if ( *((_BYTE *)this + 133) )
  {
    if ( *((_BYTE *)this + 134) || !*((_QWORD *)this + 13) )
    {
      v56 = CGeometry::GetTrimmedShapeData(this, (CGeometry *)((char *)this + 88), a3);
      v6 = v56;
      if ( v56 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0xD3u, 0LL);
    }
    else
    {
      v53 = *((_QWORD *)this + 13);
      CShapePtr::~CShapePtr(a3);
      *(_QWORD *)a3 = v53;
      *((_BYTE *)a3 + 8) = 0;
    }
  }
  else
  {
    if ( *((_BYTE *)a3 + 8) )
    {
      v22 = *(char **)a3;
      if ( *(_QWORD *)a3 )
      {
        v23 = **(void *(__fastcall ***)(CRoundedRectangleShape *__hidden, unsigned int))v22;
        if ( v23 == CRectanglesShape::`scalar deleting destructor' )
        {
          *(_QWORD *)v22 = &CRectanglesShape::`vftable';
          v24 = (__int64)(*((_QWORD *)v22 + 3) - *((_QWORD *)v22 + 2)) >> 4;
          if ( v24 )
            *((_QWORD *)v22 + 3) -= 16 * v24;
          v25 = (CResource *)*((_QWORD *)v22 + 7);
          if ( v25 )
          {
            if ( *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v25 + 16LL) == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
              CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v25);
            else
              (*(void (__fastcall **)(CResource *))(*(_QWORD *)v25 + 16LL))(v25);
            *((_QWORD *)v22 + 7) = 0LL;
          }
          v26 = (char *)*((_QWORD *)v22 + 2);
          v27 = (__int64)(*((_QWORD *)v22 + 3) - (_QWORD)v26) >> 4;
          if ( v27 )
            *((_QWORD *)v22 + 3) -= 16 * v27;
          *((_QWORD *)v22 + 2) = 0LL;
          if ( v26 == v22 + 40 )
            v26 = 0LL;
          if ( v26 )
          {
            v43 = GetProcessHeap();
            HeapFree(v43, 0, v26);
          }
          v28 = (CPathData *)*((_QWORD *)v22 + 1);
          if ( v28 )
          {
            *((_QWORD *)v22 + 1) = 0LL;
            if ( *(__int64 (__fastcall **)(CPathData *))(*(_QWORD *)v28 + 16LL) == CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
              CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v28);
            else
              (*(void (__fastcall **)(CPathData *))(*(_QWORD *)v28 + 16LL))(v28);
          }
          v29 = TlsGetValue(CThreadContext::s_dwTlsIndex);
          if ( !v29 )
          {
            v48 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
            if ( !v48 || (v49 = CThreadContext::CThreadContext(v48), (v29 = v49) == 0LL) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
              ModuleFailFastForHRESULT(-2147024882, retaddr);
            }
            TlsSetValue(CThreadContext::s_dwTlsIndex, v49);
          }
          if ( *((_DWORD *)v29 + 13) < *((_DWORD *)v29 + 12) )
          {
            *(_QWORD *)v22 = v29[7];
            ++*((_DWORD *)v29 + 13);
            v29[7] = v22;
            *(_QWORD *)a3 = v21;
            *((_BYTE *)a3 + 8) = 0;
            return v6;
          }
          v30 = GetProcessHeap();
          HeapFree(v30, 0, v22);
        }
        else
        {
          v44 = *(CRoundedRectangleShape **)a3;
          if ( v23 == CRoundedRectangleShape::`vector deleting destructor' )
          {
            CRoundedRectangleShape::~CRoundedRectangleShape(v44);
            CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v22);
            *(_QWORD *)a3 = v21;
            *((_BYTE *)a3 + 8) = 0;
            return v6;
          }
          if ( v23 == CPolygonShape::`scalar deleting destructor' )
          {
            CPolygonShape::`scalar deleting destructor'(v44, 1u);
            *(_QWORD *)a3 = v21;
            *((_BYTE *)a3 + 8) = 0;
            return v6;
          }
          (**(void (__fastcall ***)(CRoundedRectangleShape *, __int64))v22)(v44, 1LL);
        }
      }
    }
    *(_QWORD *)a3 = v21;
    *((_BYTE *)a3 + 8) = 0;
  }
  return v6;
}
