/*
 * XREFs of ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800BA640
 * Callers:
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180061AA0 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180171F24 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1802280F0 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CBlurredWallpaperBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180293580 (-GetBrushParameters@CBlurredWallpaperBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBVIBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295B10 (-GetBVIBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1802A2CB0 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@_N@Z @ 0x1800BA7D0 (--0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::CreateWithTextureTransform(__int64 a1, __int16 *a2, __int64 a3, __int64 *a4)
{
  unsigned int v8; // edi
  _DWORD *Value; // rbx
  int v10; // edx
  _QWORD *v11; // rax
  HANDLE ProcessHeap; // rax
  __int64 v13; // rax
  CThreadContext *v15; // rax
  CThreadContext *v16; // rax
  __int16 v17; // [rsp+30h] [rbp-28h] BYREF
  char v18; // [rsp+32h] [rbp-26h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  v8 = 0;
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v15 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v15 || (v16 = CThreadContext::CThreadContext(v15), (Value = v16) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v16);
  }
  v10 = Value[81];
  v11 = 0LL;
  if ( v10 )
  {
    v11 = (_QWORD *)*((_QWORD *)Value + 41);
    *((_QWORD *)Value + 41) = *v11;
    Value[81] = v10 - 1;
  }
  if ( !v11 )
  {
    ProcessHeap = GetProcessHeap();
    v11 = HeapAlloc(ProcessHeap, 0, 0x98uLL);
    if ( !v11 )
    {
      *a4 = 0LL;
      goto LABEL_12;
    }
  }
  v17 = *a2;
  v18 = *((_BYTE *)a2 + 2);
  v13 = CSurfaceDrawListBrush::CSurfaceDrawListBrush(v11, a1, &v17, a3, 0);
  *a4 = v13;
  if ( !v13 )
  {
LABEL_12:
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x3Au, 0LL);
  }
  return v8;
}
