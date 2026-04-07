/*
 * XREFs of ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ @ 0x18007C32C
 * Callers:
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x1800EE11C (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 *     ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800F0910 (-IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800F1860 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?reset@?$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004BB08 (-reset@-$com_ptr_t@VCSolidRectangleInstruction@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x18007C3E0 (-Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z.c)
 *     ?ZOrderAcrylicSheet@CWindowList@@QEAAJXZ @ 0x18007C5F4 (-ZOrderAcrylicSheet@CWindowList@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowList::EnsureAcrylicSheet(CWindowList *this)
{
  CBaseObject **v1; // rdi
  CContainerVisual **v3; // rcx
  int v4; // edi
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (CBaseObject **)((char *)this + 536);
  v3 = (CContainerVisual **)*((_QWORD *)this + 67);
  if ( v3 )
  {
    v4 = CContainerVisual::RemoveChild(v3[3], (struct CVisual *)v3);
    if ( v4 < 0 )
    {
      v5 = 3521LL;
      goto LABEL_4;
    }
  }
  else
  {
    wil::com_ptr_t<CSolidRectangleInstruction,wil::err_returncode_policy>::reset(v1);
    v4 = CAcrylicSheet::Create(*((struct CWindowData **)this + 87), *((_BYTE *)this + 635), v1);
    if ( v4 < 0 )
    {
      v5 = 3516LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v4,
        v9);
      return (unsigned int)v4;
    }
  }
  v7 = CWindowList::ZOrderAcrylicSheet(this);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDC4,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v7,
    v9);
  return v8;
}
