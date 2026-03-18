/*
 * XREFs of ExpGetThreadResourceHint @ 0x140343720
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x1402744C0 (ExpAcquireSharedStarveExclusive.c)
 *     ExpAcquireResourceSharedLite @ 0x140342300 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403E8C80 (ExAcquireSharedWaitForExclusive.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x140656F90 (ExpTryConvertSharedToExclusiveLite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpGetThreadResourceHint(__int64 a1)
{
  if ( (a1 & 3) != 0 )
    return 0LL;
  else
    return *(unsigned __int8 *)(a1 + 1120);
}
