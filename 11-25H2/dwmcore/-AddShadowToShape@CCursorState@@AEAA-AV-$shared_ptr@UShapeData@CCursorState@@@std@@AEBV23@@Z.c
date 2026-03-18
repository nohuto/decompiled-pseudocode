/*
 * XREFs of ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x1802BB74C
 * Callers:
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x1802BDBC4 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTAT.c)
 * Callees:
 *     ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x18000D28C (-Create@CDrawingContext@@SAXPEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18003F160 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180041094 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VIBitmapSource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042020 (-InternalQueryInterface@-$CMILCOMBaseT@VIBitmapSource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x180087DA0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BFD28 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DA620 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800DC130 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x180115290 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?GetID2DEffect@CD2DEffect@@QEAAJPEAPEAUID2D1Effect@@@Z @ 0x18011530C (-GetID2DEffect@CD2DEffect@@QEAAJPEAPEAUID2D1Effect@@@Z.c)
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x180116C10 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180118418 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x1801861AC (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x180187810 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18018F430 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x1801AA080 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x1801F5F50 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     gsl::final_action__lambda_22acde5ac7c406f4f69d298297452453___::_final_action__lambda_22acde5ac7c406f4f69d298297452453___ @ 0x18022A520 (gsl--final_action__lambda_22acde5ac7c406f4f69d298297452453___--_final_action__lambda_22acde5ac7c.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     gsl::final_action__lambda_6a4b919438eee03480f86c448c6d57d6___::_final_action__lambda_6a4b919438eee03480f86c448c6d57d6___ @ 0x18029038C (gsl--final_action__lambda_6a4b919438eee03480f86c448c6d57d6___--_final_action__lambda_6a4b919438e.c)
 *     ??$make_shared@UShapeData@CCursorState@@$$V@std@@YA?AV?$shared_ptr@UShapeData@CCursorState@@@0@XZ @ 0x1802BB25C (--$make_shared@UShapeData@CCursorState@@$$V@std@@YA-AV-$shared_ptr@UShapeData@CCursorState@@@0@X.c)
 *     ?CreateBitmapFromWicBitmap@CD2DContext@@QEAAJPEAUIWICBitmapSource@@PEAPEAUID2D1Bitmap@@@Z @ 0x1802C4C54 (-CreateBitmapFromWicBitmap@CD2DContext@@QEAAJPEAUIWICBitmapSource@@PEAPEAUID2D1Bitmap@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall CCursorState::AddShadowToShape(__int64 a1, _QWORD *a2, _QWORD **a3)
{
  CDeviceManager *v5; // rcx
  CD2DEffect *v6; // rbx
  struct CD3DDevice *v7; // rdi
  CD2DEffect *v8; // rbx
  struct CD3DDevice *v9; // rdi
  CSystemMemoryBitmap *v10; // rcx
  struct ID2D1Effect *v11; // rbx
  struct ID2D1Effect *v12; // r8
  struct ID2D1Effect *v13; // rbx
  struct ID2D1Effect *v14; // rsi
  __int64 *v15; // rax
  struct CD3DDevice *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  CGlobalDrawingContext *v19; // rdi
  __int64 v20; // rax
  struct CDrawingContext *v21; // rbx
  signed int v22; // r12d
  signed int v23; // r13d
  int (__fastcall **v24)(char *, __int128 *); // rax
  CSystemMemoryBitmap *v25; // rax
  CSystemMemoryBitmap *v26; // rax
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rbx
  CD2DEffect *v30; // [rsp+40h] [rbp-89h] BYREF
  struct CD3DDevice *v31; // [rsp+48h] [rbp-81h] BYREF
  struct ID2D1Effect *v32; // [rsp+50h] [rbp-79h] BYREF
  ID2D1Effect *v33; // [rsp+58h] [rbp-71h] BYREF
  CGlobalDrawingContext *v34; // [rsp+60h] [rbp-69h] BYREF
  ID2D1Effect *v35; // [rsp+68h] [rbp-61h] BYREF
  struct ID2D1Bitmap *v36; // [rsp+70h] [rbp-59h] BYREF
  struct IWICBitmapSource *v37; // [rsp+78h] [rbp-51h] BYREF
  struct CDrawingContext *v38; // [rsp+80h] [rbp-49h] BYREF
  int v39; // [rsp+88h] [rbp-41h] BYREF
  __int64 v40; // [rsp+8Ch] [rbp-3Dh]
  __m128 v41; // [rsp+98h] [rbp-31h] BYREF
  __int128 v42; // [rsp+A8h] [rbp-21h] BYREF
  int v43; // [rsp+B8h] [rbp-11h]
  int v44; // [rsp+BCh] [rbp-Dh]
  __int128 v45; // [rsp+C0h] [rbp-9h] BYREF
  int v46; // [rsp+D0h] [rbp+7h]
  char v47; // [rsp+D4h] [rbp+Bh]
  __int16 v48; // [rsp+D5h] [rbp+Ch]
  char v49; // [rsp+D7h] [rbp+Eh]
  __int64 v50; // [rsp+D8h] [rbp+Fh] BYREF
  signed int v51; // [rsp+E0h] [rbp+17h]
  signed int v52; // [rsp+E4h] [rbp+1Bh]

  v31 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v31);
  if ( (int)CDeviceManager::GetDefaultDevice(v5, &v31) >= 0 )
  {
    v32 = 0LL;
    v30 = 0LL;
    if ( (int)CD2DContext::CreateD2DEffect((struct CD3DDevice *)((char *)v31 + 16), &CLSID_D2D1Shadow, &v30) < 0
      || (v6 = v30, (int)CD2DEffect::GetID2DEffect(v30, &v32) < 0) )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      goto LABEL_45;
    }
    v7 = v31;
    v33 = 0LL;
    v30 = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(CD2DEffect *))(*(_QWORD *)v6 + 16LL))(v6);
    if ( (int)CD2DContext::CreateD2DEffect((struct CD3DDevice *)((char *)v7 + 16), &CLSID_D2D12DAffineTransform, &v30) < 0
      || (v8 = v30, (int)CD2DEffect::GetID2DEffect(v30, &v33) < 0) )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      goto LABEL_17;
    }
    v9 = v31;
    v35 = 0LL;
    v30 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(CD2DEffect *))(*(_QWORD *)v8 + 16LL))(v8);
    if ( (int)CD2DContext::CreateD2DEffect((struct CD3DDevice *)((char *)v9 + 16), &CLSID_D2D1Composite, &v30) < 0
      || (int)CD2DEffect::GetID2DEffect(v30, &v35) < 0 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      goto LABEL_16;
    }
    v10 = (CSystemMemoryBitmap *)(*a3)[3];
    v37 = 0LL;
    if ( (int)CMILCOMBaseT<IBitmapSource,IBitmapSource,CMilObjectDeleter>::InternalQueryInterface(
                v10,
                &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94,
                (void **)&v37) < 0 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
LABEL_15:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
LABEL_16:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
LABEL_17:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
LABEL_45:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v30);
      goto LABEL_46;
    }
    v36 = 0LL;
    if ( (int)CD2DContext::CreateBitmapFromWicBitmap((struct CD3DDevice *)((char *)v31 + 16), v37, &v36) < 0 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
LABEL_20:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v36);
      goto LABEL_15;
    }
    v11 = v32;
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct ID2D1Bitmap *, __int64))(*(_QWORD *)v32 + 112LL))(
      v32,
      0LL,
      v36,
      1LL);
    LODWORD(v34) = 0x40000000;
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, CGlobalDrawingContext **, int))(*(_QWORD *)v11 + 72LL))(
      v11,
      0LL,
      0LL,
      &v34,
      4);
    v42 = _xmm;
    (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v11 + 72LL))(
      v11,
      1LL,
      0LL,
      &v42,
      16);
    v12 = v11;
    v13 = v33;
    ID2D1Effect::SetInputEffect(v33, 0, v12);
    v42 = _xmm;
    v43 = 1077936128;
    v44 = 1065353216;
    (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v13 + 72LL))(
      v13,
      2LL,
      0LL,
      &v42,
      24);
    v14 = v35;
    ID2D1Effect::SetInputEffect(v35, 0, v13);
    (*(void (__fastcall **)(struct ID2D1Effect *, __int64, struct ID2D1Bitmap *, __int64))(*(_QWORD *)v14 + 112LL))(
      v14,
      1LL,
      v36,
      1LL);
    v15 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __m128 *))(*(_QWORD *)((*a3)[3] + 120LL) + 32LL))(
                       (*a3)[3] + 120LL,
                       &v41);
    v16 = v31;
    v46 = 0;
    v34 = 0LL;
    v17 = *v15;
    v18 = *((_QWORD *)v31 + 117);
    v41.m128_i32[0] = v17 + 6;
    v41.m128_i32[1] = HIDWORD(v17) + 6;
    *(_QWORD *)&v45 = v18;
    v48 = 0;
    v49 = 0;
    v39 = 87;
    v40 = 1LL;
    *((_QWORD *)&v45 + 1) = 4294967293LL;
    v47 = 0;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v34);
    DWORD2(v42) = 13;
    *(_QWORD *)&v42 = "Cursor Shadow";
    if ( (int)CD3DDevice::CreateRenderTargetBitmap(
                (__int64)v16,
                (const struct CResourceTag *)&v42,
                (struct D2D_SIZE_U *)&v41,
                (struct PixelFormatInfo *)&v39,
                (struct RenderTargetInfo *)&v45,
                1,
                &v34) < 0 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
LABEL_23:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
      goto LABEL_20;
    }
    v38 = 0LL;
    CDrawingContext::Create(&v38);
    v19 = v34;
    v20 = (*(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v34 + 144LL))(v34);
    v21 = v38;
    if ( (int)CDrawingContext::BeginFrame(
                (__int64)v38,
                (v20 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v20 >> 64),
                0LL,
                0LL,
                0,
                0LL) >= 0 )
    {
      v22 = v41.m128_i32[0];
      v41.m128_i32[0] = 0;
      BYTE8(v42) = 1;
      v23 = v41.m128_i32[1];
      v41.m128_i32[1] = 0;
      *(_QWORD *)&v42 = v21;
      v41.m128_f32[2] = (float)v22;
      v41.m128_f32[3] = (float)v23;
      if ( (int)CDrawingContext::PushGpuClipRectInternal((__int64)v21, 0LL, &v41, 1, 0) >= 0 )
      {
        v41.m128_u64[0] = (unsigned __int64)v21;
        v24 = (int (__fastcall **)(char *, __int128 *))*((_QWORD *)v21 + 2);
        v41.m128_i8[8] = 1;
        v45 = 0LL;
        if ( (*v24)((char *)v21 + 16, &v45) >= 0
          && (int)CDrawingContext::FillEffect((const void **)v21, v14, 0LL, 0LL, 0) >= 0
          && (int)CDrawingContext::FlushD2D(v21) >= 0 )
        {
          gsl::final_action__lambda_22acde5ac7c406f4f69d298297452453___::_final_action__lambda_22acde5ac7c406f4f69d298297452453___(&v41);
          gsl::final_action__lambda_6a4b919438eee03480f86c448c6d57d6___::_final_action__lambda_6a4b919438eee03480f86c448c6d57d6___((__int64)&v42);
          v25 = (CSystemMemoryBitmap *)operator new(0x98uLL);
          if ( v25 )
            v26 = CSystemMemoryBitmap::CSystemMemoryBitmap(v25);
          else
            v26 = 0LL;
          wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
            &v41,
            (__int64)v26);
          v27 = v41.m128_u64[0];
          if ( (int)CSystemMemoryBitmap::HrInit((void **)v41.m128_u64[0], v22, v23, (enum DXGI_FORMAT *)&v39, 0) < 0
            || (v50 = 0LL,
                v51 = v22,
                v52 = v23,
                (*(int (__fastcall **)(CGlobalDrawingContext *, __int64 *, unsigned __int64, _QWORD, _DWORD))(*(_QWORD *)v19 + 128LL))(
                  v19,
                  &v50,
                  (v27 + 16) & -(__int64)(v27 != 0),
                  0LL,
                  0) < 0) )
          {
            *a2 = 0LL;
            a2[1] = 0LL;
          }
          else
          {
            std::make_shared<CCursorState::ShapeData,>(&v42);
            v28 = v42;
            *(_QWORD *)v42 = **a3;
            *(_DWORD *)(v28 + 8) = *((_DWORD *)*a3 + 2);
            *(_DWORD *)(v28 + 12) = *((_DWORD *)*a3 + 3);
            *(_BYTE *)(v28 + 16) = *((_BYTE *)*a3 + 16);
            *(_BYTE *)(v28 + 17) = 1;
            wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
              (__int64 *)(v28 + 24),
              (__int64 *)&v41);
            *(_OWORD *)a2 = __PAIR128__(*((unsigned __int64 *)&v42 + 1), v28);
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v41);
          goto LABEL_26;
        }
        *a2 = 0LL;
        a2[1] = 0LL;
        gsl::final_action__lambda_22acde5ac7c406f4f69d298297452453___::_final_action__lambda_22acde5ac7c406f4f69d298297452453___(&v41);
      }
      else
      {
        *a2 = 0LL;
        a2[1] = 0LL;
      }
      gsl::final_action__lambda_6a4b919438eee03480f86c448c6d57d6___::_final_action__lambda_6a4b919438eee03480f86c448c6d57d6___((__int64)&v42);
    }
    else
    {
      *a2 = 0LL;
      a2[1] = 0LL;
    }
LABEL_26:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v38);
    goto LABEL_23;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
LABEL_46:
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v31);
  return a2;
}
