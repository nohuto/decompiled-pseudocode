/*
 * XREFs of ExAcquireAutoExpandPushLockShared @ 0x14031F040
 * Callers:
 *     MiDeletePagablePteRange @ 0x1402663A4 (MiDeletePagablePteRange.c)
 *     MiLockAwePagesShared @ 0x1404A9FAC (MiLockAwePagesShared.c)
 *     MiLockAweVadsShared @ 0x1404BE2A0 (MiLockAweVadsShared.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140682624 (MiBuildPhysicalPageFreeChain.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ExAcquireAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  unsigned int v2; // esi
  __int64 v4; // rdi
  int v5; // ebp
  unsigned __int64 v6; // r9
  ULONG_PTR v7; // rbx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  volatile signed __int64 *v11; // r14

  v2 = BugCheckParameter1;
  v4 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v5 = BugCheckParameter1 & 2;
  if ( (BugCheckParameter1 & 2) == 0 )
    v4 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
  v6 = *(unsigned int *)(BugCheckParameter2 + 8);
  if ( (v6 & 1) != 0 )
  {
    v9 = ((unsigned int)v6 >> 13) & 0x3FFFF;
    _BitScanReverse(&v10, v9);
    v11 = (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v10 - 2)
                                                + 8LL * (v9 ^ (1 << v10))
                                                + 8)
                                    + 8 * ((v6 >> 4) & 0x1FF));
    if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v11, v2, v4, BugCheckParameter2);
    v7 = (ULONG_PTR)v11;
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(BugCheckParameter2, v2, v4, BugCheckParameter2);
    v7 = BugCheckParameter2 | 1;
  }
  if ( !v5 )
    v7 |= 2uLL;
  if ( v4 )
    *(_BYTE *)(v4 + 10) = 1;
  return v7;
}
