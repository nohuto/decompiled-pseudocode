/*
 * XREFs of DpiGetSchedulerCallbackState @ 0x140033C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetSchedulerCallbackState(__int64 a1)
{
  return (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a1 + 64) + 4056LL), 0, 0);
}
