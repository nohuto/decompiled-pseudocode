/*
 * XREFs of ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18000F914
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18000E560 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800583D0 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058F30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800DEA78 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01PEAPEAVCRenderingEffect@@@Z @ 0x180128BA0 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01.c)
 *     ?reset@?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801749A0 (-reset@-$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ @ 0x1801BF190 (-IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ.c)
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2D_RECT_F@@@Z @ 0x1801ECF34 (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2.c)
 *     ?GetOpacity@CLegacyMilBrush@@KAMMPEAVCFloatResource@@@Z @ 0x1801ED728 (-GetOpacity@CLegacyMilBrush@@KAMMPEAVCFloatResource@@@Z.c)
 *     ?ReducesToFillImage@CImageLegacyMilBrush@@QEBA_NXZ @ 0x180205384 (-ReducesToFillImage@CImageLegacyMilBrush@@QEBA_NXZ.c)
 *     ?GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z @ 0x180206288 (-GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawImageResource_TileMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@MAEBUD2D_POINT_2F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18024E4B0 (-DrawImageResource_TileMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAV.c)
 *     ?DrawImageResource_FillMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x18024E820 (-DrawImageResource_FillMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAV.c)
 *     ?DrawSolidColorRectangle@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z @ 0x18024FB5C (-DrawSolidColorRectangle@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2D.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1802ACDF0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderData::TryDrawCommandAsDrawList(
        __int64 a1,
        struct CDrawingContext *a2,
        __int64 a3,
        struct CDrawListEntryBuilder *a4,
        int a5,
        __int64 a6,
        _BYTE *a7)
{
  unsigned int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  struct CImageSource *v15; // r14
  int v16; // eax
  int v17; // eax
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  struct CFloatResource *v25; // rdx
  struct _D3DCOLORVALUE v26; // xmm1
  float v27; // xmm0_4
  float v28; // xmm0_4
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 (__fastcall *v36)(__int64 *, __int64 (__fastcall ***)()); // rax
  __int64 (__fastcall ***v37)(); // rdx
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rcx
  struct CImageSource *v42; // rdi
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rdx
  CSolidColorLegacyMilBrush *v46; // r14
  CRectangleGeometry *v47; // rdi
  int RealizedColor; // eax
  __int64 v49; // rsi
  __int64 v50; // r14
  __int64 v51; // rdi
  __int64 i; // rax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int ShapeData; // eax
  const struct D2D_RECT_F *v57; // rdi
  const struct D2D_RECT_F *v58; // rsi
  int v59; // eax
  __int64 v60; // rdx
  int BoundsSafe; // eax
  struct CFloatResource *v62; // rdx
  float Opacity; // xmm0_4
  const struct D2D_RECT_F *v64; // r9
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rax
  struct CImageSource *v68; // rdi
  int v69; // eax
  _DWORD v70[4]; // [rsp+30h] [rbp-A1h] BYREF
  __int16 v71; // [rsp+40h] [rbp-91h] BYREF
  char v72; // [rsp+42h] [rbp-8Fh]
  struct D2D_RECT_F v73; // [rsp+50h] [rbp-81h] BYREF
  struct D2D_RECT_F v74; // [rsp+60h] [rbp-71h] BYREF
  __int64 v75; // [rsp+70h] [rbp-61h]
  struct _D3DCOLORVALUE v76; // [rsp+78h] [rbp-59h] BYREF
  __int64 v77; // [rsp+88h] [rbp-49h]
  __int64 (__fastcall **v78)(); // [rsp+90h] [rbp-41h] BYREF
  __int128 v79; // [rsp+98h] [rbp-39h]
  __int64 (__fastcall ***v80)(); // [rsp+C8h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+47h]

  *a7 = 0;
  v11 = 0;
  switch ( a5 )
  {
    case 419:
      v66 = *(unsigned int *)(*(_QWORD *)(a6 + 8) + 4LL);
      v67 = *(_QWORD *)(a1 + 136);
      v68 = *(struct CImageSource **)(v67 + 8 * v66);
      if ( v68 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v68 + 64LL))(
               *(_QWORD *)(v67 + 8 * v66),
               84LL) )
        {
          if ( !*(_QWORD *)(a3 + 24) )
          {
            v69 = CRenderData::DrawImageResource_FillMode(a2, a4, v68, 0LL, 0LL, 1.0);
            v11 = v69;
            if ( v69 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, 0x27Du, 0LL);
              return v11;
            }
          }
        }
      }
      goto LABEL_45;
    case 420:
      v44 = *(_QWORD *)(a6 + 8);
      v45 = *(_QWORD *)(a1 + 136);
      v46 = *(CSolidColorLegacyMilBrush **)(v45 + 8LL * *(unsigned int *)(v44 + 4));
      v47 = *(CRectangleGeometry **)(v45 + 8LL * *(unsigned int *)(v44 + 8));
      if ( !v46 || !v47 )
        goto LABEL_45;
      if ( !(*(unsigned __int8 (__fastcall **)(CSolidColorLegacyMilBrush *, __int64))(*(_QWORD *)v46 + 64LL))(
              v46,
              162LL) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(CSolidColorLegacyMilBrush *, __int64))(*(_QWORD *)v46 + 64LL))(
               v46,
               83LL) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v47 + 64LL))(v47, 126LL) )
          {
            *(_QWORD *)&v73.left = *((_QWORD *)v46 + 24);
            if ( !CRectangleGeometry::IsRoundedRectangleGeometry(v47) && !*(_QWORD *)(a3 + 24) && v60 )
            {
              *(struct _D3DCOLORVALUE *)&v76.r = 0LL;
              BoundsSafe = CGeometry::GetBoundsSafe(v47, 0LL, &v76);
              v11 = BoundsSafe;
              if ( BoundsSafe < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BoundsSafe, 0x2DAu, 0LL);
                return v11;
              }
              v62 = (struct CFloatResource *)*((_QWORD *)v46 + 10);
              v74 = *(struct D2D_RECT_F *)&v76.r;
              Opacity = CLegacyMilBrush::GetOpacity(*((float *)v46 + 18), v62);
              v65 = CRenderData::DrawImageResource_FillMode(
                      a2,
                      a4,
                      *(struct CImageSource **)&v73.left,
                      v64,
                      &v74,
                      Opacity);
              v11 = v65;
              if ( v65 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v65, 0x2F8u, 0LL);
                return v11;
              }
            }
          }
        }
        goto LABEL_45;
      }
      *(struct _D3DCOLORVALUE *)&v76.r = 0LL;
      RealizedColor = CSolidColorLegacyMilBrush::GetRealizedColor(v46, &v76);
      v11 = RealizedColor;
      if ( RealizedColor < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RealizedColor, 0x292u, 0LL);
        return v11;
      }
      if ( (*(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v47 + 64LL))(v47, 129LL) )
      {
        if ( *(_QWORD *)(a3 + 24) )
          goto LABEL_45;
        v49 = *((_QWORD *)v47 + 17);
        v50 = *((_QWORD *)v47 + 18);
        if ( v49 == v50 )
          goto LABEL_45;
        v51 = *((_QWORD *)v47 + 17);
        while ( 1 )
        {
          for ( i = 0LL; i < 4; ++i )
            *(&v74.left + i) = (float)*(int *)(v51 + 4 * i);
          v53 = CRenderData::DrawSolidColorRectangle(a2, a4, &v74, &v76);
          v11 = v53;
          if ( v53 < 0 )
            break;
          v49 += 16LL;
          v51 += 16LL;
          if ( v49 == v50 )
            goto LABEL_45;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x29Eu, 0LL);
        return v11;
      }
      if ( (*(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v47 + 64LL))(v47, 126LL) )
      {
        if ( !CRectangleGeometry::IsRoundedRectangleGeometry(v47) && !*(_QWORD *)(a3 + 24) )
        {
          v73 = 0LL;
          v54 = CGeometry::GetBoundsSafe(v47, 0LL, &v73);
          v11 = v54;
          if ( v54 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0x2ABu, 0LL);
            return v11;
          }
          v55 = CRenderData::DrawSolidColorRectangle(a2, a4, &v73, &v76);
          v11 = v55;
          if ( v55 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0x2ACu, 0LL);
            return v11;
          }
        }
        goto LABEL_45;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v47 + 64LL))(v47, 27LL) )
      {
LABEL_45:
        *a7 = 1;
        return v11;
      }
      *(_QWORD *)&v73.left = 0LL;
      LOBYTE(v73.right) = 0;
      v70[0] = 0;
      ShapeData = CGeometry::GetShapeData(v47, 0LL, (struct CShapePtr *)&v73);
      v11 = ShapeData;
      if ( ShapeData < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0x2B6u, 0LL);
LABEL_95:
        CShapePtr::~CShapePtr((CShapePtr *)&v73);
        return v11;
      }
      if ( *(_QWORD *)&v73.left
        && (*(unsigned __int8 (__fastcall **)(_QWORD, _DWORD *))(**(_QWORD **)&v73.left + 64LL))(
             *(_QWORD *)&v73.left,
             v70)
        && !*(_QWORD *)(a3 + 24) )
      {
        v75 = 0LL;
        v74 = 0LL;
        if ( v70[0] )
          std::vector<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>>::_Resize_reallocate<std::_Value_init_tag>(
            &v74,
            v70[0]);
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&v73.left + 80LL))(
                *(_QWORD *)&v73.left,
                *(_QWORD *)&v74.left) )
        {
          v11 = -2003304309;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304309, 0x2C3u, 0LL);
LABEL_84:
          if ( *(_QWORD *)&v74.left )
          {
            std::_Deallocate<16,0>(*(_QWORD *)&v74.left, (v75 - *(_QWORD *)&v74.left) & 0xFFFFFFFFFFFFFFF0uLL);
            v75 = 0LL;
            v74 = 0LL;
          }
          goto LABEL_95;
        }
        v57 = *(const struct D2D_RECT_F **)&v74.left;
        v58 = *(const struct D2D_RECT_F **)&v74.right;
        if ( *(_QWORD *)&v74.left != *(_QWORD *)&v74.right )
        {
          while ( 1 )
          {
            v59 = CRenderData::DrawSolidColorRectangle(a2, a4, v57, &v76);
            v11 = v59;
            if ( v59 < 0 )
              break;
            if ( ++v57 == v58 )
            {
              v57 = *(const struct D2D_RECT_F **)&v74.left;
              goto LABEL_90;
            }
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0x2C8u, 0LL);
          goto LABEL_84;
        }
LABEL_90:
        if ( v57 )
          std::_Deallocate<16,0>(v57, (v75 - (_QWORD)v57) & 0xFFFFFFFFFFFFFFF0uLL);
      }
      CShapePtr::~CShapePtr((CShapePtr *)&v73);
      goto LABEL_45;
    case 422:
      v39 = *(_QWORD *)(a6 + 8);
      v40 = *(_QWORD *)(a1 + 136);
      v41 = *(unsigned int *)(v39 + 4);
      v42 = *(struct CImageSource **)(v40 + 8 * v41);
      if ( v42 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v42 + 64LL))(
               *(_QWORD *)(v40 + 8 * v41),
               84LL,
               a1) )
        {
          if ( !*(_QWORD *)(a3 + 24) )
          {
            v74 = *(struct D2D_RECT_F *)(v39 + 8);
            v43 = CRenderData::DrawImageResource_FillMode(a2, a4, v42, 0LL, &v74, 1.0);
            v11 = v43;
            if ( v43 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x265u, 0LL);
              return v11;
            }
          }
        }
      }
      goto LABEL_45;
    case 423:
      v30 = *(_QWORD *)(a6 + 8);
      v31 = *(_QWORD *)(a1 + 136);
      v32 = *(__int64 **)(v31 + 8LL * *(unsigned int *)(v30 + 4));
      v33 = *(_QWORD *)(v31 + 8LL * *(unsigned int *)(v30 + 8));
      if ( !v32 || !v33 || *(_QWORD *)(a3 + 24) )
        goto LABEL_45;
      CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v74, (struct IBitmapResource *)(v33 + 72));
      if ( *(_QWORD *)&v74.right )
      {
        *(_QWORD *)&v73.left = 0LL;
        wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>::reset(&v73);
        v71 = 257;
        v77 = 0LL;
        LOWORD(v70[0]) = SamplerMode::k_ClampClampLinear;
        BYTE2(v70[0]) = 1;
        *(struct _D3DCOLORVALUE *)&v76.r = 0LL;
        v72 = 1;
        v11 = CCommonRenderingEffectFactory::CreateRenderingEffect(v34, &v74, v70, &v76);
        CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v76);
        if ( (v11 & 0x80000000) != 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x324,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\renderdata.cpp",
            (const char *)v11,
            (int)&v71);
LABEL_48:
          wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v73);
          CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v74);
          return v11;
        }
        *(_QWORD *)&v76.b = *(_QWORD *)&v73.left;
        v35 = *v32;
        v78 = off_1803143C0;
        v80 = &v78;
        *(_QWORD *)&v76.r = a4;
        v36 = *(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ***)()))(v35 + 208);
        v79 = *(__int128 *)&v76.r;
        v11 = v36(v32, &v78);
        if ( v80 )
        {
          v37 = &v78;
          LOBYTE(v37) = v80 != &v78;
          ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v80)[4])(v80, v37);
        }
        if ( (v11 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x32Bu, 0LL);
          goto LABEL_48;
        }
        wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v73);
      }
      CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v74);
      goto LABEL_45;
    case 424:
      v18 = *(_QWORD *)(a6 + 8);
      v19 = *(_QWORD *)(a1 + 136);
      v20 = *(unsigned int *)(v18 + 4);
      v21 = *(_QWORD *)(v19 + 8 * v20);
      if ( v21 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v21 + 64LL))(
               *(_QWORD *)(v19 + 8 * v20),
               162LL,
               a1) )
        {
          if ( !*(_QWORD *)(a3 + 24) )
          {
            *(struct _D3DCOLORVALUE *)&v76.r = 0LL;
            v22 = CSolidColorLegacyMilBrush::GetRealizedColor((CSolidColorLegacyMilBrush *)v21, &v76);
            v11 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x202u, 0LL);
              return v11;
            }
            v23 = CRenderData::DrawSolidColorRectangle(a2, a4, (const struct D2D_RECT_F *)(v18 + 8), &v76);
            v11 = v23;
            if ( v23 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x206u, 0LL);
              return v11;
            }
          }
        }
        else if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 64LL))(v21, 99LL) )
        {
          if ( !*(_QWORD *)(a3 + 24) )
          {
            v24 = CLinearGradientLegacyMilBrush::Draw(
                    (CLinearGradientLegacyMilBrush *)v21,
                    a2,
                    a4,
                    (const struct D2D_RECT_F *)(v18 + 8));
            v11 = v24;
            if ( v24 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x212u, 0LL);
              return v11;
            }
          }
        }
        else if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 64LL))(v21, 83LL) )
        {
          *(_QWORD *)&v73.left = *(_QWORD *)(v21 + 192);
          if ( *(_QWORD *)&v73.left )
          {
            if ( CImageLegacyMilBrush::ReducesToFillImage((CImageLegacyMilBrush *)v21) && !*(_QWORD *)(a3 + 24) )
            {
              v25 = *(struct CFloatResource **)(v21 + 80);
              *(struct _D3DCOLORVALUE *)&v26.r = *(struct _D3DCOLORVALUE *)(v21 + 128);
              v74 = *(struct D2D_RECT_F *)(v18 + 8);
              v27 = *(float *)(v21 + 72);
              *(struct _D3DCOLORVALUE *)&v76.r = *(struct _D3DCOLORVALUE *)&v26.r;
              v28 = CLegacyMilBrush::GetOpacity(v27, v25);
              v29 = CRenderData::DrawImageResource_FillMode(
                      a2,
                      a4,
                      *(struct CImageSource **)&v73.left,
                      (const struct D2D_RECT_F *)&v76,
                      &v74,
                      v28);
              v11 = v29;
              if ( v29 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x225u, 0LL);
                return v11;
              }
            }
          }
        }
      }
      goto LABEL_45;
    case 425:
      if ( !*(_QWORD *)(a3 + 24) )
      {
        v17 = CRenderData::DrawSolidColorRectangle(
                a2,
                a4,
                (const struct D2D_RECT_F *)(*(_QWORD *)(a6 + 8) + 4LL),
                (const struct _D3DCOLORVALUE *)(*(_QWORD *)(a6 + 8) + 20LL));
        v11 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x237u, 0LL);
          return v11;
        }
      }
      goto LABEL_45;
    case 426:
      v12 = *(_QWORD *)(a6 + 8);
      v13 = *(_QWORD *)(a1 + 136);
      v14 = *(unsigned int *)(v12 + 4);
      v15 = *(struct CImageSource **)(v13 + 8 * v14);
      if ( v15 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v15 + 64LL))(
               *(_QWORD *)(v13 + 8 * v14),
               84LL,
               a1) )
        {
          if ( !*(_QWORD *)(a3 + 24) )
          {
            v74 = *(struct D2D_RECT_F *)(v12 + 8);
            v16 = CRenderData::DrawImageResource_TileMode(a2, a4, v15, v12 + 28, (__int64)&v74);
            v11 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x24Eu, 0LL);
              return v11;
            }
          }
        }
      }
      goto LABEL_45;
  }
  return v11;
}
