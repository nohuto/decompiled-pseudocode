/*
 * XREFs of ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B2B8
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006A920 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006B870 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18006C70C (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006DF60 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006FC50 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x1800D85C0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18013984C (--1CDrawingContext@@MEAA@XZ.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18013A760 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18013C510 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18013F440 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18014EFB0 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawListEntry@@PEAPEAVCDrawListPrimitive@@@Z @ 0x18019517C (-BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawLis.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801D4370 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180292780 (-GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800454A4 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18013A290 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     ??_ECReconstructableDrawListEntry_UVx2@@UEAAPEAXI@Z @ 0x18013B850 (--_ECReconstructableDrawListEntry_UVx2@@UEAAPEAXI@Z.c)
 *     ??_GCDrawListEntry@@MEAAPEAXI@Z @ 0x18013B9C0 (--_GCDrawListEntry@@MEAAPEAXI@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawListEntryBuilder::~CDrawListEntryBuilder(CDrawListEntryBuilder *this)
{
  __int64 *v1; // rsi
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 *v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rbx
  int v12; // ebp
  int v13; // ebp
  CDrawListCache *(__fastcall *v14)(CDrawListCache *, char); // rax
  CDrawListEntryBuilder *v15; // rbx
  __int64 v16; // rax
  CDrawListEntryBuilder *v17; // rbx
  __int64 v18; // rax
  CDrawListEntryBuilder *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v26; // rax
  HANDLE v27; // rax
  HANDLE v28; // rax
  int v29; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 112);
  v3 = (_QWORD *)*((_QWORD *)this + 14);
  v4 = (_QWORD *)*((_QWORD *)this + 15);
  while ( v3 != v4 )
  {
    if ( *v3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 8LL))(*v3);
      *v3 = 0LL;
    }
    ++v3;
  }
  v5 = (v1[1] - *v1) >> 3;
  if ( v5 )
    v1[1] -= 8 * v5;
  *((_BYTE *)this + 4488) = 0;
  v6 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = 3LL;
  v8 = (__int64 *)((char *)this + 88);
  v9 = 3LL;
  do
  {
    v10 = *v8;
    *v8 = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    ++v8;
    --v9;
  }
  while ( v9 );
  v11 = (volatile signed __int32 *)*((_QWORD *)this + 560);
  if ( v11 )
  {
    v12 = _InterlockedDecrement(v11 + 2);
    if ( v12 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v29);
    if ( !v12 )
    {
      if ( _InterlockedAdd(v11 + 2, 1u) <= 0 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v29);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 24LL))(v11);
      v13 = _InterlockedDecrement(v11 + 2);
      if ( v13 < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v29);
      if ( !v13 )
      {
        if ( _InterlockedDecrement(v11 + 2) < -1 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v29);
        v14 = *(CDrawListCache *(__fastcall **)(CDrawListCache *, char))(*(_QWORD *)v11 + 16LL);
        if ( (char *)v14 == (char *)CReconstructableDrawListEntry_UVx2::`vector deleting destructor' )
        {
          CReconstructableDrawListEntry_UVx2::`vector deleting destructor'(
            (CReconstructableDrawListEntry_UVx2 *)v11,
            1u);
        }
        else if ( (char *)v14 == (char *)CDrawListEntry::`scalar deleting destructor' )
        {
          CDrawListEntry::`scalar deleting destructor'((CDrawListEntry *)v11, 1u);
        }
        else if ( v14 == CDrawListCache::`scalar deleting destructor' )
        {
          CDrawListCache::`scalar deleting destructor'((CDrawListCache *)v11, 1);
        }
        else
        {
          v14((CDrawListCache *)v11, 1);
        }
      }
    }
  }
  v15 = (CDrawListEntryBuilder *)*((_QWORD *)this + 511);
  v16 = (__int64)(*((_QWORD *)this + 512) - (_QWORD)v15) >> 1;
  if ( v16 )
    *((_QWORD *)this + 512) -= 2 * v16;
  *((_QWORD *)this + 511) = 0LL;
  if ( v15 == (CDrawListEntryBuilder *)((char *)this + 4112) )
    v15 = 0LL;
  if ( v15 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v15);
  }
  v17 = (CDrawListEntryBuilder *)*((_QWORD *)this + 266);
  v18 = (__int64)(*((_QWORD *)this + 267) - (_QWORD)v17) >> 4;
  if ( v18 )
    *((_QWORD *)this + 267) -= 16 * v18;
  *((_QWORD *)this + 266) = 0LL;
  if ( v17 == (CDrawListEntryBuilder *)((char *)this + 2160) )
    v17 = 0LL;
  if ( v17 )
  {
    v26 = GetProcessHeap();
    HeapFree(v26, 0, v17);
  }
  v19 = (CDrawListEntryBuilder *)*((_QWORD *)this + 22);
  v20 = (__int64)(*((_QWORD *)this + 23) - (_QWORD)v19) >> 4;
  if ( v20 )
    *((_QWORD *)this + 23) -= 16 * v20;
  *((_QWORD *)this + 22) = 0LL;
  if ( v19 == (CDrawListEntryBuilder *)((char *)this + 208) )
    v19 = 0LL;
  if ( v19 )
  {
    v27 = GetProcessHeap();
    HeapFree(v27, 0, v19);
  }
  v21 = *((_QWORD *)this + 21);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v22 = (__int64 *)*v1;
  v23 = (v1[1] - *v1) >> 3;
  if ( v23 )
    v1[1] -= 8 * v23;
  *v1 = 0LL;
  if ( v22 == v1 + 3 )
    v22 = 0LL;
  if ( v22 )
  {
    v28 = GetProcessHeap();
    HeapFree(v28, 0, v22);
  }
  do
  {
    wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(--v1);
    --v7;
  }
  while ( v7 );
  v24 = *((_QWORD *)this + 10);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
}
