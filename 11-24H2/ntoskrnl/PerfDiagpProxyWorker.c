/*
 * XREFs of PerfDiagpProxyWorker @ 0x1407A0860
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     Feature_AddMemInfoToBootTrace__private_IsEnabledDeviceUsageNoInline @ 0x14064A89C (Feature_AddMemInfoToBootTrace__private_IsEnabledDeviceUsageNoInline.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x1407A077C (PerfDiagpInitializeLoggerInfo.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x1407A0A84 (PerfDiagpStartPerfDiagLogger.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407A0B5C (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140A82090 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 *     PerfDiagpIsTracingAllowed @ 0x140AB1E0C (PerfDiagpIsTracingAllowed.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PerfDiagpProxyWorker(_DWORD *a1)
{
  int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // rsi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v7; // rdx
  const wchar_t *v8; // r8
  const wchar_t *v9; // rcx
  int updated; // eax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return;
  ReturnLength = 0;
  v1 = a1[8];
  ExFreePoolWithTag(a1, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (char *)KeAbPreAcquire((__int64)&qword_140EFFA40, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140EFFA40, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140EFFA40, v3, (__int64)&qword_140EFFA40);
  if ( v5 )
    v5[10] = 1;
  if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
    goto LABEL_32;
  if ( dword_140EFFA48 == v1 - 1 )
    goto LABEL_14;
  if ( v1 != 3 )
  {
    if ( ((v1 - 5) & 0xFFFFFFFD) != 0 )
      goto LABEL_12;
LABEL_14:
    IsEnabledDeviceUsageNoInline = Feature_AddMemInfoToBootTrace__private_IsEnabledDeviceUsageNoInline();
    v8 = L"Diagnostics\\Performance\\BootCKCLSettings2";
    if ( !IsEnabledDeviceUsageNoInline )
      v8 = L"Diagnostics\\Performance\\BootCKCLSettings";
    switch ( v1 )
    {
      case 1:
        v9 = v8;
        break;
      case 2:
      case 3:
        updated = PerfDiagpUpdatePerfDiagLoggerEnableFlags((_DWORD)v8);
        goto LABEL_30;
      case 4:
        goto LABEL_24;
      case 5:
        v9 = L"Diagnostics\\Performance\\SecondaryLogonCKCLSettings";
        break;
      case 6:
LABEL_24:
        PerfDiagpInitializeLoggerInfo(0, 0);
        NtTraceControl(EtwStopLoggerCode, &OutputBuffer, OutputBuffer, &OutputBuffer, OutputBuffer, &ReturnLength);
        goto LABEL_31;
      case 7:
        PerfDiagpSaveActiveDCLLogFileName((unsigned int)(v1 - 6), v7, v8);
        v9 = L"Diagnostics\\Performance\\ShutdownCKCLSettings";
        break;
      default:
        goto LABEL_31;
    }
    updated = PerfDiagpStartPerfDiagLogger(v9);
LABEL_30:
    if ( updated >= 0 )
      goto LABEL_31;
LABEL_32:
    dword_140EFFA48 = 8;
    goto LABEL_33;
  }
  if ( dword_140EFFA48 == 1 )
    goto LABEL_31;
LABEL_12:
  if ( v1 >= dword_140EFFA48 )
    goto LABEL_32;
  v1 = dword_140EFFA48;
LABEL_31:
  dword_140EFFA48 = v1;
LABEL_33:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140EFFA40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140EFFA40);
  KeAbPostRelease((ULONG_PTR)&qword_140EFFA40);
  KeLeaveCriticalRegion();
}
