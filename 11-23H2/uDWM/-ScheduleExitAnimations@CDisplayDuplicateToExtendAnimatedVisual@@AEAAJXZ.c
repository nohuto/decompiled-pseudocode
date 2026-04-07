/*
 * XREFs of ?ScheduleExitAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B9E00
 * Callers:
 *     ?StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B9FF0 (-StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B7BD4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B7DC0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 */

__int64 __fastcall CDisplayDuplicateToExtendAnimatedVisual::ScheduleExitAnimations(
        CDisplayDuplicateToExtendAnimatedVisual *this)
{
  struct IAnimationListener *v1; // rbp
  struct IAnimationListener *v3; // rsi
  int v4; // edi
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (CDisplayDuplicateToExtendAnimatedVisual *)((char *)this + 288);
  v3 = (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL));
  v4 = CDisplayAnimatedVisual::ScheduleAnimation(
         this,
         *((struct CAnimatedTransitionVisual **)this + 61),
         v3,
         *((unsigned int *)this + 88),
         *((_DWORD *)this + 90),
         (unsigned int *)this + 130);
  if ( v4 < 0 )
  {
    v5 = 188LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = CDisplayAnimatedVisual::ScheduleAnimation(
         (CDisplayAnimatedVisual *)*((unsigned int *)this + 90),
         *((struct CAnimatedTransitionVisual **)this + 57),
         v3,
         *((unsigned int *)this + 88),
         *((_DWORD *)this + 90),
         (unsigned int *)this + 128);
  if ( v4 < 0 )
  {
    v5 = 196LL;
    goto LABEL_3;
  }
  v7 = CDisplayAnimatedVisual::ScheduleAnimation(
         (struct IAnimatedVisual *)*((unsigned int *)this + 90),
         (_QWORD *)this + 58,
         v1,
         *((_DWORD *)this + 88),
         *((_DWORD *)this + 90),
         (unsigned int *)this + 132);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCC,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
