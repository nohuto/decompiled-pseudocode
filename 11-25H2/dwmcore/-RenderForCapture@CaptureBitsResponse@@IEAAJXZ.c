/*
 * XREFs of ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18007609C
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18003ECAC (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x18000D28C (-Create@CDrawingContext@@SAXPEAPEAV1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18002C060 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x180054628 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075C7C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x1800764D0 (-ShowHideCursors@CComposition@@IEAAX_N@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x180087DA0 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800C717C (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800D9780 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18012187C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z @ 0x180161320 (-invert@Numerics@Foundation@Windows@@YA_NAEBUfloat4x4@123@PEAU4123@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CaptureBitsResponse::RenderForCapture(CaptureBitsResponse *this)
{
  CDrawingContext *v1; // rbx
  int v3; // edi
  COcclusionContext *v4; // r12
  __int64 v5; // r14
  char v6; // r15
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  _QWORD *v9; // rcx
  struct Windows::Foundation::Numerics::float4x4 *v10; // r8
  bool v11; // al
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // eax
  CVisualTree *v16; // rdx
  CComposeTop *v17; // rcx
  int v18; // eax
  CComposition *v19; // rcx
  unsigned int v21; // eax
  __int64 v22; // rax
  struct CDrawingContext *v23; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v24; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v25; // [rsp+68h] [rbp-A0h]
  __int128 v26; // [rsp+78h] [rbp-90h]
  __int128 v27; // [rsp+88h] [rbp-80h]
  int v28; // [rsp+98h] [rbp-70h]
  _OWORD v29[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v30; // [rsp+E8h] [rbp-20h]
  __int128 v31; // [rsp+F8h] [rbp-10h] BYREF
  int v32; // [rsp+108h] [rbp+0h]
  int v33; // [rsp+10Ch] [rbp+4h]
  __int128 v34; // [rsp+110h] [rbp+8h] BYREF

  v1 = 0LL;
  *(_QWORD *)&v31 = 0LL;
  v3 = 0;
  v24 = _xmm;
  v4 = 0LL;
  v5 = 0LL;
  v26 = _xmm;
  v6 = 0;
  v25 = _xmm;
  v28 = 170;
  v34 = 0LL;
  v7 = _mm_cvtsi32_si128(*((_DWORD *)this + 481));
  v27 = *(__int128 *)&_xmm.r;
  v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 482));
  v9 = (_QWORD *)*((_QWORD *)this + 6);
  BYTE1(v28) = 41;
  DWORD2(v31) = _mm_cvtepi32_ps(v7).m128_u32[0];
  HIDWORD(v31) = _mm_cvtepi32_ps(v8).m128_u32[0];
  if ( !v9[9] )
    goto LABEL_16;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v9 + 184LL))(v9) )
    v5 = *((_QWORD *)this + 6);
  CComposition::ShowHideCursors(g_pComposition, 0);
  v6 = 1;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 478) - 1.0) & _xmm) >= 0.0000011920929 )
    CMILMatrix::Scale((CMILMatrix *)&v24, *((float *)this + 478), *((float *)this + 478), 1.0);
  CMILMatrix::Translate(
    (CMILMatrix *)&v24,
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 479)) ^ _xmm),
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((int *)this + 480)) ^ _xmm));
  v23 = 0LL;
  CDrawingContext::Create(&v23);
  *((_BYTE *)g_pComposition + 6490) = 1;
  v29[0] = v24;
  v29[1] = v25;
  v29[2] = v26;
  v29[3] = v27;
  v30 = v28;
  v11 = Windows::Foundation::Numerics::invert(
          (Windows::Foundation::Numerics *)v29,
          (const struct Windows::Foundation::Numerics::float4x4 *)v29,
          v10);
  LOWORD(v30) = v30 & 0xC003;
  if ( v11 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>(v29, &v31, &v34);
    v12 = (__int64 *)*((_QWORD *)this + 6);
    v4 = (CaptureBitsResponse *)((char *)this + 72);
    v13 = *v12;
    *((_QWORD *)&v31 + 1) = &v34;
    *(_QWORD *)&v31 = 1LL;
    if ( (*(int (__fastcall **)(__int64 *, __int128 *, char *))(v13 + 200))(v12, &v31, (char *)this + 72) < 0 )
      v4 = 0LL;
  }
  else
  {
    v34 = _xmm;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 144LL))(*((_QWORD *)this + 8));
  v1 = v23;
  v15 = CDrawingContext::BeginFrame(
          v23,
          (v14 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v14 >> 64),
          &v24,
          &_xmm,
          4,
          0LL);
  v3 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x19Fu, 0LL);
    goto LABEL_16;
  }
  ++dword_1804067B8;
  v16 = (CVisualTree *)*((_QWORD *)this + 6);
  v32 = 0;
  v33 = 0;
  v31 = v34;
  v3 = CDrawingContext::DrawVisualTree(v1, v16, (__int64)&v31, v4, 2, 0, 0LL);
  if ( v3 >= 0 )
  {
    if ( v5 )
    {
      v17 = *(CComposeTop **)(v5 + 4488);
      if ( v17 )
      {
        v3 = CComposeTop::FullRender(v17, (__int64)v1, (__int64)&v24);
        if ( v3 < 0 )
        {
          v21 = 438;
          goto LABEL_23;
        }
      }
    }
    v18 = CDrawingContext::EndFrame(v1);
    v3 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x1BBu, 0LL);
      goto LABEL_17;
    }
    if ( g_LockAndReadOffscreenTarget )
    {
      v22 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 144LL))(*((_QWORD *)this + 8));
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v22 + 112LL))(
        v22,
        ((unsigned __int64)v1 + 24) & -(__int64)(v1 != 0LL));
    }
LABEL_16:
    if ( !v6 )
      goto LABEL_18;
    goto LABEL_17;
  }
  v21 = 424;
LABEL_23:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, v21, 0LL);
  CDrawingContext::EndFrame(v1);
LABEL_17:
  v19 = g_pComposition;
  *((_BYTE *)g_pComposition + 6490) = 0;
  CComposition::RestoreCursors(v19);
LABEL_18:
  if ( v1 )
    (*(void (__fastcall **)(CDrawingContext *))(*(_QWORD *)v1 + 16LL))(v1);
  return (unsigned int)v3;
}
