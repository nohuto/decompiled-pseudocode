/*
 * XREFs of PspTerminateProcess @ 0x140939700
 * Callers:
 *     PspTerminatePicoProcess @ 0x14077A1C0 (PspTerminatePicoProcess.c)
 *     PsTerminateProcess @ 0x140938BD4 (PsTerminateProcess.c)
 *     NtTerminateProcess @ 0x14093B030 (NtTerminateProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeSetProcessSchedulingGroup @ 0x14047C244 (KeSetProcessSchedulingGroup.c)
 *     EtwTraceProcessTerminate @ 0x14048AA90 (EtwTraceProcessTerminate.c)
 *     KeForceResumeProcess @ 0x1404A7414 (KeForceResumeProcess.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PspRundownSingleProcess @ 0x1408A8B38 (PspRundownSingleProcess.c)
 *     PspTerminateAllThreads @ 0x14094A964 (PspTerminateAllThreads.c)
 */

__int64 __fastcall PspTerminateProcess(volatile signed __int32 *SystemArgument1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  unsigned int v5; // ebp
  char v7; // r14
  signed __int32 v8; // esi
  int v9; // r15d
  char v10; // di
  bool v11; // cf
  volatile signed __int32 *v12; // rsi
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  unsigned int v15; // eax
  unsigned int v16; // edi

  v4 = a4;
  v5 = a3;
  v7 = a4;
  _m_prefetchw((const void *)(SystemArgument1 + 125));
  v8 = _InterlockedOr(SystemArgument1 + 125, 8u);
  v9 = v8 & 8;
  if ( (v8 & 8) != 0 )
  {
    v10 = a4 | 2;
  }
  else
  {
    if ( (PerfGlobalGroupMask[0] & 1) != 0 )
      EtwTraceProcessTerminate((__int64)SystemArgument1);
    KeSetProcessSchedulingGroup((__int64)SystemArgument1, 0LL);
    v10 = v4 | 4;
    v11 = (v8 & 0x40000000) != 0;
    v12 = SystemArgument1 + 114;
    if ( !v11 )
      v10 = v7;
    v13 = KeAbPreAcquire((__int64)(SystemArgument1 + 114), 0LL);
    v14 = v13;
    if ( _interlockedbittestandset64(v12, 0LL) )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)SystemArgument1 + 57,
        (__int64)v13,
        (__int64)(SystemArgument1 + 114));
    if ( v14 )
      *((_BYTE *)v14 + 10) = 1;
    if ( *((_DWORD *)SystemArgument1 + 224) && (v5 != -1073741749 || *((_DWORD *)SystemArgument1 + 341) == 259) )
      *((_DWORD *)SystemArgument1 + 341) = v5;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)SystemArgument1 + 57);
    KeAbPostRelease((ULONG_PTR)(SystemArgument1 + 114));
  }
  if ( (SystemArgument1[124] & 0x400) == 0 )
  {
    v15 = PspTerminateAllThreads((PVOID)SystemArgument1);
LABEL_16:
    v16 = v15;
    goto LABEL_17;
  }
  if ( *((_QWORD *)&xmmword_140F05760 + 1) && (v10 & 8) == 0 )
  {
    v15 = guard_dispatch_icall_no_overrides(SystemArgument1, v5, a3, a4);
    goto LABEL_16;
  }
  v16 = 290;
  PspRundownSingleProcess((char *)SystemArgument1, 0);
LABEL_17:
  if ( !v9 )
    KeForceResumeProcess((__int64)SystemArgument1);
  return v16;
}
