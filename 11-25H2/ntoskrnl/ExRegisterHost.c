/*
 * XREFs of ExRegisterHost @ 0x1407B0F4C
 * Callers:
 *     IopInitializeIoRate @ 0x14059F30C (IopInitializeIoRate.c)
 *     EtwpInitializeProcessorTrace @ 0x1407A286C (EtwpInitializeProcessorTrace.c)
 *     VmInitSystem @ 0x140BCD898 (VmInitSystem.c)
 *     KiInitSupervisorStateExtensionHost @ 0x140C1770C (KiInitSupervisorStateExtensionHost.c)
 *     PspInitPhase1 @ 0x140C23BF4 (PspInitPhase1.c)
 *     SepInitializeAuthorizationCallbacks @ 0x140C28A84 (SepInitializeAuthorizationCallbacks.c)
 *     ExpInitSystemPhase1 @ 0x140C2F788 (ExpInitSystemPhase1.c)
 *     ExpInitializeCrossVmIntegration @ 0x140C32B20 (ExpInitializeCrossVmIntegration.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExpDereferenceHost @ 0x1407B1210 (ExpDereferenceHost.c)
 *     ExpFindHost @ 0x1407B1248 (ExpFindHost.c)
 *     ExAllocatePoolWithTag @ 0x140B62010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExRegisterHost(_QWORD *a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v5; // esi
  char *PoolWithTag; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v9; // rax
  signed __int8 v10; // cf
  __int64 *v11; // rbp
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
    ExfAcquirePushLockExclusiveEx(&ExpHostListLock, v9, (__int64)&ExpHostListLock);
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
    v13 = (_QWORD *)qword_140FD9050;
    if ( *(__int64 **)qword_140FD9050 != &ExpHostList )
      __fastfail(3u);
    *(_QWORD *)PoolWithTag = &ExpHostList;
    *((_QWORD *)PoolWithTag + 1) = v13;
    *v13 = PoolWithTag;
    qword_140FD9050 = (__int64)PoolWithTag;
    *a1 = PoolWithTag;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpHostListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpHostListLock);
  KeAbPostRelease((ULONG_PTR)&ExpHostListLock);
  KeLeaveCriticalRegion();
  return v5;
}
