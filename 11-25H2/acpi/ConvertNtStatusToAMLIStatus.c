/*
 * XREFs of ConvertNtStatusToAMLIStatus @ 0x14002FCFC
 * Callers:
 *     ParseRelease @ 0x140004C30 (ParseRelease.c)
 *     PerformMutexDriverCallbacks @ 0x14002E494 (PerformMutexDriverCallbacks.c)
 *     PerformNativeMethodCall @ 0x14002FD2C (PerformNativeMethodCall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertNtStatusToAMLIStatus(unsigned int a1)
{
  __int64 result; // rax

  if ( a1 == -1073741643 || a1 == -1073741536 )
    return 32773LL;
  result = 32772LL;
  if ( a1 != 259 )
    return a1;
  return result;
}
