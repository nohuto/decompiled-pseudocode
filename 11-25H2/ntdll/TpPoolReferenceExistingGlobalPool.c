/*
 * XREFs of TpPoolReferenceExistingGlobalPool @ 0x18003E034
 * Callers:
 *     RtlpTpWorkCallback @ 0x18003D6C0 (RtlpTpWorkCallback.c)
 *     TpSetDefaultPoolStackInformation @ 0x1800F0E10 (TpSetDefaultPoolStackInformation.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180111770 (TpSetDefaultPoolMaxThreads.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
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
