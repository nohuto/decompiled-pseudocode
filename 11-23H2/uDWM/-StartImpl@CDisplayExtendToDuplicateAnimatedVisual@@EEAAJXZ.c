/*
 * XREFs of ?StartImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BB2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual@@PEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800B77D4 (-CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B7BD4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B7DC0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 */

__int64 __fastcall CDisplayExtendToDuplicateAnimatedVisual::StartImpl(CDisplayExtendToDuplicateAnimatedVisual *this)
{
  struct CDWMDisplay **v1; // rax
  struct CAnimatedTransitionVisual **v2; // rdi
  __int64 v4; // rcx
  struct CDWMDisplay *v5; // rsi
  int v6; // eax
  unsigned int v7; // esi
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (struct CDWMDisplay **)*((_QWORD *)this + 41);
  v2 = (struct CAnimatedTransitionVisual **)((char *)this + 440);
  v4 = *((_QWORD *)this + 55);
  v5 = *v1;
  *v2 = 0LL;
  if ( v4 )
    CBaseObject::Release((CBaseObject *)(v4 + 8));
  v6 = CDisplayAnimatedVisual::CapturePrimaryAndExistingExtended((CDWMDisplaySet **)this, v2, v5, (__int64)this + 448);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = CDisplayAnimatedVisual::ScheduleAnimation(
           (CDisplayExtendToDuplicateAnimatedVisual *)((char *)this + 288),
           *v2,
           (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
           *((unsigned int *)this + 88),
           *((_DWORD *)this + 90),
           (unsigned int *)this + 120);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = CDisplayAnimatedVisual::ScheduleAnimation(
              (struct IAnimatedVisual *)*((unsigned int *)this + 90),
              (_QWORD *)this + 56,
              (struct IAnimationListener *)(((unsigned __int64)this + 288) & -(__int64)(this != 0LL)),
              *((_DWORD *)this + 88),
              *((_DWORD *)this + 90),
              (unsigned int *)this + 122);
      v12 = v11;
      if ( v11 >= 0 )
      {
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x43,
          (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendtoduplicateanimatedvisual.cpp",
          (const char *)(unsigned int)v11);
        return v12;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B,
        (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendtoduplicateanimatedvisual.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendtoduplicateanimatedvisual.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
