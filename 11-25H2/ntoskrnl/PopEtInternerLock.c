/*
 * XREFs of PopEtInternerLock @ 0x1409621F0
 * Callers:
 *     RtlInternEntryDereference @ 0x140961FE0 (RtlInternEntryDereference.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
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
