/*
 * XREFs of PspUpdateSingleProcessAffinity @ 0x140765AE0
 * Callers:
 *     PsUpdateActiveProcessAffinity @ 0x140764D88 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinityUpdateMode @ 0x1407658B8 (PspSetProcessAffinityUpdateMode.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PspUpdatePebForAffinityChange @ 0x14083C4B8 (PspUpdatePebForAffinityChange.c)
 *     PspSetProcessAffinitySafe @ 0x140A48864 (PspSetProcessAffinitySafe.c)
 */

void __fastcall PspUpdateSingleProcessAffinity(__int64 a1, __int64 a2)
{
  signed __int64 *v4; // rbx
  int v5; // ebp
  __int64 *v6; // rsi
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a2 + 496) & 0x80000) != 0 )
  {
    v4 = (signed __int64 *)(a2 + 456);
    LODWORD(v7) = 0;
    v5 = 0;
    v6 = KeAbPreAcquire(a2 + 456, 0LL);
    if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v4, 0, v6, (unsigned __int64)v4);
    if ( v6 )
      *((_BYTE *)v6 + 10) = 1;
    if ( (*(_DWORD *)(a2 + 496) & 0x80000) != 0 )
      v5 = PspSetProcessAffinitySafe((struct _KPROCESS *)a2, (__int64)&v7);
    if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    if ( v5 >= 0 )
    {
      if ( (_DWORD)v7 )
        PspUpdatePebForAffinityChange(a1, a2);
    }
  }
}
