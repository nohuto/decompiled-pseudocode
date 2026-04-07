/*
 * XREFs of ?StopImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800C0000
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x1800BD69C (-UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800BDC00 (-clear@-$vector@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V-$al.c)
 */

__int64 __fastcall CDisplayExtendToDuplicateAnimatedVisual::StopImpl(CDisplayExtendToDuplicateAnimatedVisual *this)
{
  __int64 v2; // rcx
  CTimelineBase *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int *v7[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *((_QWORD *)this + 49);
  *((_QWORD *)this + 49) = 0LL;
  if ( v2 )
    CBaseObject::Release((CBaseObject *)(v2 + 8));
  std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::clear((__int64 **)this + 50);
  v3 = (CTimelineBase *)*((_QWORD *)this + 53);
  *((_QWORD *)this + 53) = 0LL;
  if ( v3 )
    CTimelineBase::Release(v3);
  v7[0] = (unsigned int *)((char *)this + 432);
  v7[1] = (unsigned int *)((char *)this + 436);
  v7[2] = (unsigned int *)((char *)this + 440);
  v7[3] = (unsigned int *)((char *)this + 444);
  v4 = CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification(
         v3,
         (struct IAnimationListener *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL)),
         v7,
         4u);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5E,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendtoduplicateanimatedvisual.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
