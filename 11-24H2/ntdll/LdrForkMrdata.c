/*
 * XREFs of LdrForkMrdata @ 0x180131D0C
 * Callers:
 *     RtlCloneUserProcess @ 0x18015F270 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x18015F580 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18015F730 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall LdrForkMrdata(int a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  if ( !a1 )
    return RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock, a2, a3);
  if ( a1 == 1 )
    LdrpMrdataLock = 1LL;
  return (struct _TEB *)RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
