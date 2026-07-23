/*
 * XREFs of TpPoolReferenceExistingGlobalPool @ 0x1800E92A8
 * Callers:
 *     RtlpTpWorkCallback @ 0x18008C070 (RtlpTpWorkCallback.c)
 *     TpSetDefaultPoolMaxThreads @ 0x1800E9040 (TpSetDefaultPoolMaxThreads.c)
 *     TpSetDefaultPoolStackInformation @ 0x1800E9190 (TpSetDefaultPoolStackInformation.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 */

__int64 TpPoolReferenceExistingGlobalPool()
{
  __int64 v0; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h]

  v0 = 0LL;
  if ( TppPoolpGlobalPool )
  {
    RtlAcquireSRWLockShared(&TppPoolpGlobalPoolLock);
    v0 = TppPoolpGlobalPool;
    v2 = TppPoolpGlobalPool;
    if ( TppPoolpGlobalPool )
    {
      _InterlockedIncrement((volatile signed __int32 *)TppPoolpGlobalPool);
      v0 = v2;
    }
    RtlReleaseSRWLockShared(&TppPoolpGlobalPoolLock);
  }
  return v0;
}
