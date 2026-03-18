/*
 * XREFs of ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1800F4830
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800097B8 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18000A7D0 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18000AAA0 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ @ 0x18000C27C (-CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x180046790 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?GenerateEffectInput@CBackdropVisualImage@@QEAA?AUEffectInput@@XZ @ 0x18004AD84 (-GenerateEffectInput@CBackdropVisualImage@@QEAA-AUEffectInput@@XZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ @ 0x1800D5FB0 (-IsEtwEnabled@Backdrops@DwmDbg@@YA_NXZ.c)
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800F3A90 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800F5C80 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F8DB4 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800FA030 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x1801369CC (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x180136B10 (-GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEBAXAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180173024 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEBAXAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     gsl::final_action__lambda_7c326dd339b6b31d734cab6f1173b304___::_final_action__lambda_7c326dd339b6b31d734cab6f1173b304___ @ 0x18020F348 (gsl--final_action__lambda_7c326dd339b6b31d734cab6f1173b304___--_final_action__lambda_7c326dd339b.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x180247CD8 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18024F55C (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowBackgroundBitmapProducer::ProduceRealization(
        CWindowBackgroundBitmapProducer *this,
        struct CDrawingContext *a2,
        struct CCachedImageProducer::CCachedRealization **a3)
{
  __int64 v3; // rax
  int v4; // r12d
  struct CCachedImageProducer::CCachedRealization **v5; // r15
  struct CVisual *CurrentVisual; // rax
  __int64 v9; // rdx
  const struct CVisualTreePath *v10; // rsi
  CVisual *v11; // r13
  DwmDbg::Backdrops *v12; // rcx
  unsigned int v13; // ebx
  CBackdropVisualImage *BackdropVisualImage; // rax
  CBackdropVisualImage *v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int128 *EffectInput; // rax
  int v19; // r15d
  DwmDbg::Backdrops *v20; // rcx
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  struct D2D_SIZE_F v27; // rbx
  struct CCachedImageProducer::CCachedRealization *v28; // rsi
  unsigned __int64 FrameTargetTime; // rax
  struct D2D_SIZE_F v30; // rcx
  CDrawingContext *v31; // rcx
  CDrawingContext *v33; // rcx
  void (*v34)(void); // rax
  CDrawingContext *v35; // rcx
  __int64 v36; // rdx
  const char **DebugString; // rax
  DwmDbg::DbgString *v38; // rbx
  DwmDbg::DbgString *v39; // rax
  __int64 v40; // rax
  const char **v41; // rax
  DwmDbg::DbgString *v42; // rbx
  DwmDbg::DbgString *v43; // rax
  void **v44; // rbx
  void **v45; // rax
  struct D2D_SIZE_F v46; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v47; // [rsp+38h] [rbp-C8h] BYREF
  struct CCachedImageProducer::CCachedRealization **v48; // [rsp+48h] [rbp-B8h]
  float v49[2]; // [rsp+50h] [rbp-B0h] BYREF
  char *v50; // [rsp+58h] [rbp-A8h] BYREF
  const struct CVisualTreePath *v51; // [rsp+60h] [rbp-A0h]
  __int128 v52; // [rsp+70h] [rbp-90h] BYREF
  char v53; // [rsp+80h] [rbp-80h]
  __int128 v54; // [rsp+A0h] [rbp-60h]
  char v55; // [rsp+D9h] [rbp-27h]
  _BYTE v56[112]; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v3 = *((_QWORD *)this + 9);
  v4 = 0;
  v5 = a3;
  v48 = a3;
  if ( !*(_QWORD *)(v3 + 312) )
  {
    v13 = -2147020579;
    v36 = 409LL;
    goto LABEL_31;
  }
  if ( !*(_QWORD *)(v3 + 304) )
    goto LABEL_15;
  CurrentVisual = CDrawingContext::GetCurrentVisual(a2);
  v10 = *(const struct CVisualTreePath **)(v9 + 7968);
  v11 = CurrentVisual;
  v51 = v10;
  if ( DwmDbg::Backdrops::IsEtwEnabled(v12) )
  {
    DebugString = (const char **)CVisualTreePath::GetDebugString(v10, &v46);
    v38 = DwmDbg::DbgString::DbgString(&v50, "bviPath=[%s]", *DebugString);
    v39 = DwmDbg::DbgString::DbgString((char **)&v47, "WindowBackgroundTreatment-ValidateBVI");
    DwmDbg::Backdrops::LogBrushEtwEvent(v39, v11, v38);
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v46);
  }
  v47 = *(_OWORD *)(*((_QWORD *)this + 9) + 88LL);
  v13 = CDrawingContext::ValidateBVIEffectInputForRender((__int64)a2, &v47, 0LL);
  if ( (v13 & 0x80000000) != 0 )
  {
    v36 = 432LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windowbackgroundtreatment.cpp",
      (const char *)v13);
    return v13;
  }
  BackdropVisualImage = CVisual::GetBackdropVisualImage(v11, v10);
  v15 = BackdropVisualImage;
  v16 = *(_QWORD *)(*((_QWORD *)this + 9) + 312LL);
  if ( BackdropVisualImage && CBackdropVisualImage::CanUseAsEffectInput(BackdropVisualImage) )
  {
    EffectInput = (__int128 *)CBackdropVisualImage::GenerateEffectInput(v17, (__int64)v56);
    v19 = 1;
  }
  else
  {
    v53 = 0;
    v46.width = *((float *)&v47 + 2) - *(float *)&v47;
    v46.height = *((float *)&v47 + 3) - *((float *)&v47 + 1);
    v52 = 0LL;
    v54 = 0LL;
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v52);
    memset_0(&v52, 0, 0x70uLL);
    CDrawingContext::SetEffectInputToTransparentBlack(v35, &v46, (struct EffectInput *)&v52);
    v19 = 0;
    v55 = 1;
    EffectInput = &v52;
    v4 = 2;
  }
  EffectInput::operator=(v16, EffectInput);
  if ( v4 )
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v52);
  if ( v19 )
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v56);
  *(_BYTE *)(v16 + 107) = 1;
  if ( DwmDbg::Backdrops::IsEtwEnabled(v20) )
  {
    if ( v15 )
    {
      if ( !CBackdropVisualImage::CanUseAsEffectInput(v15) )
      {
        v44 = (void **)DwmDbg::DbgString::DbgString(
                         (char **)&v47,
                         "CWindowBackgroundTreatment::GenerateBitmapForEffectInput");
        v45 = (void **)DwmDbg::DbgString::DbgString(&v50, "BVI-FallbackToTransparentBlack");
        CBackdropVisualImage::LogEtwEvent((__int64)v15, v45, v44);
      }
    }
    else
    {
      v41 = (const char **)CVisualTreePath::GetDebugString(v51, &v46);
      v42 = DwmDbg::DbgString::DbgString((char **)&v47, "bviPath=[%s]", *v41);
      v43 = DwmDbg::DbgString::DbgString(&v50, "WindowBackgroundTreatment-FallbackToTransparentBlack-NoBVI");
      DwmDbg::Backdrops::LogBrushEtwEvent(v43, v11, v42);
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&v46);
    }
  }
  v5 = v48;
LABEL_15:
  v21 = *((_QWORD *)this + 3);
  v22 = HIDWORD(*((_QWORD *)this + 3));
  v46 = 0LL;
  v49[0] = (float)v21;
  v49[1] = (float)(int)v22;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v46);
  v23 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
  DWORD2(v47) = 31;
  *(_QWORD *)&v47 = "DWM Window Background Treatment";
  v24 = CDrawingContext::PushOffScreenRenderingLayer(a2, &v47, v49, *(unsigned int *)(v23 + 8), 4, &v46);
  v13 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DD,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windowbackgroundtreatment.cpp",
      (const char *)(unsigned int)v24);
    if ( !*(_QWORD *)&v46 )
      return v13;
    v34 = *(void (**)(void))(**(_QWORD **)&v46 + 16LL);
    goto LABEL_27;
  }
  *(_QWORD *)&v47 = a2;
  BYTE8(v47) = 1;
  v25 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
  v13 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E4,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windowbackgroundtreatment.cpp",
      (const char *)(unsigned int)v25);
    gsl::final_action__lambda_7c326dd339b6b31d734cab6f1173b304___::_final_action__lambda_7c326dd339b6b31d734cab6f1173b304___(&v47);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v46);
    return v13;
  }
  v26 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, float *, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 9) + 72LL)
                                                                                     + 200LL))(
          *(_QWORD *)(*((_QWORD *)this + 9) + 72LL),
          a2,
          v49,
          0LL);
  v13 = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EE,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\windowbackgroundtreatment.cpp",
      (const char *)(unsigned int)v26);
    CDrawingContext::PopTransformInternal(a2, 1);
    CDrawingContext::PopLayer(v33);
    if ( !*(_QWORD *)&v46 )
      return v13;
    v34 = *(void (**)(void))(**(_QWORD **)&v46 + 16LL);
LABEL_27:
    v34();
    return v13;
  }
  v27 = v46;
  if ( g_LockAndReadWindowBackdropTexture )
  {
    v40 = (*(__int64 (__fastcall **)(struct D2D_SIZE_F))(**(_QWORD **)&v46 + 144LL))(v46);
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v40 + 112LL))(
      v40,
      ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  }
  v28 = (struct CCachedImageProducer::CCachedRealization *)operator new(0x10uLL);
  if ( v28 )
  {
    FrameTargetTime = CComposition::GetFrameTargetTime(g_pComposition);
    v30 = v27;
    v27 = 0LL;
    *(struct D2D_SIZE_F *)v28 = v30;
    *((_QWORD *)v28 + 1) = FrameTargetTime;
  }
  else
  {
    v28 = 0LL;
  }
  *v5 = v28;
  CDrawingContext::PopTransformInternal(a2, 1);
  CDrawingContext::PopLayer(v31);
  if ( v27 )
    (*(void (__fastcall **)(struct D2D_SIZE_F))(**(_QWORD **)&v27 + 16LL))(v27);
  return 0LL;
}
