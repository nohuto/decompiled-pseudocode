/*
 * XREFs of ??3CAnimationComponent@@SAXPEAX@Z @ 0x1800AA3C4
 * Callers:
 *     _CDWMDisplaySet::EnumerateOutputs_::_1_::dtor$0 @ 0x180067875 (_CDWMDisplaySet--EnumerateOutputs_--_1_--dtor$0.c)
 *     _CTopLevelWindow::EnsureWindowFrames_::_1_::dtor$0 @ 0x180068473 (_CTopLevelWindow--EnsureWindowFrames_--_1_--dtor$0.c)
 *     _CTransitionVisualController::CreateDesktopSnapshotComponent_::_1_::dtor$0 @ 0x1800EB10B (_CTransitionVisualController--CreateDesktopSnapshotComponent_--_1_--dtor$0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAnimationComponent::operator delete(void *a1)
{
  (*(void (__fastcall **)(WPF::HeapBase *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
}
