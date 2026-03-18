/*
 * XREFs of ExpWnfReadStateData @ 0x1408E32C8
 * Callers:
 *     ExpWnfDeliverThreadNotifications @ 0x1408E2CA0 (ExpWnfDeliverThreadNotifications.c)
 *     NtQueryWnfStateData @ 0x1408E34F0 (NtQueryWnfStateData.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x1408E41D0 (PopWnfSprActiveSessionChangeCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140A366E0 (VslpConnectedStandbyWnfCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x140A36800 (PopWnfFullscreenVideoCallback.c)
 *     PopNetWnfLowPowerEpochCallback @ 0x140A36900 (PopNetWnfLowPowerEpochCallback.c)
 *     PopWnfAudioCallback @ 0x140A36A30 (PopWnfAudioCallback.c)
 *     PopEsInStandbyEvaluate @ 0x140A36C44 (PopEsInStandbyEvaluate.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140A36DA0 (PopEsWnfSubscriptionOverrideCallback.c)
 *     ExQueryWnfStateData @ 0x140A36E60 (ExQueryWnfStateData.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall ExpWnfReadStateData(__int64 a1, _DWORD *a2, void *a3, unsigned int a4, _DWORD *a5)
{
  signed __int64 *v9; // rbx
  __int64 *v10; // rdi
  _DWORD *v11; // rdx
  unsigned int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-48h]

  v14 = 0;
  v9 = (signed __int64 *)(a1 + 80);
  v10 = KeAbPreAcquire(a1 + 80, 0LL);
  if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v9, 0, v10, (unsigned __int64)v9);
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
