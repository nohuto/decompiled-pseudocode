/*
 * XREFs of ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C4750
 * Callers:
 *     ?GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x1800165D0 (-GetSpriteClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180016810 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x1800344E0 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038420 (-CalcRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x1800ABE30 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800C1560 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessVisualsWorldTransformAndClip@CPreComputeContext@@AEAAJPEAVCVisual@@0PEAVSubTreeContext@1@PEAVCMILMatrix@@@Z @ 0x1800C28B0 (-ProcessVisualsWorldTransformAndClip@CPreComputeContext@@AEAAJPEAVCVisual@@0PEAVSubTreeContext@1.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C3BF0 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x1800C3EE0 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?CheckClipAllowsOcclusion@COcclusionContext@@AEBAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEA_N@Z @ 0x1800C59D0 (-CheckClipAllowsOcclusion@COcclusionContext@@AEBAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800FF480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18013BB14 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18013F440 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x180142FF0 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x18014BD2C (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014BF30 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1801C9A10 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?GetFlipExSurfaceClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801E66E8 (-GetFlipExSurfaceClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FCE2C (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_.c)
 *     ?GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1802078C0 (-GetShapeDataCore@CProxyGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18020E990 (-GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?PushClipInternal@COcclusionContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@AEBVCMILMatrix@@@Z @ 0x180234810 (-PushClipInternal@COcclusionContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@AEBVCMILMatrix@@@Z.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1802375F0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x18028F2E8 (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18029BF80 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18000F570 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x180078EC0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x180078FD0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800790C0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x180079260 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C42D0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C50B0 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1801449F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataCore@CPathGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18017CE60 (-GetShapeDataCore@CPathGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z @ 0x18017D04C (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z.c)
 *     ?GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801E9D10 (-GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?HasTransform@CGeometry@@MEBA_NXZ @ 0x18022CA20 (-HasTransform@CGeometry@@MEBA_NXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry::GetShapeData(CGeometry *this, const struct D2D_SIZE_F *a2, CRectanglesShape **a3)
{
  unsigned int v6; // esi
  char v7; // al
  const struct D2D_SIZE_F *v8; // r12
  int (*v9)(CRegionGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *); // rax
  int ShapeDataCore; // eax
  int v11; // ebx
  bool (__fastcall *v12)(CGeometry *__hidden); // rax
  int v13; // eax
  __int64 v15; // rbx
  char v16; // bl
  CRectanglesShape *v17; // rdi
  CRectanglesShape *v18; // rbx
  CRectanglesShape *v19; // rcx
  CRoundedRectangleShape *(__fastcall *v20)(CRoundedRectangleShape *, char); // r8
  CRectanglesShape *v21; // r12
  CRectanglesShape *v22; // rbx
  CRoundedRectangleShape *(__fastcall *v23)(CRoundedRectangleShape *, char); // r8
  __int64 v24; // rax
  CCachedVisualImage *v25; // rcx
  __int64 (__fastcall *v26)(CCachedVisualImage *, __int64, __int64); // rdx
  char *v27; // rdi
  __int64 v28; // rax
  CPathData *v29; // rcx
  _QWORD *v30; // rdi
  HANDLE v31; // rax
  bool HasTransform; // al
  CShape *v33; // rcx
  int v34; // eax
  CRectanglesShape *v35; // rsi
  CRoundedRectangleShape *(__fastcall *v36)(CRoundedRectangleShape *, char); // r8
  __int64 v37; // rax
  CCachedVisualImage *v38; // rcx
  __int64 (__fastcall *v39)(CCachedVisualImage *, __int64, __int64); // rdx
  char *v40; // r15
  __int64 v41; // rax
  CPathData *v42; // rcx
  _QWORD *Value; // r15
  HANDLE v44; // rax
  HANDLE v45; // rax
  CRoundedRectangleShape *v46; // rcx
  HANDLE ProcessHeap; // rax
  CRoundedRectangleShape *v48; // rcx
  struct CShape *v49; // rax
  CThreadContext *v50; // rax
  CThreadContext *v51; // rax
  int ShapeDataWorker; // eax
  CThreadContext *v53; // rax
  CThreadContext *v54; // rax
  CRectanglesShape *v55; // rbx
  int TrimmedShapeData; // eax
  CRectanglesShape *v57; // rdi
  int v58; // eax
  struct CShape *v59; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v60[4]; // [rsp+40h] [rbp-49h] BYREF
  __int128 v61; // [rsp+60h] [rbp-29h]
  __int64 v62; // [rsp+70h] [rbp-19h]
  int v63; // [rsp+78h] [rbp-11h]
  __int64 v64; // [rsp+7Ch] [rbp-Dh]
  __int128 v65; // [rsp+90h] [rbp+7h] BYREF
  __int64 v66; // [rsp+A0h] [rbp+17h]
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
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShapeDataWorker, 0xAAu, 0LL);
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
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, TrimmedShapeData, 0xB2u, 0LL);
            return v6;
          }
          *((_BYTE *)this + 134) = 0;
        }
        v57 = (CRectanglesShape *)*((_QWORD *)this + 13);
        CShapePtr::~CShapePtr(a3);
        *a3 = v57;
        *((_BYTE *)a3 + 8) = 0;
      }
      else
      {
        v17 = (CRectanglesShape *)*((_QWORD *)this + 11);
        if ( *((_BYTE *)a3 + 8) )
        {
          v18 = *a3;
          if ( *a3 )
          {
            v19 = *a3;
            v20 = **(CRoundedRectangleShape *(__fastcall ***)(CRoundedRectangleShape *, char))v18;
            if ( (char *)v20 == (char *)CRectanglesShape::`scalar deleting destructor' )
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
                *a3 = v17;
                *((_BYTE *)a3 + 8) = 0;
                return v6;
              }
              if ( v20 == CPolygonShape::`scalar deleting destructor' )
              {
                CPolygonShape::`scalar deleting destructor'(v19, 1);
                *a3 = v17;
                *((_BYTE *)a3 + 8) = 0;
                return v6;
              }
              (**(void (__fastcall ***)(CRectanglesShape *, __int64))v18)(v19, 1LL);
            }
          }
        }
        *a3 = v17;
        *((_BYTE *)a3 + 8) = 0;
      }
      return v6;
    }
  }
  v7 = *((_BYTE *)this + 132);
  if ( v7 || (*((_BYTE *)this + 40) & 1) != 0 || (v21 = (CRectanglesShape *)*((_QWORD *)this + 11)) == 0LL )
  {
    v8 = 0LL;
    if ( v7 )
      v8 = a2;
    v9 = *(int (**)(CRegionGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)this + 216LL);
    if ( (char *)v9 == (char *)CRectangleGeometry::GetShapeDataCore )
    {
      ShapeDataCore = CRectangleGeometry::GetShapeDataCore(this, v8, (struct CShapePtr *)a3);
    }
    else if ( v9 == CRegionGeometry::GetShapeDataCore )
    {
      ShapeDataCore = CRegionGeometry::GetShapeDataCore(this, v8, (struct CShapePtr *)a3);
    }
    else if ( v9 == CPathGeometry::GetShapeDataCore )
    {
      ShapeDataCore = CPathGeometry::GetShapeDataCore(this, v8, (struct CShapePtr *)a3);
    }
    else
    {
      ShapeDataCore = ((__int64 (__fastcall *)(CGeometry *, const struct D2D_SIZE_F *, CRectanglesShape **))v9)(
                        this,
                        v8,
                        a3);
    }
    v11 = ShapeDataCore;
    v6 = ShapeDataCore;
    if ( ShapeDataCore < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShapeDataCore, 0xFAu, 0LL);
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
            v13 = CGeometry::GetTrimmedShapeData(this, (const struct CShapePtr *)a3, (struct CShapePtr *)a3);
            v6 = v13;
            if ( v13 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0xCAu, 0LL);
          }
          return v6;
        }
LABEL_16:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xC6u, 0LL);
        return v6;
      }
    }
    v65 = 0LL;
    v66 = 0LL;
    if ( !*a3 )
      goto LABEL_11;
    (*(void (__fastcall **)(CGeometry *, const struct D2D_SIZE_F *, __int128 *))(*(_QWORD *)this + 224LL))(
      this,
      v8,
      &v65);
    v33 = *a3;
    v60[0] = v65;
    v64 = 0x28083F800000LL;
    v61 = _xmm;
    v60[2] = *((_QWORD *)&v65 + 1);
    v62 = v66;
    v60[1] = 0LL;
    v60[3] = 0LL;
    v63 = 0;
    v59 = 0LL;
    v34 = CShape::CopyShape(v33, (const struct CMILMatrix *)v60, &v59);
    v11 = v34;
    v6 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0x108u, 0LL);
      goto LABEL_16;
    }
    if ( *((_BYTE *)a3 + 8) )
    {
      v35 = *a3;
      if ( *a3 )
      {
        v36 = **(CRoundedRectangleShape *(__fastcall ***)(CRoundedRectangleShape *, char))v35;
        if ( (char *)v36 == (char *)CRectanglesShape::`scalar deleting destructor' )
        {
          *(_QWORD *)v35 = &CRectanglesShape::`vftable';
          v37 = (__int64)(*((_QWORD *)v35 + 3) - *((_QWORD *)v35 + 2)) >> 4;
          if ( v37 )
            *((_QWORD *)v35 + 3) -= 16 * v37;
          v38 = (CCachedVisualImage *)*((_QWORD *)v35 + 7);
          if ( v38 )
          {
            v39 = *(__int64 (__fastcall **)(CCachedVisualImage *, __int64, __int64))(*(_QWORD *)v38 + 16LL);
            if ( v39 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
              CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v38, (__int64)v39, (__int64)v36);
            else
              (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v38 + 16LL))(v38);
            *((_QWORD *)v35 + 7) = 0LL;
          }
          v40 = (char *)*((_QWORD *)v35 + 2);
          v41 = (__int64)(*((_QWORD *)v35 + 3) - (_QWORD)v40) >> 4;
          if ( v41 )
            *((_QWORD *)v35 + 3) -= 16 * v41;
          *((_QWORD *)v35 + 2) = 0LL;
          if ( v40 == (char *)v35 + 40 )
            v40 = 0LL;
          if ( v40 )
          {
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, v40);
          }
          v42 = (CPathData *)*((_QWORD *)v35 + 1);
          if ( v42 )
          {
            *((_QWORD *)v35 + 1) = 0LL;
            if ( *(__int64 (__fastcall **)(CPathData *))(*(_QWORD *)v42 + 16LL) == CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
              CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v42);
            else
              (*(void (__fastcall **)(CPathData *))(*(_QWORD *)v42 + 16LL))(v42);
          }
          Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
          if ( !Value )
          {
            v53 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
            if ( !v53 || (v54 = CThreadContext::CThreadContext(v53), (Value = v54) == 0LL) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
              ModuleFailFastForHRESULT(-2147024882, retaddr);
            }
            TlsSetValue(CThreadContext::s_dwTlsIndex, v54);
          }
          if ( *((_DWORD *)Value + 13) < *((_DWORD *)Value + 12) )
          {
            *(_QWORD *)v35 = Value[7];
            ++*((_DWORD *)Value + 13);
            v49 = v59;
            Value[7] = v35;
            *a3 = v49;
            *((_BYTE *)a3 + 8) = 1;
            goto LABEL_11;
          }
          v44 = GetProcessHeap();
          HeapFree(v44, 0, v35);
        }
        else
        {
          v48 = *a3;
          if ( v36 == CRoundedRectangleShape::`vector deleting destructor' )
          {
            CRoundedRectangleShape::~CRoundedRectangleShape(v48);
            CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v35);
            *a3 = v59;
            *((_BYTE *)a3 + 8) = 1;
            goto LABEL_11;
          }
          if ( v36 == CPolygonShape::`scalar deleting destructor' )
          {
            CPolygonShape::`scalar deleting destructor'(v48, 1);
            *a3 = v59;
            *((_BYTE *)a3 + 8) = 1;
            goto LABEL_11;
          }
          (**(void (__fastcall ***)(CRoundedRectangleShape *, __int64))v35)(v48, 1LL);
        }
      }
    }
    *a3 = v59;
    *((_BYTE *)a3 + 8) = 1;
    goto LABEL_11;
  }
  if ( *((_BYTE *)this + 133) )
  {
    if ( *((_BYTE *)this + 134) || !*((_QWORD *)this + 13) )
    {
      v58 = CGeometry::GetTrimmedShapeData(this, (CGeometry *)((char *)this + 88), (struct CShapePtr *)a3);
      v6 = v58;
      if ( v58 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v58, 0xD3u, 0LL);
    }
    else
    {
      v55 = (CRectanglesShape *)*((_QWORD *)this + 13);
      CShapePtr::~CShapePtr(a3);
      *a3 = v55;
      *((_BYTE *)a3 + 8) = 0;
    }
  }
  else
  {
    if ( *((_BYTE *)a3 + 8) )
    {
      v22 = *a3;
      if ( *a3 )
      {
        v23 = **(CRoundedRectangleShape *(__fastcall ***)(CRoundedRectangleShape *, char))v22;
        if ( (char *)v23 == (char *)CRectanglesShape::`scalar deleting destructor' )
        {
          *(_QWORD *)v22 = &CRectanglesShape::`vftable';
          v24 = (__int64)(*((_QWORD *)v22 + 3) - *((_QWORD *)v22 + 2)) >> 4;
          if ( v24 )
            *((_QWORD *)v22 + 3) -= 16 * v24;
          v25 = (CCachedVisualImage *)*((_QWORD *)v22 + 7);
          if ( v25 )
          {
            v26 = *(__int64 (__fastcall **)(CCachedVisualImage *, __int64, __int64))(*(_QWORD *)v25 + 16LL);
            if ( v26 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
              CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v25, (__int64)v26, (__int64)v23);
            else
              (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v25 + 16LL))(v25);
            *((_QWORD *)v22 + 7) = 0LL;
          }
          v27 = (char *)*((_QWORD *)v22 + 2);
          v28 = (__int64)(*((_QWORD *)v22 + 3) - (_QWORD)v27) >> 4;
          if ( v28 )
            *((_QWORD *)v22 + 3) -= 16 * v28;
          *((_QWORD *)v22 + 2) = 0LL;
          if ( v27 == (char *)v22 + 40 )
            v27 = 0LL;
          if ( v27 )
          {
            v45 = GetProcessHeap();
            HeapFree(v45, 0, v27);
          }
          v29 = (CPathData *)*((_QWORD *)v22 + 1);
          if ( v29 )
          {
            *((_QWORD *)v22 + 1) = 0LL;
            if ( *(__int64 (__fastcall **)(CPathData *))(*(_QWORD *)v29 + 16LL) == CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
              CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v29);
            else
              (*(void (__fastcall **)(CPathData *))(*(_QWORD *)v29 + 16LL))(v29);
          }
          v30 = TlsGetValue(CThreadContext::s_dwTlsIndex);
          if ( !v30 )
          {
            v50 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
            if ( !v50 || (v51 = CThreadContext::CThreadContext(v50), (v30 = v51) == 0LL) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
              ModuleFailFastForHRESULT(-2147024882, retaddr);
            }
            TlsSetValue(CThreadContext::s_dwTlsIndex, v51);
          }
          if ( *((_DWORD *)v30 + 13) < *((_DWORD *)v30 + 12) )
          {
            *(_QWORD *)v22 = v30[7];
            ++*((_DWORD *)v30 + 13);
            v30[7] = v22;
            *a3 = v21;
            *((_BYTE *)a3 + 8) = 0;
            return v6;
          }
          v31 = GetProcessHeap();
          HeapFree(v31, 0, v22);
        }
        else
        {
          v46 = *a3;
          if ( v23 == CRoundedRectangleShape::`vector deleting destructor' )
          {
            CRoundedRectangleShape::~CRoundedRectangleShape(v46);
            CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v22);
            *a3 = v21;
            *((_BYTE *)a3 + 8) = 0;
            return v6;
          }
          if ( v23 == CPolygonShape::`scalar deleting destructor' )
          {
            CPolygonShape::`scalar deleting destructor'(v46, 1);
            *a3 = v21;
            *((_BYTE *)a3 + 8) = 0;
            return v6;
          }
          (**(void (__fastcall ***)(CRoundedRectangleShape *, __int64))v22)(v46, 1LL);
        }
      }
    }
    *a3 = v21;
    *((_BYTE *)a3 + 8) = 0;
  }
  return v6;
}
