/*
 * XREFs of wil::details::ScopeExitFn__lambda_acdcf5c38b479ef946df1f06853974cc___::_ScopeExitFn__lambda_acdcf5c38b479ef946df1f06853974cc___ @ 0x1802CE1F0
 * Callers:
 *     _CVirtualDesktopCollection::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1806D6BED (_CVirtualDesktopCollection--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_acdcf5c38b479ef946df1f06853974cc___::_ScopeExitFn__lambda_acdcf5c38b479ef946df1f06853974cc___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 17) = 0;
  }
  return result;
}
