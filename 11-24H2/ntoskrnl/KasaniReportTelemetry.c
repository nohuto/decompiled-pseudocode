/*
 * XREFs of KasaniReportTelemetry @ 0x1405AA1D0
 * Callers:
 *     KasanDriverUnloadImage @ 0x1405A99B0 (KasanDriverUnloadImage.c)
 *     KasaniTelemetryThread @ 0x1405AAEC0 (KasaniTelemetryThread.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KasaniSendReport @ 0x1405AA2E0 (KasaniSendReport.c)
 */

__int64 KasaniReportTelemetry()
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rsi
  _BYTE *v5; // rbx

  v0 = (_DWORD *)qword_140FCDC38;
  if ( qword_140FCDC38 )
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
    ExfAcquirePushLockExclusiveEx(&KasaniTelemetryLock, (__int64)v3, (__int64)&KasaniTelemetryLock);
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
  return KeLeaveCriticalRegionThread();
}
