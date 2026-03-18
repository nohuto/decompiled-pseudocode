/*
 * XREFs of EtwpCovSampCaptureContextStop @ 0x1404BB96C
 * Callers:
 *     EtwpCoverageSamplerStop @ 0x140ADAAD0 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1404BBAF0 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1404BBBC4 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x140651964 (EtwpCovSampCaptureCancelApcs.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140AB6D0C (EtwpCovSampCaptureFreeLookasides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCovSampCaptureContextStop(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  KSPIN_LOCK *v2; // rdi
  KIRQL v4; // al
  KIRQL v5; // bp
  __int64 *i; // rdx
  LARGE_INTEGER v7; // rdi
  void *v8; // rcx
  void *v9; // rcx
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = (KSPIN_LOCK *)(a1 + 632);
  --CurrentThread->KernelApcDisable;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 632));
  *(_DWORD *)(a1 + 1280) = 0;
  v5 = v4;
  if ( *(_DWORD *)(a1 + 1284) )
    *(_DWORD *)(a1 + 1284) = 0;
  for ( i = *(__int64 **)(a1 + 944); i != (__int64 *)(a1 + 944); i = (__int64 *)*i )
  {
    *((_DWORD *)i + 6) = 0;
    *((_DWORD *)i + 7) = 0;
  }
  KeResetEvent((PRKEVENT)(a1 + 1256));
  *(_DWORD *)(a1 + 1288) = 0;
  KeReleaseSpinLock(v2, v5);
  EtwpCovSampCaptureFlushSampleBuffers(a1);
  EtwpCovSampCaptureCleanupLookasides(a1);
  v7.QuadPart = -2500000LL;
  Timeout.QuadPart = -2500000LL;
  while ( KeWaitForSingleObject((PVOID)(a1 + 1256), Executive, 0, 0, &Timeout) )
  {
    EtwpCovSampCaptureCancelApcs(a1);
    EtwpCovSampCaptureFlushSampleBuffers(a1);
    v7.QuadPart *= 2LL;
    Timeout = v7;
    if ( v7.QuadPart < -9600000000LL )
    {
      Timeout.QuadPart = -9600000000LL;
      v7.QuadPart = -9600000000LL;
    }
  }
  EtwpCovSampCaptureFreeLookasides(a1);
  v8 = *(void **)(a1 + 1320);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x56777445u);
    *(_QWORD *)(a1 + 1320) = 0LL;
  }
  v9 = *(void **)(a1 + 1328);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x56777445u);
    *(_QWORD *)(a1 + 1328) = 0LL;
  }
  *(_QWORD *)(a1 + 1312) = 0LL;
  KeLeaveCriticalRegion();
}
