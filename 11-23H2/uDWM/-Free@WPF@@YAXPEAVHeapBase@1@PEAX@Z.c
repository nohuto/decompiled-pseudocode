/*
 * XREFs of ?Free@WPF@@YAXPEAVHeapBase@1@PEAX@Z @ 0x180021B70
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800264FC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 *     wistd::__function::__func__lambda_71f40e0cc89b0c7a1c7417970f0d8c94__void___cdecl(int_const_&)_::_scalar_deleting_destructor_ @ 0x180065C40 (wistd--__function--__func__lambda_71f40e0cc89b0c7a1c7417970f0d8c94__void___cdecl(in_ea_180065C40.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x180065DC4 (-OnWindowArrangementEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall WPF::Free(WPF *this, struct WPF::HeapBase *a2, void *a3)
{
  (*(void (__fastcall **)(WPF::HeapBase *, struct WPF::HeapBase *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    a2,
    a3);
}
