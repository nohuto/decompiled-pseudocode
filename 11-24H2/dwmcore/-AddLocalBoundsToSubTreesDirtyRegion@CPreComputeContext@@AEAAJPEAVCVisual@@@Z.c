/*
 * XREFs of ?AddLocalBoundsToSubTreesDirtyRegion@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x180020830
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A5180 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRectToDirtyRegion@SubTreeContext@CPreComputeContext@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x180020930 (-AddRectToDirtyRegion@SubTreeContext@CPreComputeContext@@QEAAJAEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x180020C20 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPreComputeContext::AddLocalBoundsToSubTreesDirtyRegion(
        CPreComputeContext *this,
        struct CVisual *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 (__fastcall *v5)(CVisual *, struct CPreComputeContext::SubTreeContext *); // rax
  __int64 Bounds; // rax
  int v7; // eax
  int v8; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)this;
  v3 = *((_QWORD *)this + 1);
  while ( 1 )
  {
    if ( v2 == v3 )
      return 0LL;
    if ( *(_DWORD *)(v2 + 340) || *(_BYTE *)(*(_QWORD *)(v2 + 320) + 2324LL) )
      goto LABEL_9;
    v5 = *(__int64 (__fastcall **)(CVisual *, struct CPreComputeContext::SubTreeContext *))(*(_QWORD *)a2 + 216LL);
    if ( v5 == CVisual::AddBoundsToDirtyRegion )
      break;
    v8 = v5(a2, (struct CPreComputeContext::SubTreeContext *)v2);
LABEL_8:
    if ( v8 < 0 )
      goto LABEL_12;
LABEL_9:
    v2 += 352LL;
  }
  Bounds = CVisual::GetBounds(a2, *(_QWORD *)(v2 + 328));
  v7 = CPreComputeContext::SubTreeContext::AddRectToDirtyRegion(v2, Bounds, a2);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v8 = 0;
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC9,
    (int)"onecoreuap\\windows\\DWM\\dwmcore\\resources\\Visual.h",
    (const char *)(unsigned int)v7);
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4F0,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
