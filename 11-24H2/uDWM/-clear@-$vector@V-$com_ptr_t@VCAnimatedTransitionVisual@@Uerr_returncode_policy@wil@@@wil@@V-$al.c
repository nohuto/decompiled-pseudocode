/*
 * XREFs of ?clear@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800BDC00
 * Callers:
 *     ?CaptureExistingExtendedDisplays@CDisplayAnimatedVisual@@IEAAJ_KPEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800BCDF8 (-CaptureExistingExtendedDisplays@CDisplayAnimatedVisual@@IEAAJ_KPEBVCDWMDisplay@@AEAV-$vector@V-.c)
 *     ?CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual@@PEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800BD114 (-CapturePrimaryAndExistingExtended@CDisplayAnimatedVisual@@IEAAJPEAPEAVCAnimatedTransitionVisual.c)
 *     ?StopImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BE280 (-StopImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ @ 0x1800BF910 (-StopImpl@CDisplayExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800C0000 (-StopImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?StopImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ @ 0x1800C0A90 (-StopImpl@CDisplayMixedModeAnimatedVisual@@EEAAJXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800BC978 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@w.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::clear(
        __int64 **a1)
{
  __int64 *v1; // rdx
  __int64 *result; // rax

  v1 = a1[1];
  if ( *a1 != v1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>>(*a1, v1);
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
