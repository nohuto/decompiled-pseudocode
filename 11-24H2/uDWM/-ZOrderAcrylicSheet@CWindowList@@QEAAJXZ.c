/*
 * XREFs of ?ZOrderAcrylicSheet@CWindowList@@QEAAJXZ @ 0x18007C5F4
 * Callers:
 *     ?OnSnapPreviewInsertAfterNotification@CWindowList@@AEAAJPEAUHWND__@@0@Z @ 0x180042974 (-OnSnapPreviewInsertAfterNotification@CWindowList@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ @ 0x18007C32C (-EnsureAcrylicSheet@CWindowList@@AEAAJXZ.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800F3C10 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180025CA0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18003340C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800434E0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowList::ZOrderAcrylicSheet(CWindowList *this)
{
  __int64 v1; // rdx
  CMILRefCountBase ***v3; // rbx
  struct CWindowData *WindowDataByHwnd; // rax
  CMILRefCountBase ***v5; // rax
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  int inserted; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_QWORD *)this + 87);
  v3 = *(CMILRefCountBase ****)(v1 + 440);
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, *(HWND *)(v1 + 664));
  if ( WindowDataByHwnd )
  {
    v5 = (CMILRefCountBase ***)*((_QWORD *)WindowDataByHwnd + 55);
    if ( v5 )
      v3 = v5;
  }
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *(_QWORD *)(*((_QWORD *)this + 87) + 136LL));
  inserted = VisualCollection::InsertRelative(
               (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 144),
               *((CMILRefCountBase ****)this + 67),
               v3,
               0);
  v8 = inserted;
  if ( inserted >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x202F,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)inserted,
    v10);
  return v8;
}
