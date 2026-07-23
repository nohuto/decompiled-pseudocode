/*
 * XREFs of PerfDiagpProxyWorker @ 0x140791390
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x1407912AC (PerfDiagpInitializeLoggerInfo.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x1407915A4 (PerfDiagpStartPerfDiagLogger.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14079167C (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140A82918 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     PerfDiagpIsTracingAllowed @ 0x140AB2F30 (PerfDiagpIsTracingAllowed.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PerfDiagpProxyWorker(_DWORD *a1)
{
  int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // rsi
  __int64 v6; // rcx
  const wchar_t *v7; // rcx
  const wchar_t *v8; // rdx
  int started; // eax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return;
  ReturnLength = 0;
  v1 = a1[8];
  ExFreePoolWithTag(a1, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140EFF3C0, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140EFF3C0, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140EFF3C0, v3, (__int64)&qword_140EFF3C0);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
    goto LABEL_32;
  if ( dword_140EFF3C8 == v1 - 1 )
  {
    if ( v1 == 1 )
    {
      v7 = L"Diagnostics\\Performance\\BootCKCLSettings";
      goto LABEL_29;
    }
    v6 = (unsigned int)(v1 - 2);
    if ( v1 == 2 )
    {
      v8 = L"WaitingForLogonEnableKernelFlags";
    }
    else
    {
      v6 = (unsigned int)(v1 - 3);
      if ( v1 != 3 )
      {
        if ( v1 != 4 )
        {
          if ( v1 == 5 )
            goto LABEL_24;
          if ( v1 != 6 )
          {
            if ( v1 != 7 )
              goto LABEL_31;
LABEL_22:
            PerfDiagpSaveActiveDCLLogFileName();
            v7 = L"Diagnostics\\Performance\\ShutdownCKCLSettings";
LABEL_29:
            started = PerfDiagpStartPerfDiagLogger(v7);
LABEL_30:
            if ( started >= 0 )
              goto LABEL_31;
LABEL_32:
            dword_140EFF3C8 = 8;
            goto LABEL_33;
          }
        }
        PerfDiagpInitializeLoggerInfo(0, 0);
        NtTraceControl(EtwStopLoggerCode, &OutputBuffer, OutputBuffer, &OutputBuffer, OutputBuffer, &ReturnLength);
        goto LABEL_31;
      }
      v8 = L"EnableKernelFlags";
    }
    started = PerfDiagpUpdatePerfDiagLoggerEnableFlags(v6, v8);
    goto LABEL_30;
  }
  if ( v1 != 3 )
  {
    if ( v1 != 5 )
    {
      if ( v1 != 7 )
        goto LABEL_13;
      goto LABEL_22;
    }
LABEL_24:
    v7 = L"Diagnostics\\Performance\\SecondaryLogonCKCLSettings";
    goto LABEL_29;
  }
  if ( dword_140EFF3C8 == 1 )
    goto LABEL_31;
LABEL_13:
  if ( v1 >= dword_140EFF3C8 )
    goto LABEL_32;
  v1 = dword_140EFF3C8;
LABEL_31:
  dword_140EFF3C8 = v1;
LABEL_33:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140EFF3C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140EFF3C0);
  KeAbPostRelease((ULONG_PTR)&qword_140EFF3C0);
  KeLeaveCriticalRegion();
}
