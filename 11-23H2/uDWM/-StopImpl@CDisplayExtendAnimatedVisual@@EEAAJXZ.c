/*
 * XREFs of ?StopImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800BACD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x1800B80D0 (-UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800B8824 (-clear@-$vector@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V-$al.c)
 */

__int64 __fastcall CDisplayExtendAnimatedVisual::StopImpl(CDisplayExtendAnimatedVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  bool v5; // zf
  char v6; // al
  CDisplayAnimatedVisual *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int *v11[5]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *((_QWORD *)this + 55);
  *((_QWORD *)this + 55) = 0LL;
  if ( v2 )
    CBaseObject::Release((CBaseObject *)(v2 + 8));
  v3 = *((_QWORD *)this + 59);
  *((_QWORD *)this + 59) = 0LL;
  if ( v3 )
    CBaseObject::Release((CBaseObject *)(v3 + 8));
  v4 = *((_QWORD *)this + 60);
  *((_QWORD *)this + 60) = 0LL;
  if ( v4 )
  {
    v5 = (*(_DWORD *)(v4 + 8))-- == 1;
    v6 = CDesktopManager::s_fTimelineDirty;
    if ( v5 )
      v6 = 1;
    CDesktopManager::s_fTimelineDirty = v6;
  }
  std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::clear((__int64 *)this + 56);
  v11[0] = (unsigned int *)((char *)this + 488);
  v11[1] = (unsigned int *)((char *)this + 492);
  v11[2] = (unsigned int *)((char *)this + 496);
  v11[3] = (unsigned int *)((char *)this + 500);
  v11[4] = (unsigned int *)((char *)this + 504);
  v8 = CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification(
         v7,
         (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
         v11);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5A,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendanimatedvisual.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
