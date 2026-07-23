/*
 * XREFs of ExpTryAcquireFannedOutPushLockShared @ 0x140470394
 * Callers:
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140470270 (ExTryAcquireAutoExpandPushLockShared.c)
 * Callees:
 *     ExfTryAcquirePushLockSharedEx @ 0x1404704C4 (ExfTryAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

volatile signed __int64 *__fastcall ExpTryAcquireFannedOutPushLockShared(unsigned int a1, int a2)
{
  unsigned int v2; // eax
  unsigned __int64 v3; // r9
  unsigned int v4; // ecx
  unsigned int v5; // r10d
  volatile signed __int64 *v6; // rbx

  v2 = (a1 >> 13) & 0x3FFFF;
  v3 = a1;
  _BitScanReverse(&v4, v2);
  v5 = a2 | 2;
  v6 = (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v4 - 2)
                                             + 8LL * (v2 ^ (1 << v4))
                                             + 8)
                                 + 8 * ((v3 >> 4) & 0x1FF));
  if ( (a2 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, v5, (ULONG_PTR)v6, 0LL, 0LL);
  if ( !_InterlockedCompareExchange64(v6, 17LL, 0LL) || (unsigned __int8)ExfTryAcquirePushLockSharedEx(v6, v5) )
    return v6;
  else
    return 0LL;
}
