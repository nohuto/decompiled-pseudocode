/*
 * XREFs of wil::details::ScopeExitFn__lambda_6e770df948d8a5a9abf49638b3e35dc3___::_ScopeExitFn__lambda_6e770df948d8a5a9abf49638b3e35dc3___ @ 0x18069E950
 * Callers:
 *     _XamlGamingTaskViewHost::Show_::_1_::dtor$4 @ 0x180704E70 (_XamlGamingTaskViewHost--Show_--_1_--dtor$4.c)
 * Callees:
 *     _lambda_6e770df948d8a5a9abf49638b3e35dc3_::operator() @ 0x18069EEFC (_lambda_6e770df948d8a5a9abf49638b3e35dc3_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_6e770df948d8a5a9abf49638b3e35dc3___::_ScopeExitFn__lambda_6e770df948d8a5a9abf49638b3e35dc3___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_6e770df948d8a5a9abf49638b3e35dc3_::operator()();
  }
  return result;
}
