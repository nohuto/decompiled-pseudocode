/*
 * XREFs of _lambda_31685d6d76905a19580e009ac071d915_::_lambda_invoker_cdecl_ @ 0x18005D5C0
 * Callers:
 *     ?InputReportCallback@GameControllerRawInputProvider@@CAJPEAX@Z @ 0x18005D540 (-InputReportCallback@GameControllerRawInputProvider@@CAJPEAX@Z.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800A23BC (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

void __fastcall lambda_31685d6d76905a19580e009ac071d915_::_lambda_invoker_cdecl_(_DWORD *a1)
{
  __int64 v1; // rdx

  if ( *a1 == 4 )
  {
    v1 = 368LL;
LABEL_5:
    operator delete(a1, (const struct std::nothrow_t *)v1);
    return;
  }
  if ( *a1 != 64 )
  {
    if ( *a1 != 128 )
      wil::details::in1diag3::FailFastImmediate_Unexpected((wil::details::in1diag3 *)a1);
    v1 = 3008LL;
    goto LABEL_5;
  }
  operator delete(a1);
}
