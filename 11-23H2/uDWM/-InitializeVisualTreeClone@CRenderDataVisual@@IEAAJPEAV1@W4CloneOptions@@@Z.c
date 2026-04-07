/*
 * XREFs of ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800021A8
 * Callers:
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180001FF0 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180002070 (-CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800B6458 (-InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18000C2A0 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180045B50 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CRenderDataVisual::InitializeVisualTreeClone(__int64 a1, CRenderDataVisual *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v8; // eax
  unsigned int v9; // esi
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CVisual::InitializeVisualTreeClone();
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAE,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
      (const char *)(unsigned int)v4,
      v10);
    return v5;
  }
  else
  {
    v6 = 0LL;
    if ( *(_DWORD *)(a1 + 280) )
    {
      while ( 1 )
      {
        v8 = CRenderDataVisual::AddInstruction(a2, *(struct CRenderDataInstruction **)(*(_QWORD *)(a1 + 256) + 8 * v6));
        v9 = v8;
        if ( v8 < 0 )
          break;
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 280) )
          return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB6,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
        (const char *)(unsigned int)v8,
        v10);
      return v9;
    }
    else
    {
      return 0LL;
    }
  }
}
