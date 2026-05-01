/*
 * XREFs of wil::details::ScopeExitFn__lambda_f117f3ffe7121185524fa0618ecb49dc___::_ScopeExitFn__lambda_f117f3ffe7121185524fa0618ecb49dc___ @ 0x18048E30C
 * Callers:
 *     _AccessibilityExperienceManager::_CreateModalExperienceAsync_::_1_::dtor$6 @ 0x1806EDE02 (_AccessibilityExperienceManager--_CreateModalExperienceAsync_--_1_--dtor$6.c)
 * Callees:
 *     _lambda_f117f3ffe7121185524fa0618ecb49dc_::operator() @ 0x18048EBD4 (_lambda_f117f3ffe7121185524fa0618ecb49dc_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_f117f3ffe7121185524fa0618ecb49dc___::_ScopeExitFn__lambda_f117f3ffe7121185524fa0618ecb49dc___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_f117f3ffe7121185524fa0618ecb49dc_::operator()();
  }
  return result;
}
