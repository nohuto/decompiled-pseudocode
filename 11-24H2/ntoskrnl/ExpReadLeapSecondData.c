/*
 * XREFs of ExpReadLeapSecondData @ 0x1407B68FC
 * Callers:
 *     ExInitializeLeapSecondData @ 0x1407B6080 (ExInitializeLeapSecondData.c)
 *     ExpLeapSecondDataRegistryNotifyHandler @ 0x1407B6610 (ExpLeapSecondDataRegistryNotifyHandler.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     ZwNotifyChangeKey @ 0x1406A9810 (ZwNotifyChangeKey.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x1407A97D0 (EtwTraceLeapSecondDataParseFailure.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x1407A98B0 (EtwTraceLeapSecondDataUpdate.c)
 *     ExpGetLeapSecondDataRegistryKeyHandle @ 0x1407B6580 (ExpGetLeapSecondDataRegistryKeyHandle.c)
 *     ExpParseAndUpdateLeapSecondData @ 0x1407B6800 (ExpParseAndUpdateLeapSecondData.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x1409A9310 (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x1409A9374 (ExReleaseTimeRefreshLockExclusive.c)
 *     ExpRefreshTimeZoneInformation @ 0x140A7981C (ExpRefreshTimeZoneInformation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ExpReadLeapSecondData(bool *a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *Pool2; // rdi
  void *v6; // r14
  char *v7; // rax
  char *v8; // rsi
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
  v7 = (char *)KeAbPreAcquire((__int64)&ExpLeapSecondDataLock, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpLeapSecondDataLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpLeapSecondDataLock, v7, (__int64)&ExpLeapSecondDataLock);
  if ( v8 )
    v8[10] = 1;
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
    Pool2 = (char *)ExAllocatePool2(0x40uLL, 0x38uLL, 0x6453704Cu);
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
  v6 = (void *)ExAllocatePool2(0x100uLL, ResultLength, 0x6453704Cu);
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
