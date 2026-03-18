/*
 * XREFs of ObCheckRefTraceProcess @ 0x140A53078
 * Callers:
 *     PspInsertProcess @ 0x1408A7074 (PspInsertProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     PsGetProcessImageFileName @ 0x14044CCB0 (PsGetProcessImageFileName.c)
 *     RtlInitAnsiString @ 0x1404654C0 (RtlInitAnsiString.c)
 *     RtlPrefixUnicodeString @ 0x14086E3C0 (RtlPrefixUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408ADC70 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall ObCheckRefTraceProcess(__int64 a1)
{
  NTSTATUS result; // eax
  const char *ProcessImageFileName; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  signed __int8 v6; // cf
  _QWORD *v7; // rsi
  STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  String1 = 0LL;
  if ( (ObpTraceFlags & 0x20) == 0 )
    return 0;
  ProcessImageFileName = (const char *)PsGetProcessImageFileName(a1);
  RtlInitAnsiString(&DestinationString, ProcessImageFileName);
  if ( !DestinationString.Length )
    return 0;
  result = RtlAnsiStringToUnicodeString(&String1, &DestinationString, 1u);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v5 = KeAbPreAcquire((__int64)&ObpStackTraceLock, 0LL);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
    v7 = v5;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, (__int64)v5, (__int64)&ObpStackTraceLock);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    if ( (ObpTraceFlags & 0x20) != 0 && RtlPrefixUnicodeString(&String1, ObpTraceProcessName, 1u) )
      _InterlockedOr((volatile signed __int32 *)(a1 + 496), 0x200u);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KeLeaveGuardedRegion();
    RtlFreeAnsiString(&String1);
    return 0;
  }
  return result;
}
