/*
 * XREFs of ExpWnfAcquirePermanentDataStoreHandle @ 0x140A62208
 * Callers:
 *     ExpWnfDeletePermanentStateData @ 0x1407C61FC (ExpWnfDeletePermanentStateData.c)
 *     ExpWnfPopulateStateData @ 0x140837C4C (ExpWnfPopulateStateData.c)
 *     ExpWnfWriteStateData @ 0x1408AD580 (ExpWnfWriteStateData.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140A62358 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 */

__int64 __fastcall ExpWnfAcquirePermanentDataStoreHandle(__int64 a1, _QWORD *a2)
{
  signed __int64 *v2; // rbx
  _QWORD *v5; // rsi
  __int64 v6; // rax
  __int64 result; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  v2 = (signed __int64 *)(a1 + 8);
  while ( 1 )
  {
    v5 = KeAbPreAcquire((__int64)v2, 0LL);
    if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v2, 0, v5, (__int64)v2);
    if ( v5 )
      *((_BYTE *)v5 + 10) = 1;
    v6 = *(_QWORD *)(a1 + 16);
    if ( v6 )
    {
      *a2 = v6;
      return 0LL;
    }
    if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    if ( *(_DWORD *)(a1 + 40) != 2 )
      break;
    Handle = 0LL;
    result = ExpWnfGetPermanentPerUserDataStoreHandle((PSID)(a1 + 48), &Handle);
    if ( (int)result < 0 )
      return result;
    v8 = KeAbPreAcquire((__int64)v2, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v2, (__int64)v8, (__int64)v2);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    if ( !*(_QWORD *)(a1 + 16) )
    {
      *(_QWORD *)(a1 + 16) = Handle;
      _InterlockedCompareExchange64(v2, 17LL, 1LL);
      *a2 = *(_QWORD *)(a1 + 16);
      return 0LL;
    }
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    ZwClose(Handle);
  }
  return 3221225524LL;
}
