/*
 * XREFs of ?AdjustNonClientBackgroundTreePosition@CTopLevelWindow@@AEAAJXZ @ 0x18006A064
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180029CA4 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18002576C (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::AdjustNonClientBackgroundTreePosition(CTopLevelWindow *this)
{
  CContainerVisual *v2; // rcx
  struct CVisual *v3; // rdx
  int v4; // edi
  struct CVisual **i; // rax
  struct CVisual *v6; // r8
  int inserted; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  _QWORD v11[3]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = (CContainerVisual *)*((_QWORD *)this + 31);
  v3 = (struct CVisual *)*((_QWORD *)this + 34);
  if ( **((struct CVisual ***)v2 + 19) != v3 )
  {
    if ( *((_DWORD *)this + 200) == 4 )
    {
      v4 = CContainerVisual::RemoveChild(v2, v3);
      if ( v4 < 0 )
      {
        v10 = 6975LL;
        goto LABEL_17;
      }
      inserted = CContainerVisual::InsertChildAfter(
                   *((CContainerVisual **)this + 31),
                   *((struct CVisual **)this + 34),
                   0LL);
      if ( inserted < 0 )
      {
        v9 = 6976LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
          (const char *)(unsigned int)inserted,
          v11[0]);
        return (unsigned int)inserted;
      }
    }
    return 0LL;
  }
  if ( *((_DWORD *)this + 200) == 4 )
    return 0LL;
  v4 = CContainerVisual::RemoveChild(v2, v3);
  if ( v4 >= 0 )
  {
    v11[0] = *((_QWORD *)this + 36);
    v11[1] = *((_QWORD *)this + 32);
    v11[2] = *((_QWORD *)this + 35);
    for ( i = (struct CVisual **)v11; i != (struct CVisual **)&v12; ++i )
    {
      v6 = *i;
      if ( *i )
        goto LABEL_9;
    }
    v6 = 0LL;
LABEL_9:
    inserted = CContainerVisual::InsertChildAfter(
                 *((CContainerVisual **)this + 31),
                 *((struct CVisual **)this + 34),
                 v6);
    if ( inserted >= 0 )
      return 0LL;
    v9 = 6970LL;
    goto LABEL_15;
  }
  v10 = 6968LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)v4,
    v11[0]);
  return (unsigned int)v4;
}
