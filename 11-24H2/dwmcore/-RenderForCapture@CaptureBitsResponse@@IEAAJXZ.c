/*
 * XREFs of ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1800615F8
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180060C58 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x18000C958 (-Create@CDrawingContext@@SAXPEAPEAV1@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180056D30 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x180061A30 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800992D8 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800AA280 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800AB7C8 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800CF2C0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800D5FC8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x1800FB0F0 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B1054 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CaptureBitsResponse::RenderForCapture(CaptureBitsResponse *this)
{
  CDrawingContext *v1; // rbx
  int v3; // edi
  __int64 v4; // r14
  char v5; // r15
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  _QWORD *v8; // rcx
  struct Windows::Foundation::Numerics::float4x4 *v9; // r8
  bool v10; // al
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  struct CVisualTree *v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  CComposition *v18; // rcx
  unsigned int v20; // eax
  __int64 v21; // rax
  struct CDrawingContext *v22; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v23; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+68h] [rbp-A0h]
  __int128 v25; // [rsp+78h] [rbp-90h]
  __int128 v26; // [rsp+88h] [rbp-80h]
  int v27; // [rsp+98h] [rbp-70h]
  _OWORD v28[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v29; // [rsp+E8h] [rbp-20h]
  __int128 v30; // [rsp+F8h] [rbp-10h] BYREF
  int v31; // [rsp+108h] [rbp+0h]
  int v32; // [rsp+10Ch] [rbp+4h]
  __int128 v33; // [rsp+110h] [rbp+8h] BYREF

  v1 = 0LL;
  *(_QWORD *)&v30 = 0LL;
  v3 = 0;
  v23 = _xmm;
  v4 = 0LL;
  v25 = _xmm;
  v5 = 0;
  v24 = _xmm;
  v27 = 170;
  v33 = 0LL;
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 481));
  v26 = *(__int128 *)&_xmm.r;
  v7 = _mm_cvtsi32_si128(*((_DWORD *)this + 482));
  v8 = (_QWORD *)*((_QWORD *)this + 6);
  BYTE1(v27) = 41;
  DWORD2(v30) = _mm_cvtepi32_ps(v6).m128_u32[0];
  HIDWORD(v30) = _mm_cvtepi32_ps(v7).m128_u32[0];
  if ( !v8[9] )
    goto LABEL_15;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v8 + 184LL))(v8) )
    v4 = *((_QWORD *)this + 6);
  CComposition::ShowHideCursors(g_pComposition, 0);
  v5 = 1;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 478) - 1.0) & _xmm) >= 0.0000011920929 )
    CMILMatrix::Scale((CMILMatrix *)&v23, *((float *)this + 478), *((float *)this + 478), 1.0);
  CMILMatrix::Translate(
    (CMILMatrix *)&v23,
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 479)) ^ _xmm),
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 480)) ^ _xmm));
  v22 = 0LL;
  CDrawingContext::Create(&v22);
  *((_BYTE *)g_pComposition + 6466) = 1;
  v28[0] = v23;
  v28[1] = v24;
  v28[2] = v25;
  v28[3] = v26;
  v29 = v27;
  v10 = Windows::Foundation::Numerics::invert(
          (Windows::Foundation::Numerics *)v28,
          (const struct Windows::Foundation::Numerics::float4x4 *)v28,
          v9);
  LOWORD(v29) = v29 & 0xC003;
  if ( v10 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>(v28, &v30, &v33);
    v11 = (__int64 *)*((_QWORD *)this + 6);
    v12 = *v11;
    *((_QWORD *)&v30 + 1) = &v33;
    *(_QWORD *)&v30 = 1LL;
    (*(__int64 (__fastcall **)(__int64 *, __int128 *, char *))(v12 + 200))(v11, &v30, (char *)this + 72);
  }
  else
  {
    v33 = _xmm;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 144LL))(*((_QWORD *)this + 8));
  v1 = v22;
  v14 = CDrawingContext::BeginFrame(
          v22,
          (v13 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v13 >> 64),
          &v23,
          &_xmm,
          4,
          0LL);
  v3 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x19Fu, 0LL);
    goto LABEL_15;
  }
  ++dword_1803FA758;
  v15 = (struct CVisualTree *)*((_QWORD *)this + 6);
  v31 = 0;
  v32 = 0;
  v30 = v33;
  v3 = CDrawingContext::DrawVisualTree(v1, v15, 2, 0, 0LL);
  if ( v3 >= 0 )
  {
    if ( v4 )
    {
      v16 = *(_QWORD *)(v4 + 4488);
      if ( v16 )
      {
        v3 = CComposeTop::FullRender(v16, v1, &v23, &v33);
        if ( v3 < 0 )
        {
          v20 = 438;
          goto LABEL_22;
        }
      }
    }
    v17 = CDrawingContext::EndFrame((CD3DDevice **)v1);
    v3 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x1BBu, 0LL);
      goto LABEL_16;
    }
    if ( g_LockAndReadOffscreenTarget )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 144LL))(*((_QWORD *)this + 8));
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v21 + 112LL))(
        v21,
        ((unsigned __int64)v1 + 24) & -(__int64)(v1 != 0LL));
    }
LABEL_15:
    if ( !v5 )
      goto LABEL_17;
    goto LABEL_16;
  }
  v20 = 424;
LABEL_22:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, v20, 0LL);
  CDrawingContext::EndFrame((CD3DDevice **)v1);
LABEL_16:
  v18 = g_pComposition;
  *((_BYTE *)g_pComposition + 6466) = 0;
  CComposition::RestoreCursors(v18);
LABEL_17:
  if ( v1 )
    (*(void (__fastcall **)(CDrawingContext *))(*(_QWORD *)v1 + 16LL))(v1);
  return (unsigned int)v3;
}
