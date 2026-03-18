/*
 * XREFs of ExRegisterHost @ 0x1407C071C
 * Callers:
 *     EtwpInitializeProcessorTrace @ 0x1407B1C3C (EtwpInitializeProcessorTrace.c)
 *     VmInitSystem @ 0x140BDE898 (VmInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 *     KiInitSupervisorStateExtensionHost @ 0x140C2881C (KiInitSupervisorStateExtensionHost.c)
 *     PspInitPhase1 @ 0x140C34EC0 (PspInitPhase1.c)
 *     SepInitializeAuthorizationCallbacks @ 0x140C39D54 (SepInitializeAuthorizationCallbacks.c)
 *     ExpInitSystemPhase1 @ 0x140C40A64 (ExpInitSystemPhase1.c)
 *     ExpInitializeCrossVmIntegration @ 0x140C43DEC (ExpInitializeCrossVmIntegration.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExpDereferenceHost @ 0x1407C09E0 (ExpDereferenceHost.c)
 *     ExpFindHost @ 0x1407C0A18 (ExpFindHost.c)
 *     ExAllocatePoolWithTag @ 0x140B72010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExRegisterHost(_QWORD *a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v5; // esi
  char *PoolWithTag; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v9; // rax
  signed __int8 v10; // cf
  _QWORD *v11; // rbp
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
  v9 = KeAbPreAcquire((__int64)&ExpHostListLock, 0LL);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&ExpHostListLock, 0LL);
  v11 = v9;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&ExpHostListLock, (__int64)v9, (__int64)&ExpHostListLock);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  Host = ExpFindHost(*a3);
  if ( Host )
  {
    v5 = -1073741771;
    ExpDereferenceHost(PoolWithTag);
    ExpDereferenceHost(Host);
  }
  else
  {
    v13 = (_QWORD *)qword_140FD9020;
    if ( *(__int64 **)qword_140FD9020 != &ExpHostList )
      __fastfail(3u);
    *(_QWORD *)PoolWithTag = &ExpHostList;
    *((_QWORD *)PoolWithTag + 1) = v13;
    *v13 = PoolWithTag;
    qword_140FD9020 = (__int64)PoolWithTag;
    *a1 = PoolWithTag;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpHostListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpHostListLock);
  KeAbPostRelease((ULONG_PTR)&ExpHostListLock);
  KeLeaveCriticalRegion();
  return v5;
}
