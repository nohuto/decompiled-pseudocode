/*
 * XREFs of _lambda_98a973f9db80c22b1740ef6057097b25_::_lambda_invoker_cdecl_ @ 0x1401AA810
 * Callers:
 *     <none>
 * Callees:
 *     IsStartedIndirectDisplayDevice @ 0x1401AB458 (IsStartedIndirectDisplayDevice.c)
 */

__int64 __fastcall lambda_98a973f9db80c22b1740ef6057097b25_::_lambda_invoker_cdecl_(struct DXGADAPTER *a1, _DWORD *a2)
{
  if ( (unsigned __int8)IsStartedIndirectDisplayDevice(a1) )
    ++*a2;
  return 0LL;
}
