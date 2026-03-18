/*
 * XREFs of ZwAlpcImpersonateClientContainerOfPort @ 0x1406A74F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcImpersonateClientContainerOfPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
