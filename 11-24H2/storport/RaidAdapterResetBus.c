/*
 * XREFs of RaidAdapterResetBus @ 0x14002F998
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140010664 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidUnitPendingDpcRoutine @ 0x14002ED00 (RaidUnitPendingDpcRoutine.c)
 *     RaidUnitRequestTimeout @ 0x14002F338 (RaidUnitRequestTimeout.c)
 *     RaidAdapterStorageResetBusIoctl @ 0x14003E78C (RaidAdapterStorageResetBusIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x140098540 (RaUnitSetUnresponsiveAttribute.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x14009DAF8 (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitHierarchicalReset @ 0x14009F474 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     RaidPauseAdapterQueue @ 0x1400078E0 (RaidPauseAdapterQueue.c)
 *     RaidAdapterReleaseStartIoLock @ 0x1400276F0 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x140029420 (RaidAdapterAcquireStartIoLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     StorGetOutstandingIoCount @ 0x140055E34 (StorGetOutstandingIoCount.c)
 *     RaCallMiniportResetBus @ 0x140058EB4 (RaCallMiniportResetBus.c)
 *     RaidAdapterSetPauseTimer @ 0x14006179C (RaidAdapterSetPauseTimer.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1400664A8 (RaidResumeAndRestartAdapterQueues.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterResetBus(__int64 a1, unsigned __int8 a2)
{
  int v5; // r14d
  unsigned int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // r15
  struct _SLIST_ENTRY *v9; // rax
  int OutstandingIoCount; // r13d
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v12; // rdx
  ULONGLONG v13; // rbx
  unsigned int v14; // r14d
  ULONGLONG v15; // rax
  int v16; // esi
  ULONGLONG v17; // r15
  int v18; // esi
  unsigned int v19; // ebx
  PSLIST_ENTRY v20; // rax
  unsigned int v21; // ecx
  __int64 v22; // r9
  __int64 v23; // rcx
  KIRQL v24; // bl
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  unsigned __int8 v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+34h] [rbp-CCh]
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v31; // [rsp+3Ch] [rbp-C4h] BYREF
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  ULONGLONG v34; // [rsp+48h] [rbp-B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v35; // [rsp+50h] [rbp-B0h] BYREF
  union _SLIST_HEADER SListHead; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37[18]; // [rsp+80h] [rbp-80h] BYREF

  memset(&v35, 0, sizeof(v35));
  SListHead = 0LL;
  if ( a2 >= *(_BYTE *)(a1 + 456) )
    return 3221225485LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 324), 1, 0) == 1 )
    return 3221226614LL;
  RaidPauseAdapterQueue(a1);
  if ( *(int *)(a1 + 4664) > 1 )
  {
    v5 = 0;
    v6 = KeQueryHighestNodeNumber() + 1;
    InitializeSListHead(&SListHead);
    do
    {
      if ( v6 )
      {
        v7 = 0LL;
        v8 = v6;
        do
        {
          v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v7 + *(_QWORD *)(a1 + 4672)));
          if ( v9 )
          {
            ExpInterlockedPushEntrySList(&SListHead, v9);
            ++v5;
          }
          else
          {
            _mm_pause();
          }
          v7 += 64LL;
          --v8;
        }
        while ( v8 );
      }
    }
    while ( v5 < *(_DWORD *)(a1 + 4664) );
  }
  RaidAdapterAcquireStartIoLock(a1, &v35);
  *(_DWORD *)(a1 + 5088) = 0;
  OutstandingIoCount = StorGetOutstandingIoCount(a1);
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  LOBYTE(v12) = a2;
  v13 = UnbiasedInterruptTime;
  v14 = RaCallMiniportResetBus(a1 + 376, v12);
  v15 = KeQueryUnbiasedInterruptTime();
  v16 = *(_DWORD *)(a1 + 5088);
  v17 = v15 - v13;
  v29 = v16;
  if ( *(int *)(a1 + 4664) > 1 )
  {
    v18 = 0;
    v19 = KeQueryHighestNodeNumber() + 1;
    do
    {
      v20 = ExpInterlockedPopEntrySList(&SListHead);
      if ( v20 )
      {
        ExpInterlockedPushEntrySList(
          (PSLIST_HEADER)(*(_QWORD *)(a1 + 4672) + ((unsigned __int64)(HIDWORD(v20[1].Next) % v19) << 6)),
          v20);
        ++v18;
      }
    }
    while ( v18 < *(_DWORD *)(a1 + 4664) );
    v16 = v29;
  }
  RaidAdapterReleaseStartIoLock(a1, &v35);
  v21 = *(_DWORD *)(a1 + 600);
  if ( v21 )
  {
    v22 = v21 / 0xF4240 + 1;
    if ( v21 == 1000000 * (v21 / 0xF4240) )
      v22 = v21 / 0xF4240;
    RaidAdapterSetPauseTimer(a1, a1 + 4136, a1 + 4200, v22);
  }
  else
  {
    v24 = KfRaiseIrql(2u);
    RaidResumeAndRestartAdapterQueues(a1);
    KeLowerIrql(v24);
  }
  if ( (unsigned int)dword_140170178 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(v23, 0x400000000000LL) )
    {
      v37[5] = 16LL;
      v37[4] = a1 + 5064;
      v30 = *(_DWORD *)(a1 + 56);
      v37[6] = (__int64)&v30;
      v37[8] = (__int64)&v28;
      v37[10] = (__int64)&v31;
      v37[12] = (__int64)&v34;
      v37[14] = (__int64)&v32;
      v37[16] = (__int64)&v33;
      v37[7] = 4LL;
      v28 = a2;
      v37[9] = 1LL;
      v31 = v14;
      v37[11] = 4LL;
      v34 = v17;
      v37[13] = 8LL;
      v32 = OutstandingIoCount;
      v37[15] = 4LL;
      v33 = v16;
      v37[17] = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(v25, (int)&dword_14015E04A, v26, v27, 9u, (__int64)v37);
    }
  }
  *(_DWORD *)(a1 + 324) = 0;
  return v14;
}
