/*
 * XREFs of KcsanReportTelemetry @ 0x1405AA9D0
 * Callers:
 *     KasanDriverUnloadImage @ 0x1405A6020 (KasanDriverUnloadImage.c)
 *     KcsaniTelemetryThread @ 0x1405ABA80 (KcsaniTelemetryThread.c)
 * Callees:
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KcsaniSendReport @ 0x1405AAFF0 (KcsaniSendReport.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 KcsanReportTelemetry()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v1; // rax
  __int64 *v2; // rbx
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
  v1 = KeAbPreAcquire((__int64)&KcsaniTelemetryLock, 0LL);
  v2 = v1;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&KcsaniTelemetryLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&KcsaniTelemetryLock, v1, (__int64)&KcsaniTelemetryLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  v3 = dword_140F58788;
  if ( dword_140F58788 < dword_140F58784 )
  {
    v4 = (unsigned int)(dword_140F58784 - dword_140F58788);
    v5 = (char *)&unk_140F58790 + 184 * dword_140F58788;
    v3 = dword_140F58784;
    do
    {
      KcsaniSendReport(v5);
      v5 += 184;
      --v4;
    }
    while ( v4 );
  }
  dword_140F58788 = v3;
  if ( byte_140F5878C == 1 && !byte_140F5878D )
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
      v12 = word_140046BBA;
      UserData.Reserved = 2;
      v13 = 47;
      v14 = 1;
      v8[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteEx(qword_140E07058, &EventDescriptor, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
    byte_140F5878D = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KcsaniTelemetryLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KcsaniTelemetryLock);
  KeAbPostRelease((ULONG_PTR)&KcsaniTelemetryLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
