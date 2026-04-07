/*
 * XREFs of ??1?$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B6F44
 * Callers:
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180028634 (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 *     ?IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180028708 (-IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@.c)
 *     _CDisplayModeChangeHelper::HasChanged_::_1_::dtor$0 @ 0x1800677A8 (_CDisplayModeChangeHelper--HasChanged_--_1_--dtor$0.c)
 *     _CDisplayModeChangeHelper::HasChanged_::_1_::dtor$1 @ 0x1800677BA (_CDisplayModeChangeHelper--HasChanged_--_1_--dtor$1.c)
 *     _CDisplayModeChangeHelper::IsModeChangeToSecondScreenOnlyOrRevert_::_1_::dtor$0 @ 0x1800677CC (_CDisplayModeChangeHelper--IsModeChangeToSecondScreenOnlyOrRevert_--_1_--dtor$0.c)
 *     _CDisplayModeChangeHelper::IsModeChangeToSecondScreenOnlyOrRevert_::_1_::dtor$1 @ 0x1800677DE (_CDisplayModeChangeHelper--IsModeChangeToSecondScreenOnlyOrRevert_--_1_--dtor$1.c)
 *     ?CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800B75DC (-CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z.c)
 *     _CDisplayAnimatedVisual::CapturePrimary_::_1_::dtor$0 @ 0x1800B77B3 (_CDisplayAnimatedVisual--CapturePrimary_--_1_--dtor$0.c)
 *     _CDisplayAnimatedVisual::CapturePrimary_::_1_::dtor$1 @ 0x1800B77BF (_CDisplayAnimatedVisual--CapturePrimary_--_1_--dtor$1.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800BF010 (-StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 *     _CDisplaySecondaryOnlyToExtendAnimatedVisual::StartImpl_::_1_::dtor$0 @ 0x1800BF27E (_CDisplaySecondaryOnlyToExtendAnimatedVisual--StartImpl_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x1800289EC (-Release@CDWMDisplay@@QEBAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(
        CDWMDisplay **a1)
{
  CDWMDisplay *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return CDWMDisplay::Release(v1);
  return result;
}
