/*
 * XREFs of ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x1802B1BBC
 * Callers:
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBUD2D_SIZE_U@@W4DXGI_MODE_ROTATION@@_N@Z @ 0x1802B47F4 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBUD2D_SIZE_U@@W4.c)
 * Callees:
 *     ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x18000C958 (-Create@CDrawingContext@@SAXPEAPEAV1@@Z.c)
 *     ??0CSystemMemoryBitmap@@QEAA@XZ @ 0x180024574 (--0CSystemMemoryBitmap@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180059724 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VIBitmapSource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005A920 (-InternalQueryInterface@-$CMILCOMBaseT@VIBitmapSource@@V1@VCMilObjectDeleter@@@@IEAAJAEBU_GUID@@.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x1800A65E4 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?GetID2DEffect@CD2DEffect@@QEAAJPEAPEAUID2D1Effect@@@Z @ 0x1800A6660 (-GetID2DEffect@CD2DEffect@@QEAAJPEAPEAUID2D1Effect@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800CF2C0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x1800F5B08 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800FC770 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x1801966BC (-HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x1801A2590 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x1801E8D90 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x1801EDF70 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x1801FD5D0 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     gsl::final_action__lambda_d9647b2e9e0a0cba02120464dc304150___::_final_action__lambda_d9647b2e9e0a0cba02120464dc304150___ @ 0x18022F190 (gsl--final_action__lambda_d9647b2e9e0a0cba02120464dc304150___--_final_action__lambda_d9647b2e9e0.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     gsl::final_action__lambda_21858384f40d571ee451d04104df5963___::_final_action__lambda_21858384f40d571ee451d04104df5963___ @ 0x180284DEC (gsl--final_action__lambda_21858384f40d571ee451d04104df5963___--_final_action__lambda_21858384f40.c)
 *     ??$make_shared@VShapeData@CCursorState@@$$V@std@@YA?AV?$shared_ptr@VShapeData@CCursorState@@@0@XZ @ 0x1802B1658 (--$make_shared@VShapeData@CCursorState@@$$V@std@@YA-AV-$shared_ptr@VShapeData@CCursorState@@@0@X.c)
 *     ?CreateBitmapFromWicBitmap@CD2DContext@@QEAAJPEAUIWICBitmapSource@@PEAPEAUID2D1Bitmap@@@Z @ 0x1802BB5F4 (-CreateBitmapFromWicBitmap@CD2DContext@@QEAAJPEAUIWICBitmapSource@@PEAPEAUID2D1Bitmap@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v19; // rdx
  __int64 v20; // r8
  CGlobalDrawingContext *v21; // rdi
  __int64 v22; // rax
  struct CDrawingContext *v23; // rbx
  signed int v24; // r12d
  signed int v25; // r13d
  int (__fastcall **v26)(char *, __int128 *); // rax
  CSystemMemoryBitmap *v27; // rax
  CSystemMemoryBitmap *v28; // rax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rbx
  CD2DEffect *v32; // [rsp+40h] [rbp-89h] BYREF
  struct CD3DDevice *v33; // [rsp+48h] [rbp-81h] BYREF
  struct ID2D1Effect *v34; // [rsp+50h] [rbp-79h] BYREF
  ID2D1Effect *v35; // [rsp+58h] [rbp-71h] BYREF
  CGlobalDrawingContext *v36; // [rsp+60h] [rbp-69h] BYREF
  ID2D1Effect *v37; // [rsp+68h] [rbp-61h] BYREF
  struct ID2D1Bitmap *v38; // [rsp+70h] [rbp-59h] BYREF
  struct IWICBitmapSource *v39; // [rsp+78h] [rbp-51h] BYREF
  struct CDrawingContext *v40; // [rsp+80h] [rbp-49h] BYREF
  int v41; // [rsp+88h] [rbp-41h] BYREF
  __int64 v42; // [rsp+8Ch] [rbp-3Dh]
  __m128 v43; // [rsp+98h] [rbp-31h] BYREF
  __int128 v44; // [rsp+A8h] [rbp-21h] BYREF
  int v45; // [rsp+B8h] [rbp-11h]
  int v46; // [rsp+BCh] [rbp-Dh]
  __int128 v47; // [rsp+C0h] [rbp-9h] BYREF
  int v48; // [rsp+D0h] [rbp+7h]
  char v49; // [rsp+D4h] [rbp+Bh]
  __int16 v50; // [rsp+D5h] [rbp+Ch]
  char v51; // [rsp+D7h] [rbp+Eh]
  __int64 v52; // [rsp+D8h] [rbp+Fh] BYREF
  signed int v53; // [rsp+E0h] [rbp+17h]
  signed int v54; // [rsp+E4h] [rbp+1Bh]

  v33 = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v33);
  if ( (int)CDeviceManager::GetDefaultDevice(v5, &v33) >= 0 )
  {
    v34 = 0LL;
    v32 = 0LL;
    if ( (int)CD2DContext::CreateD2DEffect((struct CD3DDevice *)((char *)v33 + 16), &CLSID_D2D1Shadow, &v32) < 0
      || (v6 = v32, (int)CD2DEffect::GetID2DEffect(v32, &v34) < 0) )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      goto LABEL_45;
    }
    v7 = v33;
    v35 = 0LL;
    v32 = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(CD2DEffect *))(*(_QWORD *)v6 + 16LL))(v6);
    if ( (int)CD2DContext::CreateD2DEffect((struct CD3DDevice *)((char *)v7 + 16), &CLSID_D2D12DAffineTransform, &v32) < 0
      || (v8 = v32, (int)CD2DEffect::GetID2DEffect(v32, &v35) < 0) )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      goto LABEL_17;
    }
    v9 = v33;
    v37 = 0LL;
    v32 = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(CD2DEffect *))(*(_QWORD *)v8 + 16LL))(v8);
    if ( (int)CD2DContext::CreateD2DEffect((struct CD3DDevice *)((char *)v9 + 16), &CLSID_D2D1Composite, &v32) < 0
      || (int)CD2DEffect::GetID2DEffect(v32, &v37) < 0 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      goto LABEL_16;
    }
    v10 = (CSystemMemoryBitmap *)(*a3)[2];
    v39 = 0LL;
    if ( (int)CMILCOMBaseT<IBitmapSource,IBitmapSource,CMilObjectDeleter>::InternalQueryInterface(
                v10,
                &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94,
                (void **)&v39) < 0 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
LABEL_15:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v39);
LABEL_16:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
LABEL_17:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
LABEL_45:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
      goto LABEL_46;
    }
    v38 = 0LL;
    if ( (int)CD2DContext::CreateBitmapFromWicBitmap((struct CD3DDevice *)((char *)v33 + 16), v39, &v38) < 0 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
LABEL_20:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v38);
      goto LABEL_15;
    }
    v11 = v34;
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct ID2D1Bitmap *, __int64))(*(_QWORD *)v34 + 112LL))(
      v34,
      0LL,
      v38,
      1LL);
    LODWORD(v36) = 0x40000000;
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, CGlobalDrawingContext **, int))(*(_QWORD *)v11 + 72LL))(
      v11,
      0LL,
      0LL,
      &v36,
      4);
    v44 = _xmm;
    (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v11 + 72LL))(
      v11,
      1LL,
      0LL,
      &v44,
      16);
    v12 = v11;
    v13 = v35;
    ID2D1Effect::SetInputEffect(v35, 0, v12);
    v44 = _xmm;
    v45 = 1077936128;
    v46 = 1065353216;
    (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v13 + 72LL))(
      v13,
      2LL,
      0LL,
      &v44,
      24);
    v14 = v37;
    ID2D1Effect::SetInputEffect(v37, 0, v13);
    (*(void (__fastcall **)(struct ID2D1Effect *, __int64, struct ID2D1Bitmap *, __int64))(*(_QWORD *)v14 + 112LL))(
      v14,
      1LL,
      v38,
      1LL);
    v15 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __m128 *))(*(_QWORD *)((*a3)[2] + 120LL) + 32LL))(
                       (*a3)[2] + 120LL,
                       &v43);
    v16 = v33;
    v48 = 0;
    v36 = 0LL;
    v17 = *v15;
    v18 = *((_QWORD *)v33 + 117);
    v43.m128_i32[0] = v17 + 6;
    v43.m128_i32[1] = HIDWORD(v17) + 6;
    *(_QWORD *)&v47 = v18;
    v50 = 0;
    v51 = 0;
    v41 = 87;
    v42 = 1LL;
    *((_QWORD *)&v47 + 1) = 4294967293LL;
    v49 = 0;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v36, v19, v20);
    DWORD2(v44) = 13;
    *(_QWORD *)&v44 = "Cursor Shadow";
    if ( (int)CD3DDevice::CreateRenderTargetBitmap(
                (__int64)v16,
                (const struct CResourceTag *)&v44,
                (const struct D2D_SIZE_U *)&v43,
                (struct PixelFormatInfo *)&v41,
                (struct RenderTargetInfo *)&v47,
                1,
                &v36) < 0 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
LABEL_23:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v36);
      goto LABEL_20;
    }
    v40 = 0LL;
    CDrawingContext::Create(&v40);
    v21 = v36;
    v22 = (*(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v36 + 144LL))(v36);
    v23 = v40;
    if ( (int)CDrawingContext::BeginFrame(
                (__int64)v40,
                (v22 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v22 >> 64),
                0LL,
                0LL,
                0,
                0LL) >= 0 )
    {
      v24 = v43.m128_i32[0];
      v43.m128_i32[0] = 0;
      BYTE8(v44) = 1;
      v25 = v43.m128_i32[1];
      v43.m128_i32[1] = 0;
      *(_QWORD *)&v44 = v23;
      v43.m128_f32[2] = (float)v24;
      v43.m128_f32[3] = (float)v25;
      if ( (int)CDrawingContext::PushGpuClipRectInternal((__int64)v23, 0LL, &v43, 1, 0) >= 0 )
      {
        v43.m128_u64[0] = (unsigned __int64)v23;
        v26 = (int (__fastcall **)(char *, __int128 *))*((_QWORD *)v23 + 2);
        v43.m128_i8[8] = 1;
        v47 = 0LL;
        if ( (*v26)((char *)v23 + 16, &v47) >= 0
          && (int)CDrawingContext::FillEffect(v23, v14, 0LL, 0LL, 0) >= 0
          && (int)CDrawingContext::FlushD2D(v23) >= 0 )
        {
          gsl::final_action__lambda_d9647b2e9e0a0cba02120464dc304150___::_final_action__lambda_d9647b2e9e0a0cba02120464dc304150___((__int64)&v43);
          gsl::final_action__lambda_21858384f40d571ee451d04104df5963___::_final_action__lambda_21858384f40d571ee451d04104df5963___((__int64)&v44);
          v27 = (CSystemMemoryBitmap *)operator new(0x98uLL);
          if ( v27 )
            v28 = CSystemMemoryBitmap::CSystemMemoryBitmap(v27);
          else
            v28 = 0LL;
          wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
            &v43,
            (__int64)v28);
          v29 = v43.m128_u64[0];
          if ( (int)CSystemMemoryBitmap::HrInit(
                      (void **)v43.m128_u64[0],
                      v24,
                      v25,
                      (const struct PixelFormatInfo *)&v41,
                      0) < 0
            || (v52 = 0LL,
                v53 = v24,
                v54 = v25,
                (*(int (__fastcall **)(CGlobalDrawingContext *, __int64 *, unsigned __int64, _QWORD, _DWORD))(*(_QWORD *)v21 + 128LL))(
                  v21,
                  &v52,
                  (v29 + 16) & -(__int64)(v29 != 0),
                  0LL,
                  0) < 0) )
          {
            *a2 = 0LL;
            a2[1] = 0LL;
          }
          else
          {
            std::make_shared<CCursorState::ShapeData,>(&v44);
            v30 = v44;
            *(_QWORD *)v44 = **a3;
            *(_DWORD *)(v30 + 8) = *((_DWORD *)*a3 + 2);
            *(_BYTE *)(v30 + 12) = *((_BYTE *)*a3 + 12);
            *(_BYTE *)(v30 + 13) = 1;
            wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
              (__int64 *)(v30 + 16),
              (__int64 *)&v43);
            *(_OWORD *)a2 = __PAIR128__(*((unsigned __int64 *)&v44 + 1), v30);
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v43);
          goto LABEL_26;
        }
        *a2 = 0LL;
        a2[1] = 0LL;
        gsl::final_action__lambda_d9647b2e9e0a0cba02120464dc304150___::_final_action__lambda_d9647b2e9e0a0cba02120464dc304150___((__int64)&v43);
      }
      else
      {
        *a2 = 0LL;
        a2[1] = 0LL;
      }
      gsl::final_action__lambda_21858384f40d571ee451d04104df5963___::_final_action__lambda_21858384f40d571ee451d04104df5963___((__int64)&v44);
    }
    else
    {
      *a2 = 0LL;
      a2[1] = 0LL;
    }
LABEL_26:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v40);
    goto LABEL_23;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
LABEL_46:
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v33);
  return a2;
}
