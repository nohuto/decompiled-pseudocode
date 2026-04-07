/*
 * XREFs of ?CaptureAndScheduleExitAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800BDF4C
 * Callers:
 *     ?StartImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BE220 (-StartImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x180046064 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual@@PEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800BD114 (-CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800BD4E8 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 */

__int64 __fastcall CDisplayDuplicateAnimatedVisual::CaptureAndScheduleExitAnimation(
        CDisplayDuplicateAnimatedVisual *this)
{
  struct CAnimatedTransitionVisual **v1; // rdi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // esi
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (struct CAnimatedTransitionVisual **)((char *)this + 392);
  v3 = *((_QWORD *)this + 49);
  *v1 = 0LL;
  if ( v3 )
    CBaseObject::Release((CBaseObject *)(v3 + 8));
  v4 = CDisplayAnimatedVisual::CapturePrimaryAndExistingExtended((CDWMDisplaySet **)this, v1, 0LL, (__int64)this + 400);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = CDisplayAnimatedVisual::ScheduleAnimation(
           (CDisplayDuplicateAnimatedVisual *)((char *)this + 240),
           *v1,
           (struct IAnimationListener *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL)),
           *((_DWORD *)this + 81),
           *((_DWORD *)this + 83),
           (unsigned int *)this + 108);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = CDisplayAnimatedVisual::ScheduleAnimation(
             (CAnimatedTransitionVisual *)*((unsigned int *)this + 83),
             (CAnimatedTransitionVisual ***)this + 50,
             (struct IAnimationListener *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL)),
             *((_DWORD *)this + 81),
             *((_DWORD *)this + 83),
             (unsigned int *)this + 110);
      v10 = v9;
      if ( v9 >= 0 )
      {
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x92,
          (__int64)"clientcore\\windows\\dwm\\udwm\\displayduplicateanimatedvisual.cpp",
          (const char *)(unsigned int)v9);
        return v10;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A,
        (__int64)"clientcore\\windows\\dwm\\udwm\\displayduplicateanimatedvisual.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x82,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayduplicateanimatedvisual.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
