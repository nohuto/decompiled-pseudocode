/*
 * XREFs of ExpGetThreadResourceHint @ 0x1403DF900
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x1402955C0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402D8890 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1403DF600 (ExAcquireSharedWaitForExclusive.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x14064B090 (ExpTryConvertSharedToExclusiveLite.c)
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
