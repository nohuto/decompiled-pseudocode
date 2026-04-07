/*
 * XREFs of ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B3A74
 * Callers:
 *     _CDisplayDisconnectAnimatedVisual::Create_::_1_::dtor$0 @ 0x180067452 (_CDisplayDisconnectAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDesktopManager::Create_::_1_::dtor$1 @ 0x180067604 (_CDesktopManager--Create_--_1_--dtor$1.c)
 *     _CDisplayBlackCurtainAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800BC9C1 (_CDisplayBlackCurtainAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplayDuplicateAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800BCADD (_CDisplayDuplicateAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplayDuplicateToExtendAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800BCBF9 (_CDisplayDuplicateToExtendAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplayExtendAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800BCD15 (_CDisplayExtendAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplayExtendToDuplicateAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800BCE31 (_CDisplayExtendToDuplicateAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplayMixedModeAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800BCF4D (_CDisplayMixedModeAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplaySecondaryOnlyAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800BD069 (_CDisplaySecondaryOnlyAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplaySecondaryOnlyToDuplicateAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800BD185 (_CDisplaySecondaryOnlyToDuplicateAnimatedVisual--Create_--_1_--dtor$0.c)
 *     _CDisplaySecondaryOnlyToExtendAnimatedVisual::Create_::_1_::dtor$0 @ 0x1800BD2A1 (_CDisplaySecondaryOnlyToExtendAnimatedVisual--Create_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDisplayBlackCurtainAnimatedVisual::operator delete(void *a1, const struct std::nothrow_t *a2)
{
  (*(void (__fastcall **)(WPF::HeapBase *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
}
