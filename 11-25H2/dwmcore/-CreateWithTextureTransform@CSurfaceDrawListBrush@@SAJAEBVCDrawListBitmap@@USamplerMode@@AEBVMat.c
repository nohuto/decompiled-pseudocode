/*
 * XREFs of ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x18019C4F0
 * Callers:
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x1800441B8 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x18019BE10 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18019C790 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180233A30 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CBlurredWallpaperBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18029EED0 (-GetBrushParameters@CBlurredWallpaperBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1802AC7D0 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::CreateWithTextureTransform(__int64 a1, __int16 *a2, _DWORD *a3, _QWORD *a4)
{
  unsigned int v5; // ebp
  _DWORD *Value; // rdi
  int v10; // ecx
  char *v11; // rbx
  HANDLE ProcessHeap; // rax
  __int16 v13; // di
  char v14; // r15
  CMILRefCountImpl *v15; // rcx
  void (*v16)(void); // rax
  __int64 v17; // rcx
  CThreadContext *v19; // rax
  CThreadContext *v20; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]

  v5 = 0;
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v19 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v19 || (v20 = CThreadContext::CThreadContext(v19), (Value = v20) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v20);
  }
  v10 = Value[81];
  v11 = 0LL;
  if ( v10 )
  {
    v11 = (char *)*((_QWORD *)Value + 41);
    *((_QWORD *)Value + 41) = *(_QWORD *)v11;
    Value[81] = v10 - 1;
  }
  if ( v11 || (ProcessHeap = GetProcessHeap(), (v11 = (char *)HeapAlloc(ProcessHeap, 0, 0x98uLL)) != 0LL) )
  {
    v13 = *a2;
    v14 = *((_BYTE *)a2 + 2);
    *((_QWORD *)v11 + 1) = 1065353216LL;
    *((_DWORD *)v11 + 4) = 0;
    *(_QWORD *)(v11 + 20) = 1065353216LL;
    *((_DWORD *)v11 + 7) = 0;
    v11[52] = 0;
    *(_QWORD *)v11 = &CSurfaceDrawListBrush::`vftable';
    v15 = *(CMILRefCountImpl **)a1;
    *((_QWORD *)v11 + 7) = *(_QWORD *)a1;
    if ( v15 )
    {
      v16 = *(void (**)(void))(*(_QWORD *)v15 + 8LL);
      if ( (char *)v16 == (char *)CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference(v15);
      else
        v16();
    }
    v17 = *(_QWORD *)(a1 + 8);
    *((_QWORD *)v11 + 8) = v17;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v11[72] = *(_BYTE *)(a1 + 16);
    *((_WORD *)v11 + 40) = v13;
    v11[82] = v14;
    *((_DWORD *)v11 + 21) = *a3;
    *((_DWORD *)v11 + 22) = a3[1];
    *((_DWORD *)v11 + 23) = a3[2];
    *((_DWORD *)v11 + 24) = a3[3];
    *((_DWORD *)v11 + 25) = a3[4];
    *((_DWORD *)v11 + 26) = a3[5];
    *((_DWORD *)v11 + 27) = a3[6];
    *((_DWORD *)v11 + 28) = a3[7];
    *((_DWORD *)v11 + 29) = a3[8];
    *((_DWORD *)v11 + 36) = 0;
    *(_OWORD *)(v11 + 120) = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *a4 = v11;
  }
  else
  {
    v5 = -2147024882;
    *a4 = 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x3Au, 0LL);
  }
  return v5;
}
