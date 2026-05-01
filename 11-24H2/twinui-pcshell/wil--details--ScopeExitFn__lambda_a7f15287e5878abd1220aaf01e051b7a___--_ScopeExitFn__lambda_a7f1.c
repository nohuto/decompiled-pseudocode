/*
 * XREFs of wil::details::ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___::_ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___ @ 0x180207D4C
 * Callers:
 *     _CSingleViewShellExperience::Hide_::_1_::dtor$0 @ 0x1806CFAC0 (_CSingleViewShellExperience--Hide_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_a7f15287e5878abd1220aaf01e051b7a_::operator() @ 0x180207D6C (_lambda_a7f15287e5878abd1220aaf01e051b7a_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___::_ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_a7f15287e5878abd1220aaf01e051b7a_::operator()(a1);
  }
  return result;
}
