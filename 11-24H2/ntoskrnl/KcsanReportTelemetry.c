/*
 * XREFs of KcsanReportTelemetry @ 0x1405AB2D0
 * Callers:
 *     KasanDriverUnloadImage @ 0x1405A6920 (KasanDriverUnloadImage.c)
 *     KcsaniTelemetryThread @ 0x1405AC380 (KcsaniTelemetryThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KcsaniSendReport @ 0x1405AB8F0 (KcsaniSendReport.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 KcsanReportTelemetry()
{
  struct _KTHREAD *CurrentThread; // rax
  char *v1; // rax
  char *v2; // rbx
  int v3; // ebx
  __int64 v4; // rsi
  char *v5; // rdi
  _DWORD v8[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v9; // [rsp+48h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-58h] BYREF
  __int16 *v12; // [rsp+70h] [rbp-48h]
  int v13; // [rsp+78h] [rbp-40h]
  int v14; // [rsp+7Ch] [rbp-3Ch]
  __int64 *v15; // [rsp+80h] [rbp-38h]
  __int64 v16; // [rsp+88h] [rbp-30h]
  _DWORD *v17; // [rsp+90h] [rbp-28h]
  __int64 v18; // [rsp+98h] [rbp-20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (char *)KeAbPreAcquire((__int64)&KcsaniTelemetryLock, 0LL);
  v2 = v1;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&KcsaniTelemetryLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&KcsaniTelemetryLock, v1, (__int64)&KcsaniTelemetryLock);
  if ( v2 )
    v2[10] = 1;
  v3 = dword_140F591A8;
  if ( dword_140F591A8 < dword_140F591A4 )
  {
    v4 = (unsigned int)(dword_140F591A4 - dword_140F591A8);
    v5 = (char *)&unk_140F591B0 + 184 * dword_140F591A8;
    v3 = dword_140F591A4;
    do
    {
      KcsaniSendReport(v5);
      v5 += 184;
      --v4;
    }
    while ( v4 );
  }
  dword_140F591A8 = v3;
  if ( byte_140F591AC == 1 && !byte_140F591AD )
  {
    if ( (unsigned int)dword_140E07038 > 5
      && (qword_140E07048 & 0x400000000000LL) != 0
      && (qword_140E07050 & 0x400000000000LL) == qword_140E07050 )
    {
      EventDescriptor.Keyword = 0x400000000000LL;
      v15 = &v9;
      v9 = 0x2000000LL;
      v16 = 8LL;
      v17 = v8;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_140E07040;
      v8[0] = 256;
      v18 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      UserData.Size = *(unsigned __int16 *)off_140E07040;
      v12 = word_140047522;
      UserData.Reserved = 2;
      v13 = 47;
      v14 = 1;
      v8[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteEx(qword_140E07058, &EventDescriptor, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
    byte_140F591AD = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KcsaniTelemetryLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KcsaniTelemetryLock);
  KeAbPostRelease((ULONG_PTR)&KcsaniTelemetryLock);
  return KeLeaveCriticalRegionThread();
}
