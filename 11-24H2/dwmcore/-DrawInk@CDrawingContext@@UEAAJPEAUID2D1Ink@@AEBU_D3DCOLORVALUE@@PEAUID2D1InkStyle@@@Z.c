/*
 * XREFs of ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x180264760
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@QEBA_NXZ @ 0x1800F627C (-IsIn3DMode@CDrawingContext@@QEBA_NXZ.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800F7058 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?HasDeferredD2DLayers@CScopedClipStack@@QEBA_NXZ @ 0x1800FD6F8 (-HasDeferredD2DLayers@CScopedClipStack@@QEBA_NXZ.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x1800FDA1C (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 *     ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ @ 0x1800FDC20 (--1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1802BB810 (-DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawInk(
        CDrawingContext *this,
        struct ID2D1Ink *a2,
        const struct _D3DCOLORVALUE *a3,
        struct ID2D1InkStyle *a4)
{
  char *v4; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  float v13; // xmm1_4
  int v14; // ecx
  enum D2D1_PRIMITIVE_BLEND v15; // eax
  __int64 v16; // r11
  unsigned int v18; // [rsp+20h] [rbp-49h]
  __int64 v19; // [rsp+40h] [rbp-29h] BYREF
  __int128 v20; // [rsp+48h] [rbp-21h] BYREF
  struct _D3DCOLORVALUE v21; // [rsp+58h] [rbp-11h] BYREF
  __int128 v22; // [rsp+68h] [rbp-1h] BYREF
  int v23; // [rsp+78h] [rbp+Fh]
  int v24; // [rsp+7Ch] [rbp+13h]

  v19 = 0LL;
  v4 = (char *)this - 16;
  *(struct _D3DCOLORVALUE *)&v21.r = 0LL;
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this - 16)) )
  {
    v9 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467263, 0x2E6u, 0LL);
    goto LABEL_16;
  }
  if ( CScopedClipStack::HasDeferredD2DLayers((CDrawingContext *)((char *)this + 728)) )
  {
    v10 = *(_QWORD *)a2;
    v20 = 0LL;
    v11 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, struct ID2D1InkStyle *, _QWORD, __int128 *))(v10 + 104))(
            a2,
            a4,
            0LL,
            &v20);
    v9 = v11;
    if ( v11 < 0 )
    {
      v18 = 750;
      goto LABEL_15;
    }
    v23 = 0;
    v24 = 0;
    v22 = v20;
    v11 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter(&v19, (__int64)v4, (__int64)&v22);
    v9 = v11;
    if ( v11 < 0 )
    {
      v18 = 752;
LABEL_15:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v18, 0LL);
      goto LABEL_16;
    }
  }
  v11 = (*(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)this + 112LL))(this);
  v9 = v11;
  if ( v11 < 0 )
  {
    v18 = 755;
    goto LABEL_15;
  }
  v12 = *((_DWORD *)this + 788);
  *(struct _D3DCOLORVALUE *)&v21.r = *(struct _D3DCOLORVALUE *)&a3->r;
  if ( v12 )
    v13 = *(float *)(*((_QWORD *)this + 393) + 4LL * (unsigned int)(v12 - 1));
  else
    v13 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v14 = *((_DWORD *)this + 58);
  v21.a = v21.a * v13;
  v15 = (unsigned int)D2DPrimitiveBlendFromMilCompositingMode(v14);
  v11 = CD2DContext::DrawInk(
          (CD2DContext *)(v16 + 16),
          (const struct ID2DContextOwner *)(((unsigned __int64)this + 8) & -(__int64)(v4 != 0LL)),
          a2,
          &v21,
          a4,
          (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 57) != 0),
          v15);
  v9 = v11;
  if ( v11 < 0 )
  {
    v18 = 766;
    goto LABEL_15;
  }
LABEL_16:
  CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v19);
  return v9;
}
