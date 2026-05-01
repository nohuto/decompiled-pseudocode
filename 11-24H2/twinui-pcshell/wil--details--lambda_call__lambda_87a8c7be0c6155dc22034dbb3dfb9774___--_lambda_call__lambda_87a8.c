/*
 * XREFs of wil::details::lambda_call__lambda_87a8c7be0c6155dc22034dbb3dfb9774___::_lambda_call__lambda_87a8c7be0c6155dc22034dbb3dfb9774___ @ 0x1802CE0B8
 * Callers:
 *     _CMultitaskingViewManager::EnsureXamlCoreForThreadIfNeeded_::_1_::dtor$0 @ 0x1806D9C6E (_CMultitaskingViewManager--EnsureXamlCoreForThreadIfNeeded_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_87a8c7be0c6155dc22034dbb3dfb9774___::_lambda_call__lambda_87a8c7be0c6155dc22034dbb3dfb9774___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 472) = 0;
  }
  return result;
}
