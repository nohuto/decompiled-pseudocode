/*
 * XREFs of ExpReadLeapSecondData @ 0x1407B64AC
 * Callers:
 *     ExInitializeLeapSecondData @ 0x1407B5C30 (ExInitializeLeapSecondData.c)
 *     ExpLeapSecondDataRegistryNotifyHandler @ 0x1407B61C0 (ExpLeapSecondDataRegistryNotifyHandler.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1406A66F0 (ZwQueryValueKey.c)
 *     ZwNotifyChangeKey @ 0x1406A8870 (ZwNotifyChangeKey.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x1407A9690 (EtwTraceLeapSecondDataParseFailure.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x1407A9770 (EtwTraceLeapSecondDataUpdate.c)
 *     ExpGetLeapSecondDataRegistryKeyHandle @ 0x1407B6130 (ExpGetLeapSecondDataRegistryKeyHandle.c)
 *     ExpParseAndUpdateLeapSecondData @ 0x1407B63B0 (ExpParseAndUpdateLeapSecondData.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409B1FC0 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409B2024 (ExReleaseTimeRefreshLockExclusive.c)
 *     ExpRefreshTimeZoneInformation @ 0x1409DC59C (ExpRefreshTimeZoneInformation.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpReadLeapSecondData(bool *a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *Pool2; // rdi
  void *v6; // r14
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  HANDLE v9; // rsi
  bool v10; // r15
  int v11; // r15d
  NTSTATUS v12; // eax
  int updated; // eax
  ULONG ResultLength; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-28h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+60h] [rbp-20h] BYREF
  int v17; // [rsp+64h] [rbp-1Ch]
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]

  ResultLength = 0;
  CurrentThread = KeGetCurrentThread();
  KeyHandle = 0LL;
  Pool2 = 0LL;
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((__int64)&ExpLeapSecondDataLock, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpLeapSecondDataLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpLeapSecondDataLock, (__int64)v7, (__int64)&ExpLeapSecondDataLock);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  if ( ExpLeapSecondDataRegistryNotify )
  {
    v9 = *(HANDLE *)ExpLeapSecondDataRegistryNotify;
    Pool2 = (char *)ExpLeapSecondDataRegistryNotify;
    KeyHandle = *(HANDLE *)ExpLeapSecondDataRegistryNotify;
  }
  else
  {
    if ( ExpGetLeapSecondDataRegistryKeyHandle(&KeyHandle) < 0 )
      goto LABEL_26;
    Pool2 = (char *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
      goto LABEL_26;
    v9 = KeyHandle;
  }
  *((_QWORD *)Pool2 + 3) = ExpLeapSecondDataRegistryNotifyHandler;
  *((_QWORD *)Pool2 + 4) = 0LL;
  *((_QWORD *)Pool2 + 1) = 0LL;
  if ( ZwNotifyChangeKey(
         v9,
         0LL,
         (PIO_APC_ROUTINE)(Pool2 + 8),
         (PVOID)1,
         (PIO_STATUS_BLOCK)(Pool2 + 40),
         4u,
         0,
         0LL,
         0,
         1u) < 0 )
    goto LABEL_26;
  v10 = 1;
  if ( ZwQueryValueKey(
         v9,
         (PUNICODE_STRING)&ExpLeapSecondRegkeyValueEnabled,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x14u,
         &ResultLength) >= 0
    && v17 == 4
    && v18 == 4 )
  {
    v10 = v19 != 0;
  }
  *a1 = v10;
  v11 = *((_DWORD *)a1 + 1);
  v12 = ZwQueryValueKey(
          v9,
          (PUNICODE_STRING)&ExpLeapSecondRegkeyValueLeapSeconds,
          KeyValuePartialInformation,
          0LL,
          0,
          &ResultLength);
  if ( v12 != -1073741789 )
    goto LABEL_18;
  v6 = (void *)ExAllocatePool2(0x100uLL);
  if ( v6 )
  {
    v12 = ZwQueryValueKey(
            v9,
            (PUNICODE_STRING)&ExpLeapSecondRegkeyValueLeapSeconds,
            KeyValuePartialInformation,
            v6,
            ResultLength,
            &ResultLength);
LABEL_18:
    if ( v12 >= 0 )
    {
      updated = ExpParseAndUpdateLeapSecondData((__int64)v6, (__int64)a1);
      ExLeapSecondDataLastParseResult = updated;
      if ( updated )
        EtwTraceLeapSecondDataParseFailure(updated);
    }
  }
  if ( a2 )
  {
    ExAcquireTimeRefreshLockExclusive();
    ExpRefreshTimeZoneInformation(0LL);
    ExReleaseTimeRefreshLockExclusive();
  }
  EtwTraceLeapSecondDataUpdate(1, *a1, *((_DWORD *)a1 + 1), v11);
  if ( !ExpLeapSecondDataRegistryNotify )
  {
    ExpLeapSecondDataRegistryNotify = (__int64)Pool2;
    *(_QWORD *)Pool2 = v9;
  }
  Pool2 = 0LL;
  KeyHandle = 0LL;
LABEL_26:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpLeapSecondDataLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpLeapSecondDataLock);
  KeAbPostRelease((ULONG_PTR)&ExpLeapSecondDataLock);
  KeLeaveCriticalRegion();
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6453704Cu);
  if ( Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0x6453704Cu);
    ExpLeapSecondDataRegistryNotify = 0LL;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
