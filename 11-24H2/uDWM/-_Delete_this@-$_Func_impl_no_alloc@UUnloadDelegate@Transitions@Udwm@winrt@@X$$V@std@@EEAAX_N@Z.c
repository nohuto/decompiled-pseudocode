/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@UUnloadDelegate@Transitions@Udwm@winrt@@X$$V@std@@EEAAX_N@Z @ 0x1800EBCC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18004C0B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc<winrt::Udwm::Transitions::UnloadDelegate,void,>::_Delete_this(
        char *a1,
        const struct std::nothrow_t *a2)
{
  char v3; // di
  winrt::Windows::Foundation::IUnknown *v4; // rcx

  v3 = (char)a2;
  v4 = (winrt::Windows::Foundation::IUnknown *)(a1 + 8);
  if ( *(_QWORD *)v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v4);
  if ( v3 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(a1, a2);
}
