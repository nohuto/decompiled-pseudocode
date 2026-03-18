/*
 * XREFs of ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801AB8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x180080770 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x180086190 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?AlignRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_POINTANDSIZE_L@@@Z @ 0x1800A41A4 (-AlignRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800A42B0 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x18017741C (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x1801ABB50 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokeP.c)
 *     ?TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801AD340 (-TryRegisterSuperWetForDraw@CSuperWetInkManager@@QEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@@Z @ 0x180271A08 (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGenericInk::Draw(
        CGenericInk *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  struct CD3DDevice *v5; // rdx
  int v6; // r14d
  int DirectInkWetStroke; // eax
  __int64 v9; // r8
  unsigned int v10; // ebx
  bool v11; // r12
  struct IDCompositionDirectInkWetStrokePartner *v12; // rbx
  bool v13; // si
  char v14; // r15
  unsigned int v15; // esi
  int v16; // eax
  int v17; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  bool v23[4]; // [rsp+30h] [rbp-A9h] BYREF
  int v24; // [rsp+34h] [rbp-A5h] BYREF
  struct IDCompositionDirectInkWetStrokePartner *v25; // [rsp+38h] [rbp-A1h] BYREF
  struct D2D_RECT_F v26; // [rsp+40h] [rbp-99h] BYREF
  __int128 v27; // [rsp+50h] [rbp-89h] BYREF
  _OWORD v28[2]; // [rsp+60h] [rbp-79h] BYREF
  _BYTE v29[64]; // [rsp+80h] [rbp-59h] BYREF
  int v30; // [rsp+C0h] [rbp-19h]
  struct D2D_RECT_F v31; // [rsp+D0h] [rbp-9h] BYREF
  struct D2D_RECT_F v32; // [rsp+E0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]

  v5 = (struct CD3DDevice *)*((_QWORD *)a2 + 5);
  v6 = 0;
  v25 = 0LL;
  DirectInkWetStroke = CGenericInk::GetDirectInkWetStroke(this, v5, &v25);
  v10 = DirectInkWetStroke;
  if ( DirectInkWetStroke >= 0 )
  {
    v11 = 0;
    v12 = v25;
    v13 = 0;
    v23[0] = 0;
    v14 = 0;
    if ( CCommonRegistryData::GammaBlendPencil )
    {
      v24 = 0;
      v15 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, int *))(*(_QWORD *)v25 + 64LL))(
              v25,
              &v24);
      if ( (v15 & 0x80000000) != 0 )
      {
        v20 = 206LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
          (const char *)v15);
        if ( !v12 )
          return v15;
LABEL_19:
        (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)v12 + 16LL))(v12);
        return v15;
      }
      if ( !v24 || (v13 = 1, !CDrawingContext::IsHDRTarget(a2)) )
        v13 = 0;
    }
    if ( *((_QWORD *)this + 11) )
    {
      v16 = CSuperWetInkManager::TryRegisterSuperWetForDraw(
              *(CSuperWetInkManager **)(*((_QWORD *)this + 3) + 656LL),
              this,
              a2,
              v13,
              v23);
      v11 = v23[0];
      v6 = v16;
    }
    if ( !v13 )
      goto LABEL_9;
    v32 = 0LL;
    v19 = *(_QWORD *)v12;
    v26 = 0LL;
    v15 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, struct D2D_RECT_F *))(v19 + 32))(
            v12,
            &v32);
    if ( (v15 & 0x80000000) != 0 )
    {
      v20 = 224LL;
      goto LABEL_18;
    }
    v30 = 0;
    v26 = v32;
    v31 = 0LL;
    v28[0] = 0LL;
    v27 = 0LL;
    CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 288), (struct CMILMatrix *)v29);
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v29, &v26, &v31.left);
    CDrawingContext::GetClipBoundsWorld((__int64)a2, (float *)&v27);
    if ( *(float *)&v27 > v31.left )
      LODWORD(v31.left) = v27;
    if ( *((float *)&v27 + 1) > v31.top )
      v31.top = *((FLOAT *)&v27 + 1);
    if ( v31.right > *((float *)&v27 + 2) )
      v31.right = *((FLOAT *)&v27 + 2);
    if ( v31.bottom > *((float *)&v27 + 3) )
      v31.bottom = *((FLOAT *)&v27 + 3);
    if ( IsEmpty(&v31) )
    {
      v31.bottom = 0.0;
      v31.right = 0.0;
      v31.top = 0.0;
      v31.left = 0.0;
    }
    v21 = AlignRectFToPointAndSizeL(&v31.left, v28);
    v15 = v21;
    if ( v21 < 0 )
    {
      v22 = 243LL;
LABEL_49:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
        (const char *)(unsigned int)v21);
LABEL_52:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
      return v15;
    }
    if ( SDWORD2(v28[0]) > 0 && SHIDWORD(v28[0]) > 0 )
    {
      v21 = CDrawingContext::PushGammaBlendLayer(a2, (const struct D2D_POINTANDSIZE_L *)v28);
      v15 = v21;
      if ( v21 < 0 )
      {
        v22 = 247LL;
        goto LABEL_49;
      }
      v14 = 1;
    }
LABEL_9:
    dword_1804067B4 |= 1u;
    LOBYTE(v9) = !v11;
    v17 = (*(__int64 (__fastcall **)(char *, struct IDCompositionDirectInkWetStrokePartner *, __int64))(*((_QWORD *)a2 + 2) + 64LL))(
            (char *)a2 + 16,
            v12,
            v9);
    v15 = v17;
    if ( v17 >= 0 )
    {
      if ( v6 >= 0 )
      {
        if ( v14 )
          CDrawingContext::PopLayerInternal((__int64)a2);
        if ( v12 )
          (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)v12 + 16LL))(v12);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10B,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
        (const char *)(unsigned int)v6);
      if ( v14 )
        CDrawingContext::PopLayerInternal((__int64)a2);
      v15 = v6;
      goto LABEL_52;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x109,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)v17);
    if ( v14 )
      CDrawingContext::PopLayerInternal((__int64)a2);
    if ( !v12 )
      return v15;
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC4,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
    (const char *)(unsigned int)DirectInkWetStroke);
  if ( v25 )
    (*(void (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *))(*(_QWORD *)v25 + 16LL))(v25);
  return v10;
}
