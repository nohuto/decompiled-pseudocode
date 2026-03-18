/*
 * XREFs of ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x18025DBAC
 * Callers:
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x18025D8A0 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 * Callees:
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006B728 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUD2D_RECT_F@@$0-0@gsl@@AEBU_D.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingContext@@@Z @ 0x18025DB0C (-DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingCon.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDisplayDebugFrameCounter::DisplayText(
        CDisplayDebugFrameCounter *this,
        unsigned int a2,
        unsigned int a3,
        struct CDrawingContext *a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  struct _D3DCOLORVALUE v8; // xmm8
  float v12; // xmm3_4
  float v13; // xmm6_4
  struct D2D_RECT_F v14; // xmm1
  bool v15; // zf
  int Factory; // eax
  unsigned int v17; // ebx
  _QWORD *v18; // r15
  int v19; // eax
  int v20; // eax
  int v21; // eax
  struct D2D_RECT_F v23; // [rsp+58h] [rbp-A1h] BYREF
  __int128 v24; // [rsp+68h] [rbp-91h] BYREF
  struct _D3DCOLORVALUE v25; // [rsp+78h] [rbp-81h] BYREF
  struct D2D_RECT_F v26; // [rsp+88h] [rbp-71h] BYREF
  struct D2D_RECT_F v27; // [rsp+98h] [rbp-61h] BYREF

  *(struct _D3DCOLORVALUE *)&v8.r = (struct _D3DCOLORVALUE)_xmm;
  v24 = 0LL;
  if ( a6 == 1 )
    v12 = (float)((float)(*(float *)(a5 + 12) * 0.25) * 3.0) - 60.0;
  else
    v12 = *(float *)(a5 + 8) - 120.0;
  v23.top = 0.0;
  v23.bottom = 24.0;
  v13 = v12 + 0.0;
  v23.left = v12 + 20.0;
  v23.right = (float)(v12 + 20.0) + 40.0;
  v14 = v23;
  v23.top = 0.0;
  v15 = *(_BYTE *)this == 0;
  v23.left = (float)(v12 + 40.0) + 40.0;
  v23.bottom = 24.0;
  v26 = v14;
  v23.right = v23.left + 40.0;
  v27 = v23;
  if ( v15 )
  {
    Factory = DWriteCreateFactory(0LL, &GUID_b859ee5a_d838_4b5b_a2e8_1adc7d93db48, (char *)this + 8);
    v17 = Factory;
    if ( Factory < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Factory, 0x97u, 0LL);
      return v17;
    }
    v18 = (_QWORD *)((char *)this + 16);
    v19 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, __int64, _DWORD, int, _DWORD, void *, char *))(**((_QWORD **)this + 1) + 120LL))(
            *((_QWORD *)this + 1),
            L"Lucida Console",
            0LL,
            400LL,
            0,
            5,
            LODWORD(FLOAT_20_0),
            &unk_180381440,
            (char *)this + 16);
    v17 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0xA6u, 0LL);
      return v17;
    }
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v18 + 24LL))(*v18, 2LL);
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v18 + 32LL))(*v18, 2LL);
    *(_BYTE *)this = 1;
  }
  *(_QWORD *)&v23.right = &v24;
  *(_QWORD *)&v24 = LODWORD(v13);
  *(struct _D3DCOLORVALUE *)&v25.r = *(const struct _D3DCOLORVALUE *)&_xmm.r;
  HIDWORD(v24) = 1103101952;
  *((float *)&v24 + 2) = v12 + 120.0;
  *(_QWORD *)&v23.left = 1LL;
  CDrawingContext::FillRectanglesWithSolidColor(a4, (__int64)&v23, (__int64)&v25);
  if ( a2 <= 0x1E )
    *(struct _D3DCOLORVALUE *)&v8.r = (struct _D3DCOLORVALUE)_xmm;
  *(struct _D3DCOLORVALUE *)&v25.r = *(struct _D3DCOLORVALUE *)&v8.r;
  v20 = CDisplayDebugFrameCounter::DisplayNumber((struct IDWriteTextFormat **)this, a2, &v25, &v26, a4);
  v17 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0xBFu, 0LL);
  }
  else
  {
    *(struct _D3DCOLORVALUE *)&v25.r = (struct _D3DCOLORVALUE)_xmm;
    v21 = CDisplayDebugFrameCounter::DisplayNumber((struct IDWriteTextFormat **)this, a3, &v25, &v27, a4);
    v17 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0xC2u, 0LL);
    }
    else
    {
      *(_DWORD *)(a7 + 4) = 0;
      *(float *)a7 = v13;
      *(float *)(a7 + 8) = v12 + 120.0;
      *(_DWORD *)(a7 + 12) = 1103101952;
    }
  }
  return v17;
}
