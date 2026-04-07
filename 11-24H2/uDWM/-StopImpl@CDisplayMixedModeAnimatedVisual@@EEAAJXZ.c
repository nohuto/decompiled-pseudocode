/*
 * XREFs of ?StopImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800C0A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x1800BD69C (-UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800BDC00 (-clear@-$vector@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V-$al.c)
 */

__int64 __fastcall CDisplayMixedModeAnimatedVisual::StopImpl(__int64 **this)
{
  CTimelineBase *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int *v6[3]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::clear(this + 49);
  std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::clear(this + 52);
  v2 = (CTimelineBase *)this[58];
  this[58] = 0LL;
  if ( v2 )
    CTimelineBase::Release(v2);
  v6[0] = (unsigned int *)(this + 59);
  v6[1] = (unsigned int *)this + 119;
  v6[2] = (unsigned int *)(this + 60);
  v3 = CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification(
         v2,
         (struct IAnimationListener *)((unsigned __int64)(this + 30) & -(__int64)(this != 0LL)),
         v6,
         3u);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4B,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
