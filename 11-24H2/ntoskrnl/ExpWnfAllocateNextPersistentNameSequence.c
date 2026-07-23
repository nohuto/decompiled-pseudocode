/*
 * XREFs of ExpWnfAllocateNextPersistentNameSequence @ 0x140833C84
 * Callers:
 *     ExpWnfGenerateStateName @ 0x140834538 (ExpWnfGenerateStateName.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsAttachSiloToCurrentThread @ 0x14042FBB0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14043A1F0 (PsDetachSiloFromCurrentThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x140833900 (ExpWnfGetNameStoreRegistryRoot.c)
 */

__int64 __fastcall ExpWnfAllocateNextPersistentNameSequence(struct _LIST_ENTRY *a1, unsigned __int64 *a2)
{
  int v3; // r14d
  NTSTATUS NameStoreRegistryRoot; // edi
  struct _LIST_ENTRY *v5; // r12
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rbx
  char *v7; // rax
  char *v8; // r14
  NTSTATUS v9; // eax
  unsigned __int64 v10; // rsi
  char *v11; // rax
  char *v12; // r15
  unsigned __int64 v13; // rax
  unsigned __int64 Data; // [rsp+30h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+48h] [rbp-28h] BYREF

  ResultLength = 0;
  KeyHandle = 0LL;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v3 = 0;
  NameStoreRegistryRoot = 0;
  v5 = PsAttachSiloToCurrentThread(a1);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  Data = (unsigned __int64)CurrentServerSiloGlobals[57].Blink;
  if ( Data )
    goto LABEL_13;
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1, (volatile signed __int64 *)&KeyHandle);
  if ( NameStoreRegistryRoot < 0 )
    goto LABEL_34;
  v7 = (char *)KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[57], 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentServerSiloGlobals[57], 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CurrentServerSiloGlobals[57],
      v7,
      (__int64)&CurrentServerSiloGlobals[57]);
  if ( v8 )
    v8[10] = 1;
  v3 = 1;
  if ( CurrentServerSiloGlobals[57].Blink )
    goto LABEL_13;
  v9 = ZwQueryValueKey(
         KeyHandle,
         (PUNICODE_STRING)&ExpWnfPermanentNameSequenceNumberValueName,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x18u,
         &ResultLength);
  NameStoreRegistryRoot = v9;
  if ( v9 < 0 )
  {
    if ( v9 != -1073741772 )
      goto LABEL_31;
    do
LABEL_13:
      v10 = _InterlockedIncrement64((volatile signed __int64 *)&CurrentServerSiloGlobals[56].Blink);
    while ( !v10 );
    Data = (unsigned __int64)CurrentServerSiloGlobals[57].Blink;
    if ( v10 > Data )
    {
      if ( !KeyHandle )
      {
        NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(1, (volatile signed __int64 *)&KeyHandle);
        if ( NameStoreRegistryRoot < 0 )
          goto LABEL_30;
      }
      if ( !v3 )
      {
        v11 = (char *)KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[57], 0LL);
        v12 = v11;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentServerSiloGlobals[57], 0LL) )
          ExfAcquirePushLockExclusiveEx(
            (unsigned __int64 *)&CurrentServerSiloGlobals[57],
            v11,
            (__int64)&CurrentServerSiloGlobals[57]);
        if ( v12 )
          v12[10] = 1;
        v3 = 1;
      }
      if ( (struct _LIST_ENTRY *)v10 <= CurrentServerSiloGlobals[57].Blink )
        goto LABEL_29;
      v13 = (unsigned __int64)&CurrentServerSiloGlobals[57].Blink[6].Flink + 4;
      Data = v13;
      if ( v13 < v10 )
      {
        do
          v13 += 100LL;
        while ( v13 < v10 );
        Data = v13;
      }
      NameStoreRegistryRoot = ZwSetValueKey(
                                KeyHandle,
                                (PUNICODE_STRING)&ExpWnfPermanentNameSequenceNumberValueName,
                                0,
                                3u,
                                &Data,
                                8u);
      if ( NameStoreRegistryRoot < 0 )
      {
LABEL_30:
        if ( !v3 )
          goto LABEL_34;
        goto LABEL_31;
      }
      _InterlockedExchange64((volatile __int64 *)&CurrentServerSiloGlobals[57].Blink, Data);
    }
LABEL_29:
    *a2 = v10;
    goto LABEL_30;
  }
  if ( *(_DWORD *)&KeyValueInformation[8] == 8 )
  {
    Data = *(_QWORD *)&KeyValueInformation[12];
    _InterlockedExchange64(
      (volatile __int64 *)&CurrentServerSiloGlobals[56].Blink,
      *(__int64 *)&KeyValueInformation[12]);
    _InterlockedExchange64((volatile __int64 *)&CurrentServerSiloGlobals[57].Blink, Data);
    goto LABEL_13;
  }
  NameStoreRegistryRoot = -1073741823;
LABEL_31:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CurrentServerSiloGlobals[57], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CurrentServerSiloGlobals[57]);
  KeAbPostRelease((ULONG_PTR)&CurrentServerSiloGlobals[57]);
LABEL_34:
  PsDetachSiloFromCurrentThread(v5);
  return (unsigned int)NameStoreRegistryRoot;
}
