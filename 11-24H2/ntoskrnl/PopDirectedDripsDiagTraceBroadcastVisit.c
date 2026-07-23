/*
 * XREFs of PopDirectedDripsDiagTraceBroadcastVisit @ 0x140AAD7EC
 * Callers:
 *     PopDirectedDripsVisitDevice @ 0x1406F760C (PopDirectedDripsVisitDevice.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopDirectedDripsDiagGetOrCreateDeviceDiagnostic @ 0x1406F961C (PopDirectedDripsDiagGetOrCreateDeviceDiagnostic.c)
 */

__int64 __fastcall PopDirectedDripsDiagTraceBroadcastVisit(__int64 a1, __int64 a2, int a3)
{
  char *v5; // rax
  signed __int8 v6; // cf
  char *v7; // rbx
  int v8; // eax
  __int64 DeviceDiagnostic; // rax
  __int64 v10; // rbx
  bool v11; // zf
  unsigned int v12; // eax
  __int64 v13; // rax
  int v14; // ecx
  int v16; // [rsp+30h] [rbp-49h] BYREF
  int v17; // [rsp+34h] [rbp-45h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-41h] BYREF
  int v19; // [rsp+3Ch] [rbp-3Dh] BYREF
  __int64 v20; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  int *v22; // [rsp+60h] [rbp-19h]
  int v23; // [rsp+68h] [rbp-11h]
  int v24; // [rsp+6Ch] [rbp-Dh]
  __int64 *v25; // [rsp+70h] [rbp-9h]
  int v26; // [rsp+78h] [rbp-1h]
  int v27; // [rsp+7Ch] [rbp+3h]
  unsigned int *v28; // [rsp+80h] [rbp+7h]
  int v29; // [rsp+88h] [rbp+Fh]
  int v30; // [rsp+8Ch] [rbp+13h]
  __int64 v31; // [rsp+90h] [rbp+17h]
  int v32; // [rsp+98h] [rbp+1Fh]
  int v33; // [rsp+9Ch] [rbp+23h]
  int *v34; // [rsp+A0h] [rbp+27h]
  int v35; // [rsp+A8h] [rbp+2Fh]
  int v36; // [rsp+ACh] [rbp+33h]

  v18 = 0;
  v17 = 0;
  v19 = 0;
  v20 = a1;
  v5 = (char *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsDiagLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&PopDirectedDripsDiagLock, v5, (__int64)&PopDirectedDripsDiagLock);
  if ( v7 )
    v7[10] = 1;
  if ( a2 )
    v8 = *(_DWORD *)(a2 + 32);
  else
    v8 = -1;
  v16 = v8;
  DeviceDiagnostic = PopDirectedDripsDiagGetOrCreateDeviceDiagnostic(v20);
  v10 = DeviceDiagnostic;
  if ( DeviceDiagnostic )
  {
    v11 = (*(_DWORD *)(DeviceDiagnostic + 152) & 0x20000) == 0;
    *(_DWORD *)(DeviceDiagnostic + 148) = v16;
    if ( !v11 )
      v17 = 1;
    if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_DEVICE_VISIT) )
    {
      v12 = *(unsigned __int16 *)(v20 + 40);
      UserData.Reserved = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v18 = v12 >> 1;
      UserData.Ptr = (ULONGLONG)&v16;
      v22 = &v17;
      v25 = &v20;
      v28 = &v18;
      UserData.Size = 4;
      v23 = 4;
      v29 = 4;
      v26 = 8;
      v13 = *(_QWORD *)(v20 + 48);
      v14 = *(unsigned __int16 *)(v20 + 40);
      v33 = 0;
      v36 = 0;
      v31 = v13;
      v34 = &v19;
      v32 = v14;
      v35 = 4;
      v19 = a3;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_DEVICE_VISIT, 0LL, 6u, &UserData);
    }
    *(_DWORD *)(v10 + 152) |= 0x40000u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
  return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
}
