/*
 * XREFs of wil::details::ScopeExitFn__lambda_e965cc9d8ffd18de24091c71433a25e1___::_ScopeExitFn__lambda_e965cc9d8ffd18de24091c71433a25e1___ @ 0x18076A454
 * Callers:
 *     _XamlSnapAssistViewHost::Show_::_1_::dtor$7 @ 0x18076E3A8 (_XamlSnapAssistViewHost--Show_--_1_--dtor$7.c)
 *     _XamlSnapAssistViewHost::ViewLoaded_::_1_::dtor$0 @ 0x18076EE02 (_XamlSnapAssistViewHost--ViewLoaded_--_1_--dtor$0.c)
 * Callees:
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x18076C300 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_e965cc9d8ffd18de24091c71433a25e1___::_ScopeExitFn__lambda_e965cc9d8ffd18de24091c71433a25e1___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(*(_QWORD *)a1 + 8LL);
  }
  return result;
}
