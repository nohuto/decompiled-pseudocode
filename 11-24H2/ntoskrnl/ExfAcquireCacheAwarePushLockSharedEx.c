/*
 * XREFs of ExfAcquireCacheAwarePushLockSharedEx @ 0x1404080E0
 * Callers:
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 *__fastcall ExfAcquireCacheAwarePushLockSharedEx(__int64 a1, char a2, char *a3, __int64 a4)
{
  signed __int64 *v4; // rbx

  v4 = *(signed __int64 **)(a1 + 8LL * (KeGetPcr()->Prcb.Number & 0x1F));
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, a2, a3, a4);
  return v4;
}
