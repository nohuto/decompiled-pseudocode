/*
 * XREFs of KeStartThread @ 0x1403B3660
 * Callers:
 *     KiStartPrcbThread @ 0x1405B7FCC (KiStartPrcbThread.c)
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1402D6B90 (KxAcquireQueuedSpinLock.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x14033939C (KiUpdateNodeAffinitizedFlag.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1403B25A0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KeIsSubsetAffinityEx @ 0x1403B34F0 (KeIsSubsetAffinityEx.c)
 *     KiReleaseProcessLockExclusive @ 0x1403B3B08 (KiReleaseProcessLockExclusive.c)
 *     KiAcquireProcessLockExclusive @ 0x1403B3B60 (KiAcquireProcessLockExclusive.c)
 *     KiAdjustProcessIdealProcessorSetsForThreadCreation @ 0x1403B3BB8 (KiAdjustProcessIdealProcessorSetsForThreadCreation.c)
 *     KiInitializeForegroundBoostThread @ 0x1403B3D80 (KiInitializeForegroundBoostThread.c)
 *     KeSelectInitialIdealProcessorForThread @ 0x1403B3DF4 (KeSelectInitialIdealProcessorForThread.c)
 *     EtwTraceThreadAffinity @ 0x1403B3E48 (EtwTraceThreadAffinity.c)
 *     KeIsEmptyAffinityEx @ 0x1403B55D0 (KeIsEmptyAffinityEx.c)
 *     KeFindBiasedSetBitGroupMask @ 0x14041804C (KeFindBiasedSetBitGroupMask.c)
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     KiFreezeSingleThread @ 0x1404635BC (KiFreezeSingleThread.c)
 *     KeComputeGroupMask @ 0x140498D64 (KeComputeGroupMask.c)
 *     EtwTraceIdealProcessor @ 0x1404B1DCC (EtwTraceIdealProcessor.c)
 *     KiExtendProcessAffinity @ 0x1405C90F8 (KiExtendProcessAffinity.c)
 *     EtwTraceThreadSchedulingGroup @ 0x14064E1AC (EtwTraceThreadSchedulingGroup.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KeStartThread(__int64 a1, struct _KAFFINITY_EX *a2, int *a3)
{
  unsigned __int64 CurrentThread; // rsi
  _KPROCESS *v7; // rdi
  char BasePriority; // al
  unsigned __int64 v9; // rcx
  int v10; // r15d
  _LIST_ENTRY *p_ThreadListHead; // rsi
  __int64 v12; // r12
  int v13; // edx
  int QuantumReset; // eax
  __int64 v15; // rax
  __int64 v16; // r8
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v18; // rax
  _LIST_ENTRY **v19; // rcx
  _LIST_ENTRY *p_ProcessListEntry; // rax
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 result; // rax
  char v24[8]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h]
  __int128 v27; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h]
  __int128 v29; // [rsp+60h] [rbp-A0h] BYREF
  struct _KAFFINITY_EX v30; // [rsp+70h] [rbp-90h] BYREF

  v24[0] = 0;
  memset_0(&v30.8, 0, sizeof(v30.8));
  *(_DWORD *)&v30.Count = 2097153;
  v30.Reserved = 0;
  v28 = 0LL;
  v27 = 0LL;
  memset_0(&v30.8, 0, sizeof(v30.8));
  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  v7 = *(_KPROCESS **)(a1 + 184);
  v26 = 0LL;
  KiAcquireProcessLockExclusive(v7, v24);
  KiAdjustProcessIdealProcessorSetsForThreadCreation(v7);
  *(_DWORD *)(a1 + 120) ^= ((unsigned __int8)*(_DWORD *)(a1 + 120) ^ (unsigned __int8)(4 * *(_DWORD *)&v7->0)) & 8;
  BasePriority = v7->BasePriority;
  *(_BYTE *)(a1 + 563) = BasePriority;
  *(_BYTE *)(a1 + 195) = BasePriority;
  *(_BYTE *)(a1 + 795) = 32;
  if ( !a2 || (unsigned int)KeIsEmptyAffinityEx(a2) )
  {
    KiCopyAffinityEx(&v30, v30.Size, v7->Affinity);
    a2 = &v30;
    if ( v7 == *(_KPROCESS **)(CurrentThread + 544) )
      LOWORD(CurrentThread) = *(_WORD *)(CurrentThread + 584);
    else
      LOWORD(CurrentThread) = v7->PrimaryGroup;
LABEL_4:
    LOWORD(v26) = CurrentThread;
    goto LABEL_5;
  }
  if ( !(unsigned int)KeIsSubsetAffinityEx(&a2->Count, &v7->Affinity->Count) )
    KiExtendProcessAffinity(v7, a2);
  CurrentThread = v7->PrimaryGroup;
  if ( (unsigned __int16)CurrentThread < a2->Count && a2->Bitmap[CurrentThread] )
    goto LABEL_4;
  v29 = 0LL;
  KeComputeGroupMask(a2, &v29);
  v21 = ExGenRandom(1LL);
  LOWORD(CurrentThread) = KeFindBiasedSetBitGroupMask(&v29, v21);
  LOWORD(v26) = CurrentThread;
LABEL_5:
  if ( (unsigned __int16)CurrentThread >= a2->Count )
    v9 = 0LL;
  else
    v9 = a2->Bitmap[(unsigned __int16)CurrentThread];
  v25 = v9;
  KiCopyAffinityEx(*(struct _KAFFINITY_EX **)(a1 + 576), *(_WORD *)(*(_QWORD *)(a1 + 576) + 2LL), a2);
  KiCopyAffinityEx(*(struct _KAFFINITY_EX **)(a1 + 552), *(_WORD *)(*(_QWORD *)(a1 + 552) + 2LL), a2);
  *(_WORD *)(a1 + 584) = CurrentThread;
  *(_WORD *)(a1 + 560) = CurrentThread;
  KiUpdateNodeAffinitizedFlag(a1);
  if ( a3 )
  {
    v10 = *a3;
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0);
  }
  else
  {
    v10 = (unsigned __int16)KeSelectInitialIdealProcessorForThread(v7, &v25);
  }
  *(_DWORD *)(a1 + 196) = v10;
  p_ThreadListHead = &v7->ThreadListHead;
  *(_DWORD *)(a1 + 588) = v10;
  v12 = KiProcessorBlock[v10];
  if ( p_ThreadListHead->Flink == p_ThreadListHead && v7 != (_KPROCESS *)&KiInitialProcess )
  {
    *(_QWORD *)&v27 = 0LL;
    *((_QWORD *)&v27 + 1) = &KiProcessListLock;
    KxAcquireQueuedSpinLock((__int64)&v27, &KiProcessListLock);
    v19 = (_LIST_ENTRY **)qword_140F22588;
    p_ProcessListEntry = &v7->ProcessListEntry;
    if ( *(__int64 **)qword_140F22588 != &KiProcessListHead )
      goto LABEL_13;
    v7->ProcessListEntry.Blink = (struct _LIST_ENTRY *)qword_140F22588;
    p_ProcessListEntry->Flink = (struct _LIST_ENTRY *)&KiProcessListHead;
    *v19 = p_ProcessListEntry;
    qword_140F22588 = (__int64)&v7->ProcessListEntry;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v27, (__int64)&KiProcessListHead);
  }
  v13 = *(_DWORD *)(a1 + 120) ^ ((unsigned __int16)*(_DWORD *)(a1 + 120) ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v7->0 << 6)) & 0x100;
  *(_DWORD *)(a1 + 120) = v13;
  QuantumReset = (unsigned __int8)v7->QuantumReset;
  *(_BYTE *)(a1 + 651) = QuantumReset;
  v15 = (unsigned int)(KiCyclesPerClockQuantum * QuantumReset);
  if ( (v13 & 0x20) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
  *(_QWORD *)(a1 + 32) = v15;
  KiAcquireKobjectLockSafe(&v7->Header.Lock);
  Blink = v7->ThreadListHead.Blink;
  v18 = (struct _LIST_ENTRY *)(a1 + 760);
  if ( Blink->Flink != p_ThreadListHead )
LABEL_13:
    __fastfail(3u);
  v18->Flink = p_ThreadListHead;
  *(_QWORD *)(a1 + 768) = Blink;
  Blink->Flink = v18;
  v7->ThreadListHead.Blink = v18;
  _InterlockedAnd(&v7->Header.Lock, 0xFFFFFF7F);
  if ( v7->FreezeCount )
    KiFreezeSingleThread(KeGetCurrentPrcb(), a1, 0LL);
  if ( (*(_DWORD *)&v7->0 & 8) != 0 )
  {
    LOBYTE(v16) = 1;
    KiFreezeSingleThread(KeGetCurrentPrcb(), a1, v16);
  }
  *(_QWORD *)(a1 + 104) = v7->SchedulingGroup;
  if ( v7->SchedulingGroup )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  KiUpdateSharedReadyQueueAffinityThread(v12, a1);
  if ( v7->PerProcessorCycleTimes )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x17u);
  KiInitializeForegroundBoostThread(a1);
  if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
    *(_DWORD *)(a1 + 952) = v7->ProcessTimerDelay;
  if ( dword_140FC4404 < (unsigned int)KiHgsPlusConfiguration )
    *(_BYTE *)(a1 + 517) = dword_140FC4404;
  LOBYTE(v22) = v24[0];
  result = KiReleaseProcessLockExclusive(v7, v22);
  if ( _bittest((const signed __int32 *)&xmmword_140FC5B10, 0x1Bu) )
    result = EtwTraceIdealProcessor(a1, 1350LL);
  if ( _bittest((const signed __int32 *)&xmmword_140FC5B10, 0x1Bu) )
    result = EtwTraceIdealProcessor(a1, 1351LL);
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    result = EtwTraceThreadAffinity(a1, (unsigned __int16)v26, 0, 0, (__int64)a2, 1334);
  if ( (WORD2(xmmword_140FC5B10) & 0x4000) != 0 )
    result = EtwTraceThreadSchedulingGroup(a1, 0LL, *(_QWORD *)(a1 + 104));
  _InterlockedAdd(&v7->StackCount.Value, 8u);
  return result;
}
