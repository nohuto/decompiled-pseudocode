/*
 * XREFs of ?CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual@@PEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800BD114
 * Callers:
 *     ?CaptureAndScheduleExitAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800BDF4C (-CaptureAndScheduleExitAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BEE40 (-StartImpl@CDisplayDuplicateToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800BF2BC (-CaptureAndScheduleExitAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BFEB0 (-StartImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CaptureExistingExtendedDisplays@CDisplayAnimatedVisual@@IEAAJ_KPEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800BCDF8 (-CaptureExistingExtendedDisplays@CDisplayAnimatedVisual@@IEAAJ_KPEBVCDWMDisplay@@AEAV-$vector@V-.c)
 *     ?CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800BCF58 (-CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800BDC00 (-clear@-$vector@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V-$al.c)
 */

__int64 __fastcall CDisplayAnimatedVisual::CapturePrimaryAndExistingExtended(
        CDWMDisplaySet **this,
        struct CAnimatedTransitionVisual **a2,
        struct CDWMDisplay *a3,
        __int64 a4)
{
  int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::clear(a4);
  v12 = 0LL;
  GetDesktopID(1LL, &v12);
  v8 = CDisplayAnimatedVisual::CapturePrimary(this, v12, a2);
  if ( v8 < 0 )
  {
    v9 = 759LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v8 = CDisplayAnimatedVisual::CaptureExistingExtendedDisplays((CDisplayAnimatedVisual *)this, v12, a3, a4);
  if ( v8 < 0 )
  {
    v9 = 764LL;
    goto LABEL_3;
  }
  return 0LL;
}
