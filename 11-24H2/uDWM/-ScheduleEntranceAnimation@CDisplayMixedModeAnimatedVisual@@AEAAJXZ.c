/*
 * XREFs of ?ScheduleEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x18008A154
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800C0910 (-OnGlobalTimeUpdatedImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004C778 (--1-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisual@@@Z @ 0x18009AFA0 (-CaptureAndAddVisual@CDisplayAnimatedVisual@@IEAAJ_KAEBUtagRECT@@PEAPEAVCAnimatedTransitionVisua.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800BD4E8 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?push_back@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800BDC80 (-push_back@-$vector@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayMixedModeAnimatedVisual::ScheduleEntranceAnimation(CDisplayMixedModeAnimatedVisual *this)
{
  const struct tagRECT *v2; // rdi
  const struct tagRECT *v3; // rbp
  int v4; // eax
  unsigned int v5; // esi
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // [rsp+20h] [rbp-28h]
  int v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CAnimatedTransitionVisual *v15; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = 0LL;
  GetDesktopID(1LL, &v16);
  v2 = (const struct tagRECT *)*((_QWORD *)this + 55);
  v3 = (const struct tagRECT *)*((_QWORD *)this + 56);
  while ( 1 )
  {
    if ( v2 == v3 )
    {
      v7 = CDisplayAnimatedVisual::ScheduleAnimation(
             (char *)this + 240,
             (char *)this + 416,
             ((unsigned __int64)this + 240) & -(__int64)(this != 0LL),
             *((unsigned int *)this + 76),
             *((_DWORD *)this + 77),
             (char *)this + 480);
      v8 = v7;
      if ( v7 >= 0 )
      {
        v9 = CDisplayAnimatedVisual::ScheduleAnimation(
               *((unsigned int *)this + 77),
               (char *)this + 392,
               ((unsigned __int64)this + 240) & -(__int64)(this != 0LL),
               *((unsigned int *)this + 76),
               *((_DWORD *)this + 77),
               (char *)this + 476);
        v10 = v9;
        if ( v9 >= 0 )
        {
          return 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x12A,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
            (const char *)(unsigned int)v9,
            v13);
          return v10;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x122,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
          (const char *)(unsigned int)v7,
          v12);
        return v8;
      }
    }
    v15 = 0LL;
    v4 = CDisplayAnimatedVisual::CaptureAndAddVisual(this, v16, v2, &v15);
    v5 = v4;
    if ( v4 < 0 )
      break;
    std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::push_back(
      (char *)this + 416,
      &v15);
    wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>::~com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>((__int64 *)&v15);
    ++v2;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x118,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\displaymixedmodeanimatedvisual.cpp",
    (const char *)(unsigned int)v4,
    v11);
  if ( v15 )
    CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v15 + 8));
  return v5;
}
