/*
 * XREFs of MiInitializePartition @ 0x1407DC8B8
 * Callers:
 *     MmCreatePartition @ 0x1407ECA7C (MmCreatePartition.c)
 *     MiCreatePfnDatabase @ 0x140C3DC60 (MiCreatePfnDatabase.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     RtlRandomEx @ 0x14041CDA0 (RtlRandomEx.c)
 *     MiInitializePfnListHead @ 0x140442144 (MiInitializePfnListHead.c)
 *     KeInitializeTimer @ 0x140454D20 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     InitializeSListHead @ 0x140460EA0 (InitializeSListHead.c)
 *     MiInitializeNuma @ 0x14065D29C (MiInitializeNuma.c)
 *     MiProtectPageListLocks @ 0x140667950 (MiProtectPageListLocks.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x14067482C (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     MiInitializeCombining @ 0x140679D74 (MiInitializeCombining.c)
 *     MiInitializeCommitment @ 0x14067AAA8 (MiInitializeCommitment.c)
 *     MiInitializeSections @ 0x1407DB908 (MiInitializeSections.c)
 *     MiInitializePartitionFreeZeroLists @ 0x1407DCF4C (MiInitializePartitionFreeZeroLists.c)
 */

$727077A9B6E167EAE1398C74674DC5A5 *__fastcall MiInitializePartition(ULONG *DeferredContext, __int16 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // r12
  _QWORD *v7; // rdi
  struct _KEVENT *v8; // r15
  _QWORD *v9; // rdi
  char *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r11
  int v16; // edx
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned int v19; // r15d
  ULONG *v20; // rdi
  ULONG v21; // eax
  signed int v22; // eax
  int v23; // edx
  char *v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rcx
  struct _KEVENT *v27; // rdi
  char *v28; // r15
  __int64 v29; // rcx
  __m128i si128; // xmm0
  struct _KEVENT *v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rsi
  struct _KEVENT *v37; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *v39; // rax
  signed __int8 v40; // cf
  __int64 *v41; // rsi
  $727077A9B6E167EAE1398C74674DC5A5 *result; // rax

  *(_WORD *)DeferredContext = a2;
  DeferredContext[2] = 305535296;
  v3 = 0;
  v4 = 16LL;
  if ( DeferredContext == &MiSystemPartition )
  {
    qword_140E2FC80 = 0LL;
    qword_140E2FCE0 = 0LL;
    qword_140E2FCA8 = (__int64)&qword_140E2FCA0;
    qword_140E2FCA0 = &qword_140E2FCA0;
  }
  else
  {
    v3 = 16;
  }
  _InterlockedOr((volatile signed __int32 *)DeferredContext + 1, v3);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 22), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 28), SynchronizationEvent, 0);
  v5 = 3LL;
  v6 = 3LL;
  v7 = DeferredContext + 4126;
  v8 = (struct _KEVENT *)(DeferredContext + 4120);
  do
  {
    KeInitializeEvent(v8, NotificationEvent, 0);
    v8 += 2;
    *v7 = -1LL;
    v7 += 6;
    --v6;
  }
  while ( v6 );
  MiInitializePartitionFreeZeroLists(DeferredContext);
  MiInitializePfnListHead((__int64)(DeferredContext + 720), 0);
  MiInitializePfnListHead((__int64)(DeferredContext + 752), 1);
  MiInitializePfnListHead((__int64)(DeferredContext + 784), 2);
  v9 = DeferredContext + 2960;
  v10 = (char *)(DeferredContext + 816);
  do
  {
    MiInitializePfnListHead((__int64)v10, 2);
    v17 = (unsigned int)(v16 + 62);
    do
    {
      *(v9 - 512) = -1LL;
      *v9++ = -1LL;
      --v17;
    }
    while ( v17 );
    v10 = (char *)(v11 + 88);
  }
  while ( v12 != 1 );
  LOWORD(v18) = KeNumberNodes;
  *((_QWORD *)DeferredContext + 892) = v13;
  *((_QWORD *)DeferredContext + 893) = v14;
  *((_QWORD *)DeferredContext + 894) = v15;
  *((_QWORD *)DeferredContext + 2058) = DeferredContext + 4114;
  *((_QWORD *)DeferredContext + 2057) = DeferredContext + 4114;
  v19 = 0;
  if ( (_WORD)v18 )
  {
    v20 = (ULONG *)(*((_QWORD *)DeferredContext + 2) + 15216LL);
    do
    {
      v21 = RtlRandomEx(&Seed);
      v18 = (unsigned __int16)KeNumberNodes;
      ++v19;
      *v20 = v21;
      v20 += 14304;
    }
    while ( v19 < v18 );
  }
  v22 = (unsigned int)(*((_QWORD *)DeferredContext + 2314) / 0x64uLL)
      / (dword_140E2D98C
       * (unsigned int)(unsigned __int16)v18);
  if ( v22 >= 4 )
  {
    if ( (unsigned int)v22 > 0x10 )
      v22 = 16;
  }
  else
  {
    v22 = 4;
  }
  DeferredContext[4244] = v22;
  if ( DeferredContext == &MiSystemPartition )
    MiInitializePfnListHead((__int64)&qword_140E2D310, 5);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 4238), NotificationEvent, 0);
  MiInitializePfnListHead((__int64)(DeferredContext + 4848), 3);
  MiInitializePfnListHead((__int64)(DeferredContext + 4880), 4);
  MiInitializePfnListHead((__int64)(DeferredContext + 992), 3);
  MiInitializePfnListHead((__int64)(DeferredContext + 1024), v23);
  v24 = (char *)(DeferredContext + 1056);
  v25 = 16LL;
  do
  {
    MiInitializePfnListHead((__int64)v24, 3);
    v24 = (char *)(v26 + 88);
    --v25;
  }
  while ( v25 );
  v27 = (struct _KEVENT *)(DeferredContext + 1828);
  v28 = (char *)(DeferredContext + 1408);
  do
  {
    MiInitializePfnListHead((__int64)v28, 3);
    KeInitializeEvent(v27, SynchronizationEvent, 0);
    v28 += 88;
    ++v27;
    --v4;
  }
  while ( v4 );
  MiInitializePfnListHead((__int64)(DeferredContext + 1760), 5);
  *((_QWORD *)DeferredContext + 897) = v29;
  *((_QWORD *)DeferredContext + 895) = DeferredContext + 4848;
  *((_QWORD *)DeferredContext + 896) = DeferredContext + 4880;
  *((_QWORD *)DeferredContext + 2085) = -1LL;
  MiProtectPageListLocks((__int64)DeferredContext);
  si128 = _mm_load_si128((const __m128i *)&_xmm_fffffffefffffffefffffffefffffffe);
  v31 = (struct _KEVENT *)(DeferredContext + 4050);
  *((__m128i *)DeferredContext + 1004) = si128;
  *((__m128i *)DeferredContext + 1005) = si128;
  do
  {
    KeInitializeEvent(v31, NotificationEvent, 1u);
    v31 = (struct _KEVENT *)((char *)v31 + 32);
    --v5;
  }
  while ( v5 );
  MiPopulateFreeKernelShadowStackCacheEntries((_SLIST_HEADER *)DeferredContext);
  v32 = DeferredContext + 624;
  *((_QWORD *)DeferredContext + 24) = 0LL;
  v33 = 9LL;
  do
  {
    *v32 = -1LL;
    v32 += 4;
    --v33;
  }
  while ( v33 );
  KeInitializeEvent((PRKEVENT)(DeferredContext + 52), NotificationEvent, 0);
  memset64(DeferredContext + 62, (unsigned __int64)(DeferredContext + 52), 0xBuLL);
  *((_QWORD *)DeferredContext + 2202) = DeferredContext + 4402;
  *((_QWORD *)DeferredContext + 2201) = DeferredContext + 4402;
  KeInitializeEvent((PRKEVENT)DeferredContext + 35, SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 196), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 202), NotificationEvent, 0);
  DeferredContext[192] = 18;
  *((_QWORD *)DeferredContext + 125) = 0LL;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)DeferredContext + 125);
  _InterlockedExchange64((volatile __int64 *)DeferredContext + 125, 1LL);
  KeInitializeEvent((PRKEVENT)DeferredContext + 31, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 232), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)DeferredContext + 44, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)DeferredContext + 29, SynchronizationEvent, 0);
  *((_QWORD *)DeferredContext + 86) = DeferredContext + 170;
  *((_QWORD *)DeferredContext + 85) = DeferredContext + 170;
  KeInitializeEvent((PRKEVENT)(DeferredContext + 242), SynchronizationEvent, 0);
  *((_QWORD *)DeferredContext + 120) = DeferredContext + 238;
  *((_QWORD *)DeferredContext + 119) = DeferredContext + 238;
  if ( DeferredContext == &MiSystemPartition )
  {
    *((_QWORD *)DeferredContext + 2078) = qword_140FC4230;
    v34 = qword_140FC4230 << 8;
    *((_QWORD *)DeferredContext + 2078) = qword_140FC4230 << 8;
    *((_QWORD *)DeferredContext + 2079) = qword_140FC4238;
    v35 = qword_140FC4238 << 8;
    *((_QWORD *)DeferredContext + 2079) = qword_140FC4238 << 8;
    if ( v35 < v34 && v35 )
      *((_QWORD *)DeferredContext + 2079) = v34;
  }
  else
  {
    MiInitializeCommitment((__int64)DeferredContext);
  }
  MiInitializeNuma((__int64)DeferredContext);
  *((_QWORD *)DeferredContext + 147) = 0LL;
  *((_QWORD *)DeferredContext + 144) = MiContractWsSwapPageFileWorker;
  *((_QWORD *)DeferredContext + 145) = DeferredContext;
  *((_QWORD *)DeferredContext + 142) = 0LL;
  DeferredContext[301] = -1;
  KeInitializeEvent((PRKEVENT)(DeferredContext + 332), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)DeferredContext + 58, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 338), NotificationEvent, 0);
  InitializeSListHead((PSLIST_HEADER)DeferredContext + 86);
  KeInitializeTimer((PKTIMER)(DeferredContext + 310));
  MiInitializeSections((__int64)DeferredContext);
  MiInitializeCombining((__int64)DeferredContext, (_QWORD *)DeferredContext + 2123);
  v36 = 2LL;
  *((_QWORD *)DeferredContext + 2204) = DeferredContext + 4406;
  v37 = (struct _KEVENT *)(DeferredContext + 4578);
  *((_QWORD *)DeferredContext + 2203) = DeferredContext + 4406;
  *((_QWORD *)DeferredContext + 2206) = DeferredContext + 4410;
  *((_QWORD *)DeferredContext + 2205) = DeferredContext + 4410;
  *((_QWORD *)DeferredContext + 2287) = 0LL;
  *((_QWORD *)DeferredContext + 2284) = DeferredContext + 4570;
  DeferredContext[4566] = 64;
  do
  {
    KeInitializeEvent(v37, NotificationEvent, 0);
    v37 = (struct _KEVENT *)((char *)v37 + 32);
    --v36;
  }
  while ( v36 );
  *((_QWORD *)DeferredContext + 2297) = 0LL;
  DeferredContext[4364] = 5;
  *((_QWORD *)DeferredContext + 2179) = MiEmptyAccessLogs;
  *((_QWORD *)DeferredContext + 2180) = DeferredContext;
  *((_QWORD *)DeferredContext + 2177) = 0LL;
  KeInitializeDpc((PRKDPC)DeferredContext + 273, (PKDEFERRED_ROUTINE)MiAllocatePfnRepurposeLogDispatch, DeferredContext);
  *((_QWORD *)DeferredContext + 217) = 1LL;
  *((_QWORD *)DeferredContext + 218) = 1LL;
  *((_QWORD *)DeferredContext + 219) = 1LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v39 = KeAbPreAcquire((__int64)&qword_140E2FD08, 0LL);
  v40 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2FD08, 0LL);
  v41 = v39;
  if ( v40 )
    ExfAcquirePushLockExclusiveEx(&qword_140E2FD08, v39, (__int64)&qword_140E2FD08);
  if ( v41 )
    *((_BYTE *)v41 + 10) = 1;
  _InterlockedOr((volatile signed __int32 *)DeferredContext + 1, 2u);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2FD08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2FD08);
  result = ($727077A9B6E167EAE1398C74674DC5A5 *)KeAbPostRelease((ULONG_PTR)&qword_140E2FD08);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    result = &CurrentThread->152;
    if ( ($727077A9B6E167EAE1398C74674DC5A5 *)result->ApcState.ApcListHead[0].Flink != result )
      return ($727077A9B6E167EAE1398C74674DC5A5 *)KiCheckForKernelApcDelivery();
  }
  return result;
}
