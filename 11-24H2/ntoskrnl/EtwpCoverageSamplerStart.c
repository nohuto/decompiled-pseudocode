/*
 * XREFs of EtwpCoverageSamplerStart @ 0x1407B3198
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x1407B34B4 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeStartProfile @ 0x1404CFCE0 (KeStartProfile.c)
 *     MmEnumerateSystemImages @ 0x1404F8410 (MmEnumerateSystemImages.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     KeInitializeProfileCallback @ 0x1406F45A0 (KeInitializeProfileCallback.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B23EC (EtwpCovSampCaptureContextStart.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x14085C8B8 (EtwpUpdateGlobalGroupMasks.c)
 *     PsEnumProcesses @ 0x14085F924 (PsEnumProcesses.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x140A546D4 (EtwpCoverageSamplerAllocateTable.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140A85BE0 (PsSetLoadImageNotifyRoutineEx.c)
 *     KeSetIntervalProfile @ 0x140ABD6BC (KeSetIntervalProfile.c)
 */

__int64 __fastcall EtwpCoverageSamplerStart(ULONG_PTR a1)
{
  unsigned int v2; // r14d
  _QWORD *Table; // rax
  int ImageNotifyRoutine; // edi
  _QWORD *v5; // rdx
  unsigned int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  struct _KTHREAD *CurrentThread; // rax
  char *v10; // rax
  char *v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rcx
  int v14; // edx

  v2 = 0;
  Table = (_QWORD *)EtwpCoverageSamplerAllocateTable(*(unsigned int *)(a1 + 36));
  *(_QWORD *)(a1 + 1664) = Table;
  if ( !Table )
  {
    ImageNotifyRoutine = -1073741670;
    goto LABEL_31;
  }
  ++*(_DWORD *)(a1 + 1696);
  v5 = *(_QWORD **)(a1 + 1688);
  if ( *v5 != a1 + 1680 )
    __fastfail(3u);
  *Table = a1 + 1680;
  Table[1] = v5;
  *v5 = Table;
  *(_QWORD *)(a1 + 1688) = Table;
  v6 = *(_DWORD *)(a1 + 68);
  v7 = *(_DWORD *)(a1 + 64);
  if ( v6 )
    v7 /= v6;
  v8 = *(_DWORD *)(a1 + 24);
  if ( (v8 & 4) == 0 )
  {
    if ( (v8 & 2) == 0 )
    {
      guard_dispatch_icall_no_overrides(1LL, 24LL);
      if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
      {
        ImageNotifyRoutine = -1073741637;
        goto LABEL_31;
      }
    }
    v2 = 10 * v7;
    if ( (BYTE4(PerfGlobalGroupMask) & 2) != 0 )
      v2 = EtwpProfileInterval;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (char *)KeAbPreAcquire((__int64)&EtwpCovSampGlobals, 0LL);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&EtwpCovSampGlobals, 0LL) )
    ExfAcquirePushLockExclusiveEx(&EtwpCovSampGlobals, v10, (__int64)&EtwpCovSampGlobals);
  if ( v11 )
    v11[10] = 1;
  qword_140EFEF88 = (__int64)KeGetCurrentThread();
  if ( qword_140EFEF98 )
  {
    ImageNotifyRoutine = -1073740008;
    goto LABEL_31;
  }
  ImageNotifyRoutine = EtwpCovSampCaptureContextStart((_DWORD *)(a1 + 24));
  if ( ImageNotifyRoutine >= 0 )
  {
    v12 = qword_140EFEFA8;
    PsReferenceSiloContext((void *)a1);
    qword_140EFEF98 = a1;
    _InterlockedExchange64((volatile __int64 *)&stru_140EFEFA0, 0LL);
    *(_DWORD *)(a1 + 1660) |= 1u;
    ImageNotifyRoutine = PsSetLoadImageNotifyRoutineEx(EtwpCovSampImageNotify, 0LL);
    if ( ImageNotifyRoutine >= 0 )
    {
      *(_DWORD *)(a1 + 1660) |= 2u;
      PsEnumProcesses(EtwpCovSampEnumerateProcess, a1 + 16);
      MmEnumerateSystemImages((__int64)EtwpCovSampEnumerateDriver, a1 + 16);
      v13 = EtwpHostSiloState;
      v14 = *(_DWORD *)(EtwpHostSiloState + 4844) | 4;
      *(_DWORD *)(EtwpHostSiloState + 4844) = v14;
      if ( (*(_DWORD *)(a1 + 24) & 8) == 0 )
        *(_DWORD *)(v13 + 4848) |= 4u;
      if ( (*(_DWORD *)(a1 + 24) & 0x10) == 0 )
        *(_DWORD *)(v13 + 4848) |= 0x200u;
      if ( (*(_DWORD *)(a1 + 24) & 0x20) == 0 )
        *(_DWORD *)(v13 + 4844) = v14 | 0x1000;
      EtwpUpdateGlobalGroupMasks(v13, 0LL, 9LL);
      *(_DWORD *)(a1 + 1660) |= 4u;
      if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
      {
        KeInitializeProfileCallback((_DWORD *)(v12 + 16), (__int64)EtwpCovSampProfileInterrupt, v12, 0);
        KeSetIntervalProfile(v2, (unsigned int)*(__int16 *)(v12 + 624));
        ImageNotifyRoutine = KeStartProfile(v12 + 16);
        if ( ImageNotifyRoutine < 0 )
          goto LABEL_31;
        *(_DWORD *)(a1 + 1660) |= 8u;
      }
      ImageNotifyRoutine = 0;
    }
  }
LABEL_31:
  if ( (struct _KTHREAD *)qword_140EFEF88 == KeGetCurrentThread() )
  {
    qword_140EFEF88 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)ImageNotifyRoutine;
}
