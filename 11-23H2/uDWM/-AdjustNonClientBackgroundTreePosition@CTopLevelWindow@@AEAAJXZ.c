/*
 * XREFs of ?AdjustNonClientBackgroundTreePosition@CTopLevelWindow@@AEAAJXZ @ 0x18001AD98
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18003B874 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::AdjustNonClientBackgroundTreePosition(CTopLevelWindow *this)
{
  __int64 v2; // rcx
  struct CVisual *v3; // rdx
  int v5; // edi
  struct CVisual **v6; // rax
  struct CVisual *v7; // r8
  int inserted; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+20h] [rbp-38h]
  _QWORD v13[3]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+48h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *((_QWORD *)this + 36);
  v3 = (struct CVisual *)*((_QWORD *)this + 39);
  if ( **(struct CVisual ***)(v2 + 48) != v3 )
  {
    if ( *((_DWORD *)this + 210) != 4 )
      return 0LL;
    v5 = VisualCollection::Remove((VisualCollection *)(v2 + 32), v3);
    if ( v5 >= 0 )
    {
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*((_QWORD *)this + 36) + 32LL),
                   *((struct CVisual **)this + 39),
                   0LL,
                   1,
                   v11);
      if ( inserted >= 0 )
        return 0LL;
      v10 = 6863LL;
      goto LABEL_13;
    }
    v9 = 6862LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
      (const char *)(unsigned int)v5,
      v11);
    return (unsigned int)v5;
  }
  if ( *((_DWORD *)this + 210) == 4 )
    return 0LL;
  v5 = VisualCollection::Remove((VisualCollection *)(v2 + 32), v3);
  if ( v5 < 0 )
  {
    v9 = 6855LL;
    goto LABEL_12;
  }
  v13[0] = *((_QWORD *)this + 41);
  v13[1] = *((_QWORD *)this + 37);
  v13[2] = *((_QWORD *)this + 40);
  v6 = (struct CVisual **)v13;
  do
  {
    v7 = *v6;
    if ( *v6 )
      break;
    ++v6;
  }
  while ( v6 != (struct CVisual **)&v14 );
  inserted = VisualCollection::InsertRelative(
               (VisualCollection *)(*((_QWORD *)this + 36) + 32LL),
               *((struct CVisual **)this + 39),
               v7,
               1,
               v11);
  if ( inserted >= 0 )
    return 0LL;
  v10 = 6857LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow.cpp",
    (const char *)(unsigned int)inserted,
    v12);
  return (unsigned int)inserted;
}
