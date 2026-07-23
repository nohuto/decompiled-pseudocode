/*
 * XREFs of PopEtInternerLock @ 0x14099CA10
 * Callers:
 *     RtlInternEntryDereference @ 0x14099C800 (RtlInternEntryDereference.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
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
