/*
 * XREFs of WheaFlushETWEventsWorkerRoutine @ 0x14065DF70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheaFlushETWEventsWorkerRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  for ( result = *(unsigned int *)(a1 + 96); (int)result > 0; result = *(unsigned int *)(a1 + 96) )
  {
    guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 96));
  }
  return result;
}
