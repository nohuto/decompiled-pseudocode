/*
 * XREFs of PopDirectedDripsDiagTraceMarkDevice @ 0x140A80EAC
 * Callers:
 *     PopDirectedDripsMarkCandidateDevice @ 0x1406FC214 (PopDirectedDripsMarkCandidateDevice.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopDirectedDripsDiagGetOrCreateDeviceDiagnostic @ 0x1406FB9DC (PopDirectedDripsDiagGetOrCreateDeviceDiagnostic.c)
 */

__int64 __fastcall PopDirectedDripsDiagTraceMarkDevice(__int64 a1)
{
  _QWORD *v1; // rax
  signed __int8 v2; // cf
  _QWORD *v3; // rbx
  __int64 DeviceDiagnostic; // rax
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+54h] [rbp-14h]

  v6 = a1;
  v1 = KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsDiagLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&PopDirectedDripsDiagLock, (__int64)v1, (__int64)&PopDirectedDripsDiagLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  DeviceDiagnostic = PopDirectedDripsDiagGetOrCreateDeviceDiagnostic(v6);
  if ( DeviceDiagnostic )
    ++*(_DWORD *)(DeviceDiagnostic + 144);
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_MARK_DEVICE) )
  {
    UserData.Reserved = 0;
    v10 = 0;
    UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
    UserData.Size = 1;
    v8 = &v6;
    v9 = 8;
    EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_MARK_DEVICE, 0LL, 2u, &UserData);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
  return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
}
