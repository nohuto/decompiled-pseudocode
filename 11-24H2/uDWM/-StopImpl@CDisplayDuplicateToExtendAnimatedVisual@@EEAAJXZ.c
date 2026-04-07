/*
 * XREFs of ?StopImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BF010
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@@PEAPEAII@Z @ 0x1800BD69C (-UnregisterForAnimationCompleteNotification@CDisplayAnimatedVisual@@IEAAJPEAUIAnimationListener@.c)
 */

__int64 __fastcall CDisplayDuplicateToExtendAnimatedVisual::StopImpl(CDisplayDuplicateToExtendAnimatedVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int *v7[6]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = *((_QWORD *)this + 51);
  *((_QWORD *)this + 51) = 0LL;
  if ( v2 )
    CBaseObject::Release((CBaseObject *)(v2 + 8));
  v3 = *((_QWORD *)this + 55);
  *((_QWORD *)this + 55) = 0LL;
  if ( v3 )
    CBaseObject::Release((CBaseObject *)(v3 + 8));
  v7[0] = (unsigned int *)((char *)this + 464);
  v7[1] = (unsigned int *)((char *)this + 468);
  v7[2] = (unsigned int *)((char *)this + 472);
  v7[3] = (unsigned int *)((char *)this + 476);
  v7[4] = (unsigned int *)((char *)this + 480);
  v7[5] = (unsigned int *)((char *)this + 484);
  v4 = CDisplayAnimatedVisual::UnregisterForAnimationCompleteNotification(
         (CDisplayAnimatedVisual *)v3,
         (struct IAnimationListener *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL)),
         v7,
         6u);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x85,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
