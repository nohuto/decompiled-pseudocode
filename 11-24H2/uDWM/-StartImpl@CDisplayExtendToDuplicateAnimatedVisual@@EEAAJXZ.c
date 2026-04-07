/*
 * XREFs of ?StartImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BFEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x180046064 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual@@PEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800BD114 (-CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800BD4E8 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
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

  v1 = (struct CDWMDisplay **)*((_QWORD *)this + 35);
  v2 = (struct CAnimatedTransitionVisual **)((char *)this + 392);
  v4 = *((_QWORD *)this + 49);
  v5 = *v1;
  *v2 = 0LL;
  if ( v4 )
    CBaseObject::Release((CBaseObject *)(v4 + 8));
  v6 = CDisplayAnimatedVisual::CapturePrimaryAndExistingExtended((CDWMDisplaySet **)this, v2, v5, (__int64)this + 400);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = CDisplayAnimatedVisual::ScheduleAnimation(
           (CDisplayExtendToDuplicateAnimatedVisual *)((char *)this + 240),
           *v2,
           (struct IAnimationListener *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL)),
           *((_DWORD *)this + 76),
           *((_DWORD *)this + 78),
           (unsigned int *)this + 108);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = CDisplayAnimatedVisual::ScheduleAnimation(
              (CAnimatedTransitionVisual *)*((unsigned int *)this + 78),
              (CAnimatedTransitionVisual ***)this + 50,
              (struct IAnimationListener *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL)),
              *((_DWORD *)this + 76),
              *((_DWORD *)this + 78),
              (unsigned int *)this + 110);
      v12 = v11;
      if ( v11 >= 0 )
      {
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x41,
          (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendtoduplicateanimatedvisual.cpp",
          (const char *)(unsigned int)v11);
        return v12;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39,
        (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendtoduplicateanimatedvisual.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayextendtoduplicateanimatedvisual.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
}
