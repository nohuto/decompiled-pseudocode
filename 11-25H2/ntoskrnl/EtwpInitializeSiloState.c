/*
 * XREFs of EtwpInitializeSiloState @ 0x140798D8C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407632B0 (PspInitializeServerSiloDeferred.c)
 *     EtwpInitialize @ 0x140C2BE1C (EtwpInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402BD630 (KeQueryMaximumProcessorCountEx.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     PsIsHostSilo @ 0x14043DF70 (PsIsHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x140443110 (PsDetachSiloFromCurrentThread.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x140640C4C (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpQuerySiloRegistrySettings @ 0x140640EF8 (EtwpQuerySiloRegistrySettings.c)
 *     EtwpInitializeAutoLoggers @ 0x14079FDC4 (EtwpInitializeAutoLoggers.c)
 *     ExSubscribeWnfStateChange @ 0x140A139C0 (ExSubscribeWnfStateChange.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpInitializeSiloState(struct _LIST_ENTRY *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // ebx
  bool IsHostSilo; // si
  __int64 MaximumProcessorCount; // r14
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *Pool2; // rax
  struct _LIST_ENTRY *v16; // rbp
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v18; // rsi
  __int64 *v19; // rax
  __int64 *v20; // rbp
  _WORD *v21; // r9
  __int64 v22; // rdx
  unsigned int i; // r8d
  signed __int64 v24; // rax
  signed __int64 v25; // rdx
  signed __int64 v26; // rtt

  v4 = *((_QWORD *)PsGetServerSiloGlobals((__int64)a1) + 104);
  v6 = 0;
  IsHostSilo = PsIsHostSilo(v5);
  if ( IsHostSilo )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    *(_QWORD *)(v4 + 4168) = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    Pool2[3] = 0LL;
    Pool2[2] = EtwpUnsubscribeContainerStateWnf;
    *Pool2 = 0LL;
    *(_DWORD *)(v4 + 4160) = 0;
    ExSubscribeWnfStateChange(
      v4 + 4152,
      (unsigned int)&WNF_CONT_CONTAINER_STATE,
      1,
      0,
      (__int64)EtwpContainerStateWnfCallback,
      0LL);
  }
  else
  {
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    v9 = ExAllocatePool2(0x48uLL);
    *(_QWORD *)(v4 + 4144) = v9;
    if ( !v9 )
      return (unsigned int)-1073741801;
    v10 = MaximumProcessorCount;
    v11 = v9 + (MaximumProcessorCount << 6);
    if ( (_DWORD)MaximumProcessorCount )
    {
      v12 = 0LL;
      do
      {
        *(_QWORD *)(v12 + *(_QWORD *)(v4 + 4144)) = v11;
        v12 += 64LL;
        v13 = v11 + 8LL * *(unsigned int *)(v4 + 16);
        *(_QWORD *)(v12 + *(_QWORD *)(v4 + 4144) - 56) = v13;
        v14 = v13 + 8LL * *(unsigned int *)(v4 + 16);
        *(_QWORD *)(v12 + *(_QWORD *)(v4 + 4144) - 48) = v14;
        v11 = v14 + 8LL * *(unsigned int *)(v4 + 16);
        --v10;
      }
      while ( v10 );
    }
  }
  v16 = PsAttachSiloToCurrentThread(a1);
  EtwpQuerySiloRegistrySettings(v4);
  EtwpQueryPartitionRegistryInformation(
    (GUID *)(v4 + 4176),
    (PVOID *)(v4 + 4216),
    (_WORD *)(v4 + 4224),
    (_DWORD *)(v4 + 4228),
    (_QWORD *)(v4 + 4208),
    (GUID *)(v4 + 4192));
  if ( IsHostSilo )
    qword_1410077D8 = KeQueryPerformanceCounter(0LL).QuadPart;
  EtwpInitializeAutoLoggers(a2);
  if ( IsHostSilo )
    qword_1410077E0 = KeQueryPerformanceCounter(0LL).QuadPart;
  PsDetachSiloFromCurrentThread(v16);
  CurrentThread = KeGetCurrentThread();
  v18 = (signed __int64 *)(v4 + 432);
  --CurrentThread->KernelApcDisable;
  v19 = KeAbPreAcquire(v4 + 432, 0LL);
  v20 = v19;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 432), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 432), v19, v4 + 432);
  if ( v20 )
    *((_BYTE *)v20 + 10) = 1;
  v21 = (_WORD *)(v4 + 4048);
  *(_QWORD *)(v4 + 440) = KeGetCurrentThread();
  v22 = v4 + 156;
  for ( i = 0; i < 8; ++i )
  {
    if ( *v21 )
    {
      *(_WORD *)(v22 + 2) = *v21;
      *(_DWORD *)(v22 - 4) = 1;
      *(_BYTE *)v22 = -1;
      *(_QWORD *)(v22 + 12) = -1LL;
      *(_QWORD *)(v22 + 20) = 0LL;
      *(_DWORD *)(v22 + 4) = 64;
      *(_BYTE *)(v4 + 4064) |= 1 << i;
    }
    ++v21;
    v22 += 32LL;
  }
  *(_QWORD *)(v4 + 440) = 0LL;
  _m_prefetchw(v18);
  v24 = *v18;
  v25 = *v18 - 16;
  if ( (*v18 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v25 = 0LL;
  if ( (v24 & 2) != 0 || (v26 = *v18, v26 != _InterlockedCompareExchange64(v18, v25, v24)) )
    ExfReleasePushLock((_QWORD *)(v4 + 432));
  KeAbPostRelease(v4 + 432);
  KeLeaveCriticalRegion();
  *(_QWORD *)(v4 + 4096) = 0LL;
  *(_QWORD *)(v4 + 4080) = 0LL;
  *(_QWORD *)(v4 + 4088) = 0LL;
  return v6;
}
