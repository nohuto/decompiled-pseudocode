/*
 * XREFs of ?ScheduleExitAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BEC80
 * Callers:
 *     ?StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BEE40 (-StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x180046064 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800BD4E8 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
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

  v1 = (CDisplayDuplicateToExtendAnimatedVisual *)((char *)this + 240);
  v3 = (struct IAnimationListener *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL));
  v4 = CDisplayAnimatedVisual::ScheduleAnimation(
         this,
         *((struct CAnimatedTransitionVisual **)this + 55),
         v3,
         *((_DWORD *)this + 76),
         *((_DWORD *)this + 78),
         (unsigned int *)this + 118);
  if ( v4 < 0 )
  {
    v5 = 186LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = CDisplayAnimatedVisual::ScheduleAnimation(
         (CDisplayAnimatedVisual *)*((unsigned int *)this + 78),
         *((struct CAnimatedTransitionVisual **)this + 51),
         v3,
         *((_DWORD *)this + 76),
         *((_DWORD *)this + 78),
         (unsigned int *)this + 116);
  if ( v4 < 0 )
  {
    v5 = 194LL;
    goto LABEL_3;
  }
  v7 = CDisplayAnimatedVisual::ScheduleAnimation(
         (CAnimatedTransitionVisual *)*((unsigned int *)this + 78),
         (CAnimatedTransitionVisual ***)this + 52,
         v1,
         *((_DWORD *)this + 76),
         *((_DWORD *)this + 78),
         (unsigned int *)this + 120);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCA,
    (__int64)"clientcore\\windows\\dwm\\udwm\\displayduplicatetoextendanimatedvisual.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
