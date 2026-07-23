/*
 * XREFs of CcScheduleReadAheadNuma @ 0x140493C50
 * Callers:
 *     CcAsyncCopyRead @ 0x140273E20 (CcAsyncCopyRead.c)
 *     CcAsyncReadPrefetch @ 0x140457450 (CcAsyncReadPrefetch.c)
 *     CcScheduleReadAheadEx @ 0x140493C30 (CcScheduleReadAheadEx.c)
 *     CcCopyReadEx @ 0x1404D5990 (CcCopyReadEx.c)
 *     CcScheduleReadAhead @ 0x140578B60 (CcScheduleReadAhead.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     IoReferenceIoAttributionFromThread @ 0x140273BD0 (IoReferenceIoAttributionFromThread.c)
 *     CcAllocateWorkQueueEntry @ 0x140279B34 (CcAllocateWorkQueueEntry.c)
 *     CcPostWorkQueue @ 0x14027AE6C (CcPostWorkQueue.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PsGetPagePriorityThread @ 0x1403305B0 (PsGetPagePriorityThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcCanIWriteStreamEx @ 0x14040C5C0 (CcCanIWriteStreamEx.c)
 *     CcPerfLogScheduleReadAhead @ 0x140453FCC (CcPerfLogScheduleReadAhead.c)
 *     CcChargeThreadForReadAhead @ 0x1404D6A8C (CcChargeThreadForReadAhead.c)
 */

void __fastcall CcScheduleReadAheadNuma(
        _SLIST_ENTRY *Object,
        _QWORD *a2,
        unsigned int a3,
        struct _KTHREAD *a4,
        __int64 a5)
{
  _SLIST_ENTRY *Next; // rdi
  __int64 v6; // r13
  _QWORD *v7; // rbx
  __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v10; // r12
  __int64 v12; // rbp
  KSPIN_LOCK *v13; // r10
  _SLIST_ENTRY *v14; // r11
  unsigned int v15; // eax
  int v16; // ecx
  unsigned __int64 v17; // rax
  int v18; // eax
  int v19; // esi
  int Next_high; // eax
  __int64 v21; // rbx
  int v22; // r12d
  int v23; // edx
  int v24; // ecx
  int v25; // ecx
  signed __int64 v26; // rdx
  int v27; // ecx
  int v28; // r10d
  int v29; // r8d
  unsigned int v30; // eax
  int v31; // r9d
  unsigned int v32; // r8d
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  __int16 v35; // ax
  KIRQL v36; // r10
  int v37; // edx
  int v38; // r8d
  PSLIST_ENTRY v39; // rbx
  __int64 v40; // r8
  __int64 v41; // r9
  KIRQL v42; // al
  KSPIN_LOCK *v43; // rcx
  KIRQL v44; // dl
  __int64 v45; // [rsp+40h] [rbp-88h]
  __int64 v46; // [rsp+48h] [rbp-80h] BYREF
  __int64 v47; // [rsp+50h] [rbp-78h]
  _SLIST_ENTRY *v48; // [rsp+58h] [rbp-70h]
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-60h] BYREF
  KIRQL v51; // [rsp+D0h] [rbp+8h]
  _QWORD *v52; // [rsp+D8h] [rbp+10h]
  int v53; // [rsp+E0h] [rbp+18h]
  int v54; // [rsp+E8h] [rbp+20h]

  v53 = a3;
  v52 = a2;
  Next = Object[3].Next;
  v6 = a5;
  v7 = a2;
  v8 = *((_QWORD *)&Object[2].Next + 1);
  HIDWORD(a2) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = a4;
  v10 = a3;
  v46 = 0LL;
  v12 = *(_QWORD *)(v8 + 8);
  v13 = 0LL;
  v54 = 0;
  v14 = 0LL;
  v45 = 0LL;
  v48 = 0LL;
  if ( v12 )
  {
    v13 = *(KSPIN_LOCK **)(v12 + 536);
    v14 = *(_SLIST_ENTRY **)(v12 + 600);
    v45 = (__int64)v13;
    v48 = v14;
    if ( !a5 )
    {
      v15 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
      if ( CcEnablePerVolumeLazyWriter )
      {
        v6 = *((_QWORD *)&v14[4].Next + v15 % CcNumberNumaNodes);
      }
      else
      {
        LODWORD(a2) = v15 % CcNumberNumaNodes;
        v6 = v13[(_QWORD)a2 + 16];
      }
    }
  }
  if ( !a4 )
    CurrentThread = KeGetCurrentThread();
  v16 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  v17 = CurrentThread->Process[1].Padding[3];
  if ( v17 )
  {
    v18 = *(_DWORD *)(v17 + 1084);
    if ( v16 >= v18 )
      v16 = v18;
  }
  v19 = 2;
  if ( v16 < 2 && CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
    v16 = 2;
  if ( Next
    && v12
    && (*(_DWORD *)(v12 + 152) & 1) == 0
    && ((__int64)Object[5].Next & 0x100000) == 0
    && v16 >= 2
    && CcCanIWriteStreamEx(v13, (__int64)v14, (__int64)Object, 0x1000000u, 0, 4, 0LL)
    && !*(_BYTE *)(v6 + 196) )
  {
    Next_high = HIDWORD(Next->Next);
    v21 = v10 + *v7;
    v47 = v10;
    v22 = ~Next_high & (Next_high + v10);
    SpinLock = (PKSPIN_LOCK)&Next[5];
    v51 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Next[5]);
    if ( ((__int64)Next->Next & 0x20000) == 0 )
      LODWORD(Next->Next) |= 0x20000u;
    v23 = *(_DWORD *)(*((_QWORD *)&Next->Next + 1) + 80LL);
    if ( (v23 & 0x20) != 0 )
    {
      v19 = 1;
LABEL_33:
      v26 = (signed __int64)Next[4].Next;
      if ( v21 + v47 + (unsigned int)(2 * v22) < v26 )
      {
LABEL_60:
        v31 = v53;
        goto LABEL_61;
      }
      v27 = (int)Next[4].Next;
      v28 = v27;
      *((_QWORD *)&Next[3].Next + 1) = v21 & 0xFFFFFFFFFFFFF000uLL;
      if ( (__int64)(v21 & 0xFFFFFFFFFFFFF000uLL) >= v26 )
      {
        v27 = ~(v22 - 1) & (v22 + v21 - 1);
        LODWORD(v26) = v27;
        v28 = v27;
      }
      ++LODWORD(Next[3].Next);
      v29 = v22;
      v30 = (unsigned int)Next[3].Next;
      if ( v19 == 1 || (v27 = v28, v30 >= 3) )
      {
        v29 = 2 * v22;
        LODWORD(v26) = v27;
      }
      LODWORD(v26) = v26 - (v21 & 0xFFFFF000);
      v31 = v53;
      v32 = v26 + v29;
      if ( v30 >= 3 )
      {
        v26 = *((unsigned int *)&Next[5].Next + 3);
        if ( (_DWORD)v26 )
        {
          v33 = v26 * v53 * v30;
          v26 = (v33 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
          v34 = v33 / 0x64;
          if ( v34 > 0xFFFFFFFF )
            v34 = 0xFFFFFFFFLL;
          if ( v34 > v32 )
            v32 = v34;
        }
      }
      goto LABEL_49;
    }
    if ( (v23 & 0x100000) == 0 )
    {
      if ( *((_DWORD *)v52 + 1) == *((_DWORD *)&Next[2].Next + 3) )
      {
        v24 = *((_DWORD *)&Next[2].Next + 2);
        if ( ((unsigned int)(*(_DWORD *)v52 - v24) <= 0x200 || (unsigned int)(v24 - *(_DWORD *)v52) <= 0x200)
          && *((_DWORD *)&Next[1].Next + 3) == HIDWORD(Next[2].Next) )
        {
          v25 = (int)Next[2].Next;
          if ( (unsigned int)(*((_DWORD *)&Next[1].Next + 2) - v25) <= 0x200
            || (unsigned int)(v25 - *((_DWORD *)&Next[1].Next + 2)) <= 0x200 )
          {
            goto LABEL_33;
          }
        }
      }
      v26 = (char *)Next[2].Next - (char *)Next[1].Next;
      if ( *v52 - (unsigned __int64)Next[2].Next == v26 )
      {
        v19 = 3;
        v31 = v53;
        v47 = 2LL * *v52 - (unsigned __int64)Next[2].Next;
        if ( v47 < 0 )
          goto LABEL_61;
        v35 = v47;
        LODWORD(v47) = v47 & 0xFFFFF000;
        v31 = (v35 & 0xFFF) + v53;
        v53 = v31;
        *((_QWORD *)&Next[3].Next + 1) = v47;
        v32 = (v31 + 4095) & 0xFFFFF000;
LABEL_49:
        v54 = 1;
        HIDWORD(Next[3].Next) = v32;
        if ( ((__int64)Next->Next & 0x10000) == 0 )
        {
          LODWORD(Next->Next) |= 0x10000u;
          LODWORD(Next->Next) ^= (LODWORD(Next->Next) ^ ((unsigned int)PsGetPagePriorityThread((__int64)KeGetCurrentThread()) << 18)) & 0x1C0000;
          KeReleaseSpinLock((PKSPIN_LOCK)&Next[5], v36);
          if ( (int)CcAllocateWorkQueueEntry(v45, v48, v6, (PSLIST_ENTRY *)&v46) >= 0 )
          {
            if ( (xmmword_140FC6B50 & 0x20000) != 0 )
              CcPerfLogScheduleReadAhead(v46, Object, v52, v53, v22, v19, 1);
            if ( (*(_DWORD *)(v12 + 152) & 0x10000000) != 0 )
              CcChargeThreadForReadAhead((_DWORD)Object, v37, v38, v19, (__int64)CurrentThread);
            ObfReferenceObjectWithTag(Object, 0x746C6644u);
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v45 + 768), &LockHandle);
            ++*(_DWORD *)(v12 + 4);
            ++*(_DWORD *)(v12 + 544);
            *(_DWORD *)(v12 + 152) |= 0x4000u;
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v39 = (PSLIST_ENTRY)v46;
            Next[7].Next = (_SLIST_ENTRY *)v46;
            LODWORD(v39[8].Next) = 1;
            v39[1].Next = Object;
            *((_QWORD *)&v39[1].Next + 1) = 0LL;
            IoReferenceIoAttributionFromThread(CurrentThread, (unsigned __int64 *)&v39[1].Next + 1);
            CcPostWorkQueue(v39, v6 + 88, v40, v41);
            return;
          }
          v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Next[5]);
          LODWORD(Next->Next) &= ~0x10000u;
          v43 = (KSPIN_LOCK *)&Next[5];
          v44 = v42;
LABEL_64:
          KeReleaseSpinLock(v43, v44);
          return;
        }
        if ( (*(_DWORD *)(v12 + 152) & 0x10000000) != 0 )
        {
          CcChargeThreadForReadAhead((_DWORD)Object, v26, v32, v19, (__int64)CurrentThread);
          goto LABEL_60;
        }
LABEL_61:
        if ( (xmmword_140FC6B50 & 0x20000) != 0 )
          CcPerfLogScheduleReadAhead(0LL, Object, v52, v31, v22, v19, v54);
        v44 = v51;
        v43 = SpinLock;
        goto LABEL_64;
      }
    }
    LOBYTE(v19) = 0;
    LODWORD(Next[3].Next) = 0;
    Next[4].Next = 0LL;
    *((_QWORD *)&Next[4].Next + 1) = 0LL;
    goto LABEL_60;
  }
}
