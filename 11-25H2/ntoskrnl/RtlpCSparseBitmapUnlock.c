/*
 * XREFs of RtlpCSparseBitmapUnlock @ 0x14035E2E4
 * Callers:
 *     RtlCSparseBitmapBitmaskWrite @ 0x14035DFA0 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpCSparseBitmapPageCommit @ 0x14035E0AC (RtlpCSparseBitmapPageCommit.c)
 *     RtlSparseArrayElementAllocate @ 0x14035EB20 (RtlSparseArrayElementAllocate.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x14035F208 (RtlpCSparseBitmapPageDecommit.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
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
      ExfReleasePushLockShared((signed __int64 *)v3);
    }
    KeAbPostRelease((ULONG_PTR)v3);
    KeLeaveGuardedRegion();
  }
}
