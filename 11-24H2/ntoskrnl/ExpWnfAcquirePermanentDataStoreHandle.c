/*
 * XREFs of ExpWnfAcquirePermanentDataStoreHandle @ 0x140A5AB08
 * Callers:
 *     ExpWnfDeletePermanentStateData @ 0x1407C665C (ExpWnfDeletePermanentStateData.c)
 *     ExpWnfPopulateStateData @ 0x140835B5C (ExpWnfPopulateStateData.c)
 *     ExpWnfWriteStateData @ 0x1409037E0 (ExpWnfWriteStateData.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140A5AC58 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 */

__int64 __fastcall ExpWnfAcquirePermanentDataStoreHandle(__int64 a1, _QWORD *a2)
{
  signed __int64 *v2; // rbx
  char *v5; // rsi
  __int64 v6; // rax
  __int64 result; // rax
  char *v8; // rax
  char *v9; // rsi
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  v2 = (signed __int64 *)(a1 + 8);
  while ( 1 )
  {
    v5 = (char *)KeAbPreAcquire((__int64)v2, 0LL);
    if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v2, 0, v5, (__int64)v2);
    if ( v5 )
      v5[10] = 1;
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
    v8 = (char *)KeAbPreAcquire((__int64)v2, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v2, v8, (__int64)v2);
    if ( v9 )
      v9[10] = 1;
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
