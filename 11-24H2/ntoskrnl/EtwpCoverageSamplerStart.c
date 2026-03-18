/*
 * XREFs of EtwpCoverageSamplerStart @ 0x1407B2D48
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x1407B3064 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeStartProfile @ 0x1404D6890 (KeStartProfile.c)
 *     MmEnumerateSystemImages @ 0x1404FAB30 (MmEnumerateSystemImages.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     KeInitializeProfileCallback @ 0x1406F65A0 (KeInitializeProfileCallback.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B1F9C (EtwpCovSampCaptureContextStart.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1408EB088 (EtwpUpdateGlobalGroupMasks.c)
 *     PsEnumProcesses @ 0x1408EE0F4 (PsEnumProcesses.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x140A5CEB4 (EtwpCoverageSamplerAllocateTable.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140A897E0 (PsSetLoadImageNotifyRoutineEx.c)
 *     KeSetIntervalProfile @ 0x140AC23D4 (KeSetIntervalProfile.c)
 */

__int64 __fastcall EtwpCoverageSamplerStart(ULONG_PTR a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // r14
  __int16 v4; // r12
  _QWORD *Table; // rax
  int ImageNotifyRoutine; // edi
  _QWORD *v7; // rdx
  unsigned int v8; // ecx
  unsigned int v9; // edi
  int v10; // eax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rcx
  int v16; // edx
  __int128 v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+40h] [rbp-38h]
  int v20; // [rsp+80h] [rbp+8h] BYREF

  v20 = 0;
  v2 = *(unsigned int *)(a1 + 36);
  LODWORD(v3) = 0;
  v18 = 0LL;
  v19 = 0LL;
  v4 = 0;
  Table = (_QWORD *)EtwpCoverageSamplerAllocateTable(v2);
  *(_QWORD *)(a1 + 1664) = Table;
  if ( !Table )
  {
    ImageNotifyRoutine = -1073741670;
    goto LABEL_34;
  }
  ++*(_DWORD *)(a1 + 1696);
  v7 = *(_QWORD **)(a1 + 1688);
  if ( *v7 != a1 + 1680 )
    __fastfail(3u);
  *Table = a1 + 1680;
  Table[1] = v7;
  *v7 = Table;
  *(_QWORD *)(a1 + 1688) = Table;
  v8 = *(_DWORD *)(a1 + 68);
  v9 = *(_DWORD *)(a1 + 64);
  if ( v8 )
    v9 /= v8;
  v10 = *(_DWORD *)(a1 + 24);
  if ( (v10 & 4) == 0 )
  {
    if ( (v10 & 2) == 0 )
    {
      LODWORD(v18) = 2;
      if ( (int)guard_dispatch_icall_no_overrides(1LL, 24LL, &v18, &v20) >= 0 && BYTE4(v18) )
      {
        v4 = 2;
        v3 = v9 * (unsigned __int64)(unsigned int)EtwCPUSpeedInMHz / 5;
        goto LABEL_16;
      }
      if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
      {
        ImageNotifyRoutine = -1073741637;
        goto LABEL_34;
      }
    }
    LODWORD(v3) = 10 * v9;
    if ( (BYTE4(PerfGlobalGroupMask) & 2) != 0 )
      LODWORD(v3) = EtwpProfileInterval;
  }
LABEL_16:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = KeAbPreAcquire((__int64)&EtwpCovSampGlobals, 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&EtwpCovSampGlobals, 0LL) )
    ExfAcquirePushLockExclusiveEx(&EtwpCovSampGlobals, (__int64)v12, (__int64)&EtwpCovSampGlobals);
  if ( v13 )
    *((_BYTE *)v13 + 10) = 1;
  qword_140EFEC68 = (__int64)KeGetCurrentThread();
  if ( qword_140EFEC78 )
  {
    ImageNotifyRoutine = -1073740008;
    goto LABEL_34;
  }
  ImageNotifyRoutine = EtwpCovSampCaptureContextStart((_DWORD *)(a1 + 24));
  if ( ImageNotifyRoutine >= 0 )
  {
    v14 = qword_140EFEC88;
    PsReferenceSiloContext((void *)a1);
    qword_140EFEC78 = a1;
    _InterlockedExchange64((volatile __int64 *)&stru_140EFEC80, 0LL);
    *(_DWORD *)(a1 + 1660) |= 1u;
    ImageNotifyRoutine = PsSetLoadImageNotifyRoutineEx(EtwpCovSampImageNotify, 0LL);
    if ( ImageNotifyRoutine >= 0 )
    {
      *(_DWORD *)(a1 + 1660) |= 2u;
      PsEnumProcesses(EtwpCovSampEnumerateProcess, a1 + 16);
      MmEnumerateSystemImages((__int64)EtwpCovSampEnumerateDriver, a1 + 16);
      v15 = EtwpHostSiloState;
      v16 = *(_DWORD *)(EtwpHostSiloState + 4844) | 4;
      *(_DWORD *)(EtwpHostSiloState + 4844) = v16;
      if ( (*(_DWORD *)(a1 + 24) & 8) == 0 )
        *(_DWORD *)(v15 + 4848) |= 4u;
      if ( (*(_DWORD *)(a1 + 24) & 0x10) == 0 )
        *(_DWORD *)(v15 + 4848) |= 0x200u;
      if ( (*(_DWORD *)(a1 + 24) & 0x20) == 0 )
        *(_DWORD *)(v15 + 4844) = v16 | 0x1000;
      EtwpUpdateGlobalGroupMasks(v15, 0LL, 9LL);
      *(_DWORD *)(a1 + 1660) |= 4u;
      if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
      {
        KeInitializeProfileCallback((_DWORD *)(v14 + 16), (__int64)EtwpCovSampProfileInterrupt, v14, v4);
        KeSetIntervalProfile((unsigned int)v3, (unsigned int)*(__int16 *)(v14 + 624));
        ImageNotifyRoutine = KeStartProfile(v14 + 16);
        if ( ImageNotifyRoutine < 0 )
          goto LABEL_34;
        *(_DWORD *)(a1 + 1660) |= 8u;
      }
      ImageNotifyRoutine = 0;
    }
  }
LABEL_34:
  if ( (struct _KTHREAD *)qword_140EFEC68 == KeGetCurrentThread() )
  {
    qword_140EFEC68 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)ImageNotifyRoutine;
}
