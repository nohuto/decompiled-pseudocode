/*
 * XREFs of RtlpCSparseBitmapUnlock @ 0x140247650
 * Callers:
 *     RtlCSparseBitmapBitmaskWrite @ 0x1402476B8 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpCSparseBitmapPageCommit @ 0x1402477C4 (RtlpCSparseBitmapPageCommit.c)
 *     RtlSparseArrayElementAllocate @ 0x140421C44 (RtlSparseArrayElementAllocate.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x14045CD70 (RtlpCSparseBitmapPageDecommit.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x140246D40 (ExReleaseSpinLockShared.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall RtlpCSparseBitmapUnlock(int *a1)
{
  __int64 v1; // rax
  int v2; // r8d
  volatile signed __int64 *v3; // rbx
  KIRQL v4; // dl
  volatile LONG *v5; // rcx

  v1 = *((_QWORD *)a1 + 1);
  v2 = *a1;
  v3 = (volatile signed __int64 *)(v1 + 24);
  if ( *(_BYTE *)(v1 + 48) )
  {
    v4 = *((_BYTE *)a1 + 4);
    v5 = (volatile LONG *)(v1 + 24);
    if ( v2 == 1 )
      ExReleaseSpinLockExclusive(v5, v4);
    else
      ExReleaseSpinLockShared(v5, v4);
  }
  else
  {
    if ( v2 == 1 )
    {
      if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v3);
    }
    else if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared(v3);
    }
    KeAbPostRelease((ULONG_PTR)v3);
    KeLeaveGuardedRegion();
  }
}
