/*
 * XREFs of LdrForkMrdata @ 0x1801337EC
 * Callers:
 *     RtlCloneUserProcess @ 0x180160780 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x180160A90 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x180160C40 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall LdrForkMrdata(int a1)
{
  if ( !a1 )
    return RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
  if ( a1 == 1 )
    LdrpMrdataLock = 1LL;
  return (struct _TEB *)RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
