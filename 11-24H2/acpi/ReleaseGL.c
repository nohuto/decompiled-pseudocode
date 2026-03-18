/*
 * XREFs of ReleaseGL @ 0x14003B438
 * Callers:
 *     ParseAcquire @ 0x140002BC0 (ParseAcquire.c)
 *     ParseRelease @ 0x140004C30 (ParseRelease.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 ReleaseGL()
{
  __int64 result; // rax

  result = 0LL;
  if ( ghGlobalLock )
    return ghGlobalLock(5LL, 1LL, qword_140088E58);
  return result;
}
