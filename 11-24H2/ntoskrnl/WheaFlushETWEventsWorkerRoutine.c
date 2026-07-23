/*
 * XREFs of WheaFlushETWEventsWorkerRoutine @ 0x14065C740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheaFlushETWEventsWorkerRoutine(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  for ( result = *(unsigned int *)(a1 + 96); (int)result > 0; result = *(unsigned int *)(a1 + 96) )
  {
    guard_dispatch_icall_no_overrides(a1, a2);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 96));
  }
  return result;
}
