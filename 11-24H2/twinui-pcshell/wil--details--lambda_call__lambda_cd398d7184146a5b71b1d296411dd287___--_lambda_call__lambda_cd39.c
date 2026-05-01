/*
 * XREFs of wil::details::lambda_call__lambda_cd398d7184146a5b71b1d296411dd287___::_lambda_call__lambda_cd398d7184146a5b71b1d296411dd287___ @ 0x18048BCC8
 * Callers:
 *     _KeyboardHosting::UIAutomationHelpers::GetBoundingRectForTextRange_::_1_::dtor$0 @ 0x1806EDDBA (_KeyboardHosting--UIAutomationHelpers--GetBoundingRectForTextRange_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::lambda_call__lambda_cd398d7184146a5b71b1d296411dd287___::_lambda_call__lambda_cd398d7184146a5b71b1d296411dd287___(
        __int64 a1)
{
  SAFEARRAY **v1; // rax
  void *v3; // rcx

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v3 = **(void ***)a1;
    if ( v3 )
      CoTaskMemFree(v3);
    v1 = *(SAFEARRAY ***)(a1 + 8);
    if ( *v1 )
      LODWORD(v1) = SafeArrayDestroy(*v1);
  }
  return (int)v1;
}
