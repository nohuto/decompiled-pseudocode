/*
 * XREFs of ZwLockProductActivationKeys @ 0x1406A86B0
 * Callers:
 *     ExInitializeTimeRefresh @ 0x140C4058C (ExInitializeTimeRefresh.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockProductActivationKeys(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
