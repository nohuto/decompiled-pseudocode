/*
 * XREFs of ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x180067DFC
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008FE50 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z @ 0x1800EB78C (-Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x18006821C (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 *     ?UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z @ 0x1800684A8 (-UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z.c)
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x1800690A0 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAcrylicSheet::UpdateRect(CAcrylicSheet *this, const struct tagRECT *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  int updated; // eax
  unsigned int v11; // edi
  __int64 v12; // rdx
  CTimelineBase *v13; // rcx
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v19; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 61);
  if ( v4 && !*(_BYTE *)(v4 + 72) )
  {
    v19 = this;
    CMILRefCountBase::AddRef(this);
    if ( *(_BYTE *)(v6 + 481) )
    {
      if ( *(_BYTE *)(v6 + 482) )
      {
        v7 = (_DWORD *)(v6 + 448);
        v8 = v5 - (_QWORD)this;
        v9 = 4LL;
        do
        {
          *v7 += *(_DWORD *)((char *)v7 + v8 - 448) - v7[4];
          ++v7;
          --v9;
        }
        while ( v9 );
      }
      *((struct tagRECT *)this + 29) = *a2;
      updated = CAcrylicSheet::UpdateTransition(this);
      v11 = updated;
      if ( updated < 0 )
      {
        v12 = 243LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
          (const char *)(unsigned int)updated,
          v17);
        wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v19);
        return v11;
      }
    }
    else
    {
      if ( *(_QWORD *)(v6 + 504) )
      {
        v13 = *(CTimelineBase **)(v6 + 488);
        if ( v13 )
        {
          CTimelineBase::Release(v13);
          *((_QWORD *)this + 61) = 0LL;
        }
      }
      else
      {
        CAcrylicSheet::StopAnimations((CAcrylicSheet *)v6);
      }
      updated = CAcrylicSheet::UpdateRectInternal(this, a2);
      v11 = updated;
      if ( updated < 0 )
      {
        v12 = 258LL;
        goto LABEL_15;
      }
    }
    CBaseObject::Release(this);
    return 0LL;
  }
  v15 = CAcrylicSheet::UpdateRectInternal(this, a2);
  v16 = v15;
  if ( v15 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x108,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
    (const char *)(unsigned int)v15,
    v17);
  return v16;
}
