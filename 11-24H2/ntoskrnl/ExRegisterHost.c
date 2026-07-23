/*
 * XREFs of ExRegisterHost @ 0x1407C0B6C
 * Callers:
 *     EtwpInitializeProcessorTrace @ 0x1407B208C (EtwpInitializeProcessorTrace.c)
 *     VmInitSystem @ 0x140BE0898 (VmInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 *     KiInitSupervisorStateExtensionHost @ 0x140C2A8BC (KiInitSupervisorStateExtensionHost.c)
 *     PspInitPhase1 @ 0x140C37000 (PspInitPhase1.c)
 *     SepInitializeAuthorizationCallbacks @ 0x140C3BEAC (SepInitializeAuthorizationCallbacks.c)
 *     ExpInitSystemPhase1 @ 0x140C42BB4 (ExpInitSystemPhase1.c)
 *     ExpInitializeCrossVmIntegration @ 0x140C45F3C (ExpInitializeCrossVmIntegration.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExpDereferenceHost @ 0x1407C0E30 (ExpDereferenceHost.c)
 *     ExpFindHost @ 0x1407C0E68 (ExpFindHost.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExRegisterHost(_QWORD *a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v5; // esi
  char *PoolWithTag; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char *v9; // rax
  signed __int8 v10; // cf
  char *v11; // rbp
  __int64 Host; // rbp
  _QWORD *v13; // rax

  v5 = 0;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)(*((_DWORD *)a3 + 4) | 0x400), 16LL * a3[1] + 120, 0x48457845u);
  if ( !PoolWithTag )
    return 3221225626LL;
  *((_WORD *)PoolWithTag + 8) = *a3;
  *((_QWORD *)PoolWithTag + 3) = 1LL;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  *((_QWORD *)PoolWithTag + 11) = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)PoolWithTag + 11);
  *((_QWORD *)PoolWithTag + 5) = PoolWithTag + 120;
  memmove(PoolWithTag + 120, *((const void **)a3 + 1), 16LL * a3[1]);
  *((_WORD *)PoolWithTag + 24) = a3[1];
  *((_QWORD *)PoolWithTag + 8) = *((_QWORD *)a3 + 3);
  *((_QWORD *)PoolWithTag + 9) = *((_QWORD *)a3 + 4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (char *)KeAbPreAcquire((__int64)&ExpHostListLock, 0LL);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&ExpHostListLock, 0LL);
  v11 = v9;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&ExpHostListLock, v9, (__int64)&ExpHostListLock);
  if ( v11 )
    v11[10] = 1;
  Host = ExpFindHost(*a3);
  if ( Host )
  {
    v5 = -1073741771;
    ExpDereferenceHost(PoolWithTag);
    ExpDereferenceHost(Host);
  }
  else
  {
    v13 = (_QWORD *)qword_140FDA030;
    if ( *(__int64 **)qword_140FDA030 != &ExpHostList )
      __fastfail(3u);
    *(_QWORD *)PoolWithTag = &ExpHostList;
    *((_QWORD *)PoolWithTag + 1) = v13;
    *v13 = PoolWithTag;
    qword_140FDA030 = (__int64)PoolWithTag;
    *a1 = PoolWithTag;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpHostListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpHostListLock);
  KeAbPostRelease((ULONG_PTR)&ExpHostListLock);
  KeLeaveCriticalRegion();
  return v5;
}
