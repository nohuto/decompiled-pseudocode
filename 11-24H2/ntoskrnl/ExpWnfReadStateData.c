/*
 * XREFs of ExpWnfReadStateData @ 0x1408ABA3C
 * Callers:
 *     ExpWnfDeliverThreadNotifications @ 0x1408AB440 (ExpWnfDeliverThreadNotifications.c)
 *     NtQueryWnfStateData @ 0x1408ABBD0 (NtQueryWnfStateData.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x1408AE6C0 (PopWnfSprActiveSessionChangeCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140A3B470 (VslpConnectedStandbyWnfCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x140A3B590 (PopWnfFullscreenVideoCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140A3B690 (PopNetWnfLowPowerEpochCallback.c)
 *     PopWnfAudioCallback @ 0x140A3B7C0 (PopWnfAudioCallback.c)
 *     PopEsInStandbyEvaluate @ 0x140A3B940 (PopEsInStandbyEvaluate.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140A3BAA0 (PopEsWnfSubscriptionOverrideCallback.c)
 *     ExQueryWnfStateData @ 0x140A3BB60 (ExQueryWnfStateData.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 __fastcall ExpWnfReadStateData(__int64 a1, _DWORD *a2, void *a3, unsigned int a4, _DWORD *a5)
{
  signed __int64 *v9; // rbx
  _QWORD *v10; // rdi
  _DWORD *v11; // rdx
  unsigned int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-48h]

  v14 = 0;
  v9 = (signed __int64 *)(a1 + 80);
  v10 = KeAbPreAcquire(a1 + 80, 0LL);
  if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v9, 0, v10, (__int64)v9);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
  v11 = *(_DWORD **)(a1 + 88);
  if ( !v11 )
  {
    *a2 = 0;
    goto LABEL_12;
  }
  if ( v11 == (_DWORD *)1 )
  {
    *a2 = *(_DWORD *)(a1 + 96);
LABEL_12:
    *a5 = 0;
    goto LABEL_13;
  }
  *a2 = v11[3];
  *a5 = v11[2];
  v12 = v11[2];
  if ( a4 < v12 )
  {
    v14 = -1073741789;
  }
  else
  {
    memmove(a3, v11 + 4, v12);
    v14 = 0;
  }
LABEL_13:
  if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  return v14;
}
