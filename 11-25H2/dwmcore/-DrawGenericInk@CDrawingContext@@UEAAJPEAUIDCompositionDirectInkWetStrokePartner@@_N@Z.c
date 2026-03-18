/*
 * XREFs of ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x180114A90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsIn3DMode@CDrawingContext@@QEBA_NXZ @ 0x18008135C (-IsIn3DMode@CDrawingContext@@QEBA_NXZ.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180081FD8 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?HasDeferredD2DLayers@CScopedClipStack@@QEBA_NXZ @ 0x1800DD5F8 (-HasDeferredD2DLayers@CScopedClipStack@@QEBA_NXZ.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x1800DD91C (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ @ 0x180114C70 (--1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ.c)
 *     ?DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@M_N@Z @ 0x180115010 (-DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartn.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawGenericInk(
        CDrawingContext *this,
        struct IDCompositionDirectInkWetStrokePartner *a2,
        bool a3)
{
  _DWORD *v3; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  float v10; // xmm0_4
  D2D1_PRIMITIVE_BLEND v11; // eax
  __int64 v12; // r11
  int v14; // r9d
  __int64 v15; // rax
  D2D1_PRIMITIVE_BLEND v16; // [rsp+20h] [rbp-60h]
  __int64 v17; // [rsp+40h] [rbp-40h] BYREF
  __int128 v18; // [rsp+48h] [rbp-38h] BYREF
  __int128 v19; // [rsp+58h] [rbp-28h] BYREF
  int v20; // [rsp+68h] [rbp-18h]
  int v21; // [rsp+6Ch] [rbp-14h]

  v17 = 0LL;
  v3 = (_DWORD *)((char *)this - 16);
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this - 16)) )
  {
    v8 = -2147467263;
    v14 = -2147467263;
    v16 = 783;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, v16, 0LL);
    goto LABEL_7;
  }
  if ( CScopedClipStack::HasDeferredD2DLayers((CDrawingContext *)((char *)this + 728)) )
  {
    v15 = *(_QWORD *)a2;
    v18 = 0LL;
    v7 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, __int128 *))(v15 + 32))(a2, &v18);
    v8 = v7;
    if ( v7 < 0 )
    {
      v16 = 791;
      goto LABEL_15;
    }
    v20 = 0;
    v21 = 0;
    v19 = v18;
    v7 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter(&v17, v3, (__int64)&v19, 0LL);
    v8 = v7;
    if ( v7 < 0 )
    {
      v16 = 793;
LABEL_15:
      v14 = v7;
      goto LABEL_9;
    }
  }
  v7 = (*(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)this + 112LL))(this);
  v8 = v7;
  if ( v7 < 0 )
  {
    v16 = 796;
    goto LABEL_15;
  }
  v9 = *((_DWORD *)this + 788);
  if ( v9 )
    v10 = *(float *)(*((_QWORD *)this + 393) + 4LL * (unsigned int)(v9 - 1));
  else
    v10 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v11 = (unsigned int)D2DPrimitiveBlendFromMilCompositingMode(*((_DWORD *)this + 58));
  v7 = CD2DContext::DrawGenericInk(
         (CD2DContext *)(v12 + 16),
         (const struct ID2DContextOwner *)(((unsigned __int64)this + 8) & -(__int64)(v3 != 0LL)),
         a2,
         (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 57) != 0),
         v11,
         v10,
         a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v16 = 803;
    goto LABEL_15;
  }
LABEL_7:
  CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v17);
  return v8;
}
