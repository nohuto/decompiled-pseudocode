/*
 * XREFs of ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006CC40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180009360 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180043280 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?resize@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18006A450 (-resize@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006B728 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUD2D_RECT_F@@$0-0@gsl@@AEBU_D.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18006DC10 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x18007A680 (--0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x1800CD040 (-GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z.c)
 *     gsl::final_action__lambda_b778ccec937677c8d794b2b5e6f06977___::_final_action__lambda_b778ccec937677c8d794b2b5e6f06977___ @ 0x1800F5C54 (gsl--final_action__lambda_b778ccec937677c8d794b2b5e6f06977___--_final_action__lambda_b778ccec937.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1801379A0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18014CE90 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawSolidRectangle(__int64 a1, struct CShape *a2, __int128 *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  float v7; // xmm0_4
  const struct D2D_RECT_F *v8; // rdx
  int v9; // r8d
  int UnOccludedWorldShape; // ebx
  int v11; // eax
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  struct CShape *v19; // [rsp+48h] [rbp-B8h] BYREF
  char v20; // [rsp+50h] [rbp-B0h]
  __int128 v21; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v22[3]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v23[3]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v24[64]; // [rsp+98h] [rbp-68h] BYREF
  char v25; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v26[64]; // [rsp+E0h] [rbp-20h] BYREF

  v3 = *(_DWORD *)(a1 + 3152);
  v4 = 0;
  v21 = *a3;
  if ( v3 )
    v7 = *(float *)(*(_QWORD *)(a1 + 3144) + 4LL * (unsigned int)(v3 - 1));
  else
    v7 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  *((float *)&v21 + 3) = *((float *)&v21 + 3) * v7;
  if ( COERCE_FLOAT(HIDWORD(v21) & _xmm) >= 0.0000011920929 && !IsEmpty((const struct D2D_RECT_F *)a2) )
  {
    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v26, v8);
    v9 = *(_DWORD *)(a1 + 7960);
    v17 = 0LL;
    v19 = 0LL;
    v18 = (__int64)&v17;
    v20 = 1;
    UnOccludedWorldShape = CDrawingContext::GetUnOccludedWorldShape(
                             (CDrawingContext *)(a1 - 16),
                             (const struct CShape *)v26,
                             v9,
                             &v19);
    wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(&v18);
    if ( UnOccludedWorldShape >= 0 )
    {
      v13 = CDrawingContext::PushTransformInternal(
              (CDrawingContext *)(a1 - 16),
              0LL,
              (const struct CMILMatrix *)&CMILMatrix::Identity,
              0,
              1);
      v4 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x2BDu, 0LL);
      }
      else
      {
        v16 = 0;
        v18 = a1 - 16;
        LOBYTE(v19) = 1;
        (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 64LL))(v17, &v16);
        v23[0] = v24;
        v23[1] = v24;
        v23[2] = &v25;
        detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::resize(
          v23,
          v16);
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v17 + 80LL))(v17, v23[0], v16);
        v14 = v23[0];
        gsl::details::extent_type<-1>::extent_type<-1>(v22, v16);
        v22[1] = v14;
        if ( v22[0] == -1LL || !v14 && v22[0] )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v15 = CDrawingContext::FillRectanglesWithSolidColor(
                (struct CDrawingContext *)(a1 - 16),
                (__int64)v22,
                (__int64)&v21);
        v4 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x2CCu, 0LL);
        detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)v23);
        gsl::final_action__lambda_b778ccec937677c8d794b2b5e6f06977___::_final_action__lambda_b778ccec937677c8d794b2b5e6f06977___(&v18);
      }
    }
    else
    {
      v18 = 1LL;
      v19 = a2;
      if ( !a2 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v11 = CDrawingContext::FillRectanglesWithSolidColor(
              (struct CDrawingContext *)(a1 - 16),
              (__int64)&v18,
              (__int64)&v21);
      v4 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x2D1u, 0LL);
    }
    std::unique_ptr<CShape>::~unique_ptr<CShape>(&v17);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v26);
  }
  return v4;
}
