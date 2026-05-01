/*
 * XREFs of wil::details::ScopeExitFn__lambda_e8c3e2e407ef239924bd022bf4029a2f___::_ScopeExitFn__lambda_e8c3e2e407ef239924bd022bf4029a2f___ @ 0x1804C1664
 * Callers:
 *     _CSwitchItemElement::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1806EFC82 (_CSwitchItemElement--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     _CVirtualDesktopContainerElement::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1806EFE9B (_CVirtualDesktopContainerElement--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _CMultitaskingViewFrameElement::RuntimeClassInitialize_::_1_::dtor$6 @ 0x1806EFEEC (_CMultitaskingViewFrameElement--RuntimeClassInitialize_--_1_--dtor$6.c)
 *     _CVirtualDesktopBarElement::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1806EFEFE (_CVirtualDesktopBarElement--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _SwitchItemThumbnailElement::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1806EFF73 (_SwitchItemThumbnailElement--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CScrollButtonContainer::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1806F004B (_CScrollButtonContainer--RuntimeClassInitialize_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_e8c3e2e407ef239924bd022bf4029a2f___::_ScopeExitFn__lambda_e8c3e2e407ef239924bd022bf4029a2f___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 80LL))(*(_QWORD *)a1);
  }
  return result;
}
