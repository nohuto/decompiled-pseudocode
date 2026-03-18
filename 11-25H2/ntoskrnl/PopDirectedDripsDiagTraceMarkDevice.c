/*
 * XREFs of PopDirectedDripsDiagTraceMarkDevice @ 0x140A7D834
 * Callers:
 *     PopDirectedDripsMarkCandidateDevice @ 0x1406F04D0 (PopDirectedDripsMarkCandidateDevice.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PopDirectedDripsDiagGetOrCreateDeviceDiagnostic @ 0x1406EFB6C (PopDirectedDripsDiagGetOrCreateDeviceDiagnostic.c)
 */

__int64 __fastcall PopDirectedDripsDiagTraceMarkDevice(__int64 a1)
{
  __int64 *v1; // rax
  signed __int8 v2; // cf
  __int64 *v3; // rbx
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
    ExfAcquirePushLockExclusiveEx(&PopDirectedDripsDiagLock, v1, (__int64)&PopDirectedDripsDiagLock);
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
