/*
 * XREFs of ExpWnfInvalidateDataStores @ 0x140A9A7A8
 * Callers:
 *     ExWnfHiveUnloaded @ 0x14092D110 (ExWnfHiveUnloaded.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

__int64 __fastcall ExpWnfInvalidateDataStores(void *Buf1, size_t Size)
{
  size_t v2; // rbp
  char *v4; // rbx
  unsigned __int64 *i; // rbx
  char *v6; // rax
  char *v7; // rsi
  void *v8; // rsi

  v2 = (unsigned int)Size;
  v4 = (char *)KeAbPreAcquire((__int64)&ExpWnfPermenentDataStoresListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpWnfPermenentDataStoresListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&ExpWnfPermenentDataStoresListLock,
      0,
      v4,
      (__int64)&ExpWnfPermenentDataStoresListLock);
  if ( v4 )
    v4[10] = 1;
  for ( i = (unsigned __int64 *)ExpWnfPermenentDataStoresList;
        i != (unsigned __int64 *)&ExpWnfPermenentDataStoresList;
        i = (unsigned __int64 *)*i )
  {
    if ( *(i - 1) && *((_DWORD *)i + 5) == (_DWORD)v2 && !memcmp(Buf1, i + 3, v2) )
    {
      v6 = (char *)KeAbPreAcquire((__int64)(i - 2), 0LL);
      v7 = v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)i - 4, 0LL) )
        ExfAcquirePushLockExclusiveEx(i - 2, v6, (__int64)(i - 2));
      if ( v7 )
        v7[10] = 1;
      v8 = (void *)*(i - 1);
      *(i - 1) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)i - 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)i - 2);
      KeAbPostRelease((ULONG_PTR)(i - 2));
      if ( v8 )
        ZwClose(v8);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpWnfPermenentDataStoresListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpWnfPermenentDataStoresListLock);
  return KeAbPostRelease((ULONG_PTR)&ExpWnfPermenentDataStoresListLock);
}
