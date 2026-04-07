/*
 * XREFs of ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800203D8
 * Callers:
 *     ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180020320 (-CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18003F680 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BC304 (-InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z @ 0x180020898 (-InitializeVisualTreeClone@CContainerVisual@@QEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180024618 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CRenderDataVisual::InitializeVisualTreeClone(__int64 a1, CRenderDataVisual *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 i; // rbx
  int v8; // eax
  unsigned int v9; // edi
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CContainerVisual::InitializeVisualTreeClone();
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
      (const char *)(unsigned int)v4,
      v10);
    return v5;
  }
  else
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= *(_DWORD *)(a1 + 232) )
        return 0LL;
      v8 = CRenderDataVisual::AddInstruction(a2, *(struct CRenderDataInstruction **)(*(_QWORD *)(a1 + 208) + 8 * i));
      v9 = v8;
      if ( v8 < 0 )
        break;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
      (const char *)(unsigned int)v8,
      v10);
    return v9;
  }
}
