/*
 * XREFs of ?UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000C068
 * Callers:
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180107B68 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@@Z @ 0x1800081EC (-Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@.c)
 *     ?push_back@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX$$QEAUVisualTreePathUnit@CVisualTreePath@@@Z @ 0x180008780 (-push_back@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUn.c)
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180009C50 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000AC70 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RE.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000BF90 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ @ 0x180054610 (-IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800B7830 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1801095D0 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z @ 0x180209DF0 (-SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x180252C84 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18025AA8C (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CPreComputeContext::UpdateBVIForVisual(__int64 a1, CVisual *a2, float *a3, char a4, char *a5)
{
  __int64 v8; // rax
  CVisual *v9; // r15
  struct CTreeData *v10; // rdi
  struct CBackdropVisualImage **i; // rbx
  struct CBackdropVisualImage *v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // r8
  __int64 v15; // rax
  struct CBackdropVisualImage *v16; // rbx
  int v17; // edi
  struct CVisualTree *VisualTreeNoRef; // rax
  DwmDbg::Backdrops *v20; // rcx
  const char **DebugString; // rax
  DwmDbg::DbgString *v22; // rdi
  DwmDbg::DbgString *v23; // rax
  int v24; // [rsp+20h] [rbp-51h]
  struct CBackdropVisualImage *v25; // [rsp+30h] [rbp-41h] BYREF
  const struct CVisualTree *v26; // [rsp+38h] [rbp-39h] BYREF
  __int128 v27; // [rsp+40h] [rbp-31h] BYREF
  _BYTE *v28; // [rsp+50h] [rbp-21h] BYREF
  _BYTE *v29; // [rsp+58h] [rbp-19h]
  __int64 *v30; // [rsp+60h] [rbp-11h]
  _BYTE v31[32]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v32; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+57h]

  if ( a3[2] <= *a3 || a3[3] <= a3[1] )
    return 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 328LL);
  *(_QWORD *)&v27 = 0LL;
  v28 = v31;
  v29 = v31;
  v30 = &v32;
  *((_QWORD *)&v27 + 1) = v8;
  detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::push_back(
    (detail::liberal_expansion_policy *)&v28,
    &v27);
  v9 = *(CVisual **)(*((_QWORD *)v28 + 1) + 72LL);
  v26 = (const struct CVisualTree *)*((_QWORD *)v29 - 1);
  v10 = CVisual::EnsureTreeData(a2, v26);
  for ( i = (struct CBackdropVisualImage **)*((_QWORD *)v10 + 18); i != *((struct CBackdropVisualImage ***)v10 + 19); ++i )
  {
    v12 = *i;
    v13 = *((_QWORD *)*i + 259);
    if ( *((_QWORD *)*i + 260) - v13 == v29 - v28 )
    {
      v14 = v28;
      v15 = v13 - (_QWORD)v28;
      while ( (_QWORD *)((char *)v14 + v15) != *((_QWORD **)v12 + 260) )
      {
        if ( *(_QWORD *)((char *)v14 + v15) != *v14 || *(_QWORD *)((char *)v14 + v15 + 8) != v14[1] )
          goto LABEL_21;
        v14 += 2;
      }
      *((_QWORD *)v12 + 279) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 31) + 24LL) + 888LL);
      v16 = *i;
      if ( v16 )
      {
        CMILRefCountImpl::AddReference((struct CBackdropVisualImage *)((char *)v16 + 8));
        goto LABEL_13;
      }
      break;
    }
LABEL_21:
    ;
  }
  v25 = 0LL;
  VisualTreeNoRef = CVisual::GetVisualTreeNoRef(v9);
  CBackdropVisualImage::Create(g_pComposition, a2, (const struct CVisualTreePath *)&v28, VisualTreeNoRef == v26, &v25);
  v16 = v25;
  CTreeData::SetBackdropVisualImage(v10, (const struct CVisualTreePath *)&v28, v25);
  if ( DwmDbg::Backdrops::IsEtwEnabled(v20) )
  {
    DebugString = (const char **)CVisualTreePath::GetDebugString(&v28, &v26);
    v22 = DwmDbg::DbgString::DbgString((char **)&v25, "pBVI=0x%p, bviPath=[%s]", v16, *DebugString);
    v23 = DwmDbg::DbgString::DbgString((char **)&v27, "Visual-CreatedNewBVI");
    DwmDbg::Backdrops::LogBrushEtwEvent(v23, a2, v22);
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v26);
  }
LABEL_13:
  v17 = CBackdropVisualImage::ValidateRootAndSourceRectangle(v16, (__int64)v9, a3, a4, a5);
  if ( v16 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v16);
  if ( v17 >= 0 )
  {
    detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)&v28);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6F7,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
    (const char *)(unsigned int)v17,
    v24);
  detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)&v28);
  return (unsigned int)v17;
}
