/*
 * XREFs of PerfDiagpProxyWorker @ 0x1407A0750
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     Feature_AddMemInfoToBootTrace__private_IsEnabledDeviceUsageNoInline @ 0x14064C2DC (Feature_AddMemInfoToBootTrace__private_IsEnabledDeviceUsageNoInline.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x1407A066C (PerfDiagpInitializeLoggerInfo.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x1407A0974 (PerfDiagpStartPerfDiagLogger.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407A0A4C (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140A87340 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     PerfDiagpIsTracingAllowed @ 0x140AB7A58 (PerfDiagpIsTracingAllowed.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PerfDiagpProxyWorker(_DWORD *a1)
{
  int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax
  signed __int8 v4; // cf
  _QWORD *v5; // rsi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v7; // rdx
  const wchar_t *v8; // r8
  const wchar_t *v9; // rcx
  int updated; // eax
  int v11; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return;
  v11 = 0;
  v1 = a1[8];
  ExFreePoolWithTag(a1, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140EFF760, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140EFF760, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140EFF760, (__int64)v3, (__int64)&qword_140EFF760);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
    goto LABEL_32;
  if ( dword_140EFF768 == v1 - 1 )
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
        NtTraceControl(2LL, &dword_140EFF790, (unsigned int)dword_140EFF790, &dword_140EFF790, dword_140EFF790, &v11);
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
    dword_140EFF768 = 8;
    goto LABEL_33;
  }
  if ( dword_140EFF768 == 1 )
    goto LABEL_31;
LABEL_12:
  if ( v1 >= dword_140EFF768 )
    goto LABEL_32;
  v1 = dword_140EFF768;
LABEL_31:
  dword_140EFF768 = v1;
LABEL_33:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140EFF760, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140EFF760);
  KeAbPostRelease((ULONG_PTR)&qword_140EFF760);
  KeLeaveCriticalRegion();
}
