/*
 * XREFs of EtwpInitializeSiloState @ 0x1407A829C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140772EA0 (PspInitializeServerSiloDeferred.c)
 *     EtwpInitialize @ 0x140C3F24C (EtwpInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14031D920 (KeQueryMaximumProcessorCountEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x14042FBB0 (PsAttachSiloToCurrentThread.c)
 *     PsIsHostSilo @ 0x1404329D0 (PsIsHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x14043A1F0 (PsDetachSiloFromCurrentThread.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x14064B27C (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpQuerySiloRegistrySettings @ 0x14064B528 (EtwpQuerySiloRegistrySettings.c)
 *     EtwpInitializeAutoLoggers @ 0x1407AF5E4 (EtwpInitializeAutoLoggers.c)
 *     ExSubscribeWnfStateChange @ 0x140A12490 (ExSubscribeWnfStateChange.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpInitializeSiloState(struct _LIST_ENTRY *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // ebx
  bool IsHostSilo; // si
  ULONG MaximumProcessorCount; // eax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *Pool2; // rax
  struct _LIST_ENTRY *v17; // rbp
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v19; // rsi
  char *v20; // rax
  char *v21; // rbp
  _WORD *v22; // r9
  __int64 v23; // rdx
  unsigned int i; // r8d
  signed __int64 v25; // rax
  signed __int64 v26; // rdx
  signed __int64 v27; // rtt

  v4 = *((_QWORD *)PsGetServerSiloGlobals((__int64)a1) + 104);
  v6 = 0;
  IsHostSilo = PsIsHostSilo(v5);
  if ( IsHostSilo )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x20uLL, 0x57777445u);
    *(_QWORD *)(v4 + 4440) = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    Pool2[3] = 0LL;
    Pool2[2] = EtwpUnsubscribeContainerStateWnf;
    *Pool2 = 0LL;
    *(_DWORD *)(v4 + 4432) = 0;
    ExSubscribeWnfStateChange(
      v4 + 4424,
      (unsigned int)&WNF_CONT_CONTAINER_STATE,
      1,
      0,
      (__int64)EtwpContainerStateWnfCallback,
      0LL);
  }
  else
  {
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    v9 = MaximumProcessorCount;
    v10 = ExAllocatePool2(0x48uLL, MaximumProcessorCount * (24 * *(_DWORD *)(v4 + 16) + 64), 0x61777445u);
    *(_QWORD *)(v4 + 4416) = v10;
    if ( !v10 )
      return (unsigned int)-1073741801;
    v11 = v9;
    v12 = v10 + (v9 << 6);
    if ( (_DWORD)v9 )
    {
      v13 = 0LL;
      do
      {
        *(_QWORD *)(v13 + *(_QWORD *)(v4 + 4416)) = v12;
        v13 += 64LL;
        v14 = v12 + 8LL * *(unsigned int *)(v4 + 16);
        *(_QWORD *)(v13 + *(_QWORD *)(v4 + 4416) - 56) = v14;
        v15 = v14 + 8LL * *(unsigned int *)(v4 + 16);
        *(_QWORD *)(v13 + *(_QWORD *)(v4 + 4416) - 48) = v15;
        v12 = v15 + 8LL * *(unsigned int *)(v4 + 16);
        --v11;
      }
      while ( v11 );
    }
  }
  v17 = PsAttachSiloToCurrentThread(a1);
  EtwpQuerySiloRegistrySettings(v4);
  EtwpQueryPartitionRegistryInformation(
    (GUID *)(v4 + 4448),
    (PVOID *)(v4 + 4488),
    (_WORD *)(v4 + 4496),
    (_DWORD *)(v4 + 4500),
    (_QWORD *)(v4 + 4480),
    (GUID *)(v4 + 4464));
  if ( IsHostSilo )
    qword_1410087D8 = KeQueryPerformanceCounter(0LL).QuadPart;
  EtwpInitializeAutoLoggers(a2);
  if ( IsHostSilo )
    qword_1410087E0 = KeQueryPerformanceCounter(0LL).QuadPart;
  PsDetachSiloFromCurrentThread(v17);
  CurrentThread = KeGetCurrentThread();
  v19 = (signed __int64 *)(v4 + 688);
  --CurrentThread->KernelApcDisable;
  v20 = (char *)KeAbPreAcquire(v4 + 688, 0LL);
  v21 = v20;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 688), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 688), v20, v4 + 688);
  if ( v21 )
    v21[10] = 1;
  v22 = (_WORD *)(v4 + 4304);
  *(_QWORD *)(v4 + 696) = KeGetCurrentThread();
  v23 = v4 + 156;
  for ( i = 0; i < 0x10; ++i )
  {
    if ( *v22 )
    {
      *(_WORD *)(v23 + 2) = *v22;
      *(_DWORD *)(v23 - 4) = 1;
      *(_BYTE *)v23 = -1;
      *(_QWORD *)(v23 + 12) = -1LL;
      *(_QWORD *)(v23 + 20) = 0LL;
      *(_DWORD *)(v23 + 4) = 64;
      *(_WORD *)(v4 + 4336) |= 1 << i;
    }
    ++v22;
    v23 += 32LL;
  }
  *(_QWORD *)(v4 + 696) = 0LL;
  _m_prefetchw(v19);
  v25 = *v19;
  v26 = *v19 - 16;
  if ( (*v19 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v26 = 0LL;
  if ( (v25 & 2) != 0 || (v27 = *v19, v27 != _InterlockedCompareExchange64(v19, v26, v25)) )
    ExfReleasePushLock((_QWORD *)(v4 + 688));
  KeAbPostRelease(v4 + 688);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v4 + 4368) = 0LL;
  *(_QWORD *)(v4 + 4352) = 0LL;
  *(_QWORD *)(v4 + 4360) = 0LL;
  return v6;
}
