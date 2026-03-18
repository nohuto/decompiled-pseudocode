/*
 * XREFs of KasaniReportTelemetry @ 0x1405A6840
 * Callers:
 *     KasanDriverUnloadImage @ 0x1405A6020 (KasanDriverUnloadImage.c)
 *     KasaniTelemetryThread @ 0x1405A7530 (KasaniTelemetryThread.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KasaniSendReport @ 0x1405A6950 (KasaniSendReport.c)
 */

__int64 KasaniReportTelemetry()
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rax
  __int64 *v4; // rsi
  _BYTE *v5; // rbx

  v0 = (_DWORD *)qword_140FCDC78;
  if ( qword_140FCDC78 )
  {
    LODWORD(v1) = 64;
  }
  else
  {
    v0 = &KasaniReportsBoot;
    LODWORD(v1) = 4;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&KasaniTelemetryLock, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&KasaniTelemetryLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&KasaniTelemetryLock, v3, (__int64)&KasaniTelemetryLock);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  if ( *v0 <= (int)v1 )
    LODWORD(v1) = *v0;
  v1 = (int)v1;
  if ( (int)v1 > 0 )
  {
    v5 = (char *)v0 + 42;
    do
    {
      if ( !*v5 && *(v5 - 1) )
      {
        KasaniSendReport(v5 - 34);
        *v5 = 1;
      }
      v5 += 168;
      --v1;
    }
    while ( v1 );
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KasaniTelemetryLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KasaniTelemetryLock);
  KeAbPostRelease((ULONG_PTR)&KasaniTelemetryLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
