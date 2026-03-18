/*
 * XREFs of PopEtInternerLock @ 0x140905D90
 * Callers:
 *     RtlInternEntryDereference @ 0x140905B7C (RtlInternEntryDereference.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x1403B5E64 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *__fastcall PopEtInternerLock(__int64 a1, char a2)
{
  volatile signed __int64 *v2; // rcx

  v2 = (volatile signed __int64 *)(PopEtGlobals + 40);
  if ( a2 )
    return (struct _KTHREAD *)PopAcquireRwLockShared(v2);
  else
    return PopAcquireRwLockExclusive((unsigned __int64 *)v2);
}
