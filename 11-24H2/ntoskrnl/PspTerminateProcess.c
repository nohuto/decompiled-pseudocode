/*
 * XREFs of PspTerminateProcess @ 0x1408F4E40
 * Callers:
 *     PspTerminatePicoProcess @ 0x14077A2C0 (PspTerminatePicoProcess.c)
 *     PsTerminateProcess @ 0x1408F32A4 (PsTerminateProcess.c)
 *     NtTerminateProcess @ 0x140ACF260 (NtTerminateProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeSetProcessSchedulingGroup @ 0x1402D6F08 (KeSetProcessSchedulingGroup.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwTraceProcessTerminate @ 0x1404858B8 (EtwTraceProcessTerminate.c)
 *     KeForceResumeProcess @ 0x1404A1E44 (KeForceResumeProcess.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PspTerminateAllThreads @ 0x1408EEED4 (PspTerminateAllThreads.c)
 *     PspRundownSingleProcess @ 0x1408FED98 (PspRundownSingleProcess.c)
 */

__int64 __fastcall PspTerminateProcess(
        volatile signed __int32 *SystemArgument1,
        struct _EX_RUNDOWN_REF *a2,
        unsigned int a3,
        unsigned int a4)
{
  signed __int32 v9; // esi
  int v10; // r15d
  unsigned int v11; // edi
  bool v12; // cf
  volatile signed __int32 *v13; // rsi
  char *v14; // rax
  char *v15; // r14
  unsigned int v16; // eax
  unsigned int v17; // edi

  _m_prefetchw((const void *)(SystemArgument1 + 125));
  v9 = _InterlockedOr(SystemArgument1 + 125, 8u);
  v10 = v9 & 8;
  if ( (v9 & 8) != 0 )
  {
    v11 = a4 | 2;
  }
  else
  {
    if ( (PerfGlobalGroupMask[0] & 1) != 0 )
      EtwTraceProcessTerminate((__int64)SystemArgument1);
    KeSetProcessSchedulingGroup((__int64)SystemArgument1, 0LL);
    v11 = a4 | 4;
    v12 = (v9 & 0x40000000) != 0;
    v13 = SystemArgument1 + 114;
    if ( !v12 )
      v11 = a4;
    v14 = (char *)KeAbPreAcquire((__int64)(SystemArgument1 + 114), 0LL);
    v15 = v14;
    if ( _interlockedbittestandset64(v13, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)SystemArgument1 + 57, v14, (__int64)(SystemArgument1 + 114));
    if ( v15 )
      v15[10] = 1;
    if ( *((_DWORD *)SystemArgument1 + 224) && (a3 != -1073741749 || *((_DWORD *)SystemArgument1 + 341) == 259) )
      *((_DWORD *)SystemArgument1 + 341) = a3;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)SystemArgument1 + 57);
    KeAbPostRelease((ULONG_PTR)(SystemArgument1 + 114));
  }
  if ( (SystemArgument1[124] & 0x400) == 0 )
  {
    v16 = PspTerminateAllThreads((PVOID)SystemArgument1, a2, a3, v11);
LABEL_16:
    v17 = v16;
    goto LABEL_17;
  }
  if ( *((_QWORD *)&xmmword_140F05A40 + 1) && (v11 & 8) == 0 )
  {
    v16 = guard_dispatch_icall_no_overrides(SystemArgument1, a3);
    goto LABEL_16;
  }
  v17 = 290;
  PspRundownSingleProcess((PVOID)SystemArgument1);
LABEL_17:
  if ( !v10 )
    KeForceResumeProcess((__int64)SystemArgument1);
  return v17;
}
