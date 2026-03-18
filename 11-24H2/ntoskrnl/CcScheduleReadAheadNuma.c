/*
 * XREFs of CcScheduleReadAheadNuma @ 0x1404992C0
 * Callers:
 *     CcAsyncCopyRead @ 0x1402A94F0 (CcAsyncCopyRead.c)
 *     CcAsyncReadPrefetch @ 0x140461E40 (CcAsyncReadPrefetch.c)
 *     CcScheduleReadAheadEx @ 0x1404992A0 (CcScheduleReadAheadEx.c)
 *     CcCopyReadEx @ 0x1404DBF70 (CcCopyReadEx.c)
 *     CcScheduleReadAhead @ 0x14057B6D0 (CcScheduleReadAhead.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x140208FD0 (PsGetPagePriorityThread.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcPostWorkQueue @ 0x1402A7488 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x1402A7D3C (CcAllocateWorkQueueEntry.c)
 *     CcCanIWriteStreamEx @ 0x1402CE730 (CcCanIWriteStreamEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     IoReferenceIoAttributionFromThread @ 0x1403C6140 (IoReferenceIoAttributionFromThread.c)
 *     CcPerfLogScheduleReadAhead @ 0x14045F10C (CcPerfLogScheduleReadAhead.c)
 *     CcChargeThreadForReadAhead @ 0x1404DD06C (CcChargeThreadForReadAhead.c)
 */

void __fastcall CcScheduleReadAheadNuma(_QWORD *Object, _QWORD *a2, unsigned int a3, struct _KTHREAD *a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v6; // r13
  _QWORD *v7; // rbx
  __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v10; // r12
  __int64 v12; // rbp
  KSPIN_LOCK *v13; // r10
  __int64 v14; // r11
  unsigned int v15; // eax
  int v16; // ecx
  unsigned __int64 v17; // rax
  int v18; // eax
  int v19; // esi
  int v20; // eax
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
  __int64 v39; // rbx
  KIRQL v40; // al
  KSPIN_LOCK *v41; // rcx
  KIRQL v42; // dl
  __int64 v43; // [rsp+40h] [rbp-88h]
  __int64 v44; // [rsp+48h] [rbp-80h] BYREF
  __int64 v45; // [rsp+50h] [rbp-78h]
  __int64 v46; // [rsp+58h] [rbp-70h]
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-60h] BYREF
  KIRQL v49; // [rsp+D0h] [rbp+8h]
  _QWORD *v50; // [rsp+D8h] [rbp+10h]
  int v51; // [rsp+E0h] [rbp+18h]
  int v52; // [rsp+E8h] [rbp+20h]

  v51 = a3;
  v50 = a2;
  v5 = Object[6];
  v6 = a5;
  v7 = a2;
  v8 = Object[5];
  HIDWORD(a2) = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = a4;
  v10 = a3;
  v44 = 0LL;
  v12 = *(_QWORD *)(v8 + 8);
  v13 = 0LL;
  v52 = 0;
  v14 = 0LL;
  v43 = 0LL;
  v46 = 0LL;
  if ( v12 )
  {
    v13 = *(KSPIN_LOCK **)(v12 + 536);
    v14 = *(_QWORD *)(v12 + 600);
    v43 = (__int64)v13;
    v46 = v14;
    if ( !a5 )
    {
      v15 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
      if ( CcEnablePerVolumeLazyWriter )
      {
        v6 = *(_QWORD *)(v14 + 8LL * (v15 % CcNumberNumaNodes) + 64);
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
  if ( v5
    && v12
    && (*(_DWORD *)(v12 + 152) & 1) == 0
    && (Object[10] & 0x100000) == 0
    && v16 >= 2
    && CcCanIWriteStreamEx(v13, v14, (__int64)Object, 0x1000000u, 0, 4, 0LL)
    && !*(_BYTE *)(v6 + 196) )
  {
    v20 = *(_DWORD *)(v5 + 4);
    v21 = v10 + *v7;
    v45 = v10;
    v22 = ~v20 & (v20 + v10);
    SpinLock = (PKSPIN_LOCK)(v5 + 80);
    v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 80));
    if ( (*(_DWORD *)v5 & 0x20000) == 0 )
      *(_DWORD *)v5 |= 0x20000u;
    v23 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 80LL);
    if ( (v23 & 0x20) != 0 )
    {
      v19 = 1;
LABEL_33:
      v26 = *(_QWORD *)(v5 + 64);
      if ( v21 + v45 + (unsigned int)(2 * v22) < v26 )
      {
LABEL_60:
        v31 = v51;
        goto LABEL_61;
      }
      v27 = *(_QWORD *)(v5 + 64);
      v28 = v27;
      *(_QWORD *)(v5 + 56) = v21 & 0xFFFFFFFFFFFFF000uLL;
      if ( (__int64)(v21 & 0xFFFFFFFFFFFFF000uLL) >= v26 )
      {
        v27 = ~(v22 - 1) & (v22 + v21 - 1);
        LODWORD(v26) = v27;
        v28 = v27;
      }
      ++*(_DWORD *)(v5 + 48);
      v29 = v22;
      v30 = *(_DWORD *)(v5 + 48);
      if ( v19 == 1 || (v27 = v28, v30 >= 3) )
      {
        v29 = 2 * v22;
        LODWORD(v26) = v27;
      }
      LODWORD(v26) = v26 - (v21 & 0xFFFFF000);
      v31 = v51;
      v32 = v26 + v29;
      if ( v30 >= 3 )
      {
        v26 = *(unsigned int *)(v5 + 92);
        if ( (_DWORD)v26 )
        {
          v33 = v26 * v51 * v30;
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
      if ( *((_DWORD *)v50 + 1) == *(_DWORD *)(v5 + 44) )
      {
        v24 = *(_DWORD *)(v5 + 40);
        if ( ((unsigned int)(*(_DWORD *)v50 - v24) <= 0x200 || (unsigned int)(v24 - *(_DWORD *)v50) <= 0x200)
          && *(_DWORD *)(v5 + 28) == *(_DWORD *)(v5 + 36) )
        {
          v25 = *(_DWORD *)(v5 + 32);
          if ( (unsigned int)(*(_DWORD *)(v5 + 24) - v25) <= 0x200
            || (unsigned int)(v25 - *(_DWORD *)(v5 + 24)) <= 0x200 )
          {
            goto LABEL_33;
          }
        }
      }
      v26 = *(_QWORD *)(v5 + 32) - *(_QWORD *)(v5 + 16);
      if ( *v50 - *(_QWORD *)(v5 + 32) == v26 )
      {
        v19 = 3;
        v31 = v51;
        v45 = 2LL * *v50 - *(_QWORD *)(v5 + 32);
        if ( v45 < 0 )
          goto LABEL_61;
        v35 = v45;
        LODWORD(v45) = v45 & 0xFFFFF000;
        v31 = (v35 & 0xFFF) + v51;
        v51 = v31;
        *(_QWORD *)(v5 + 56) = v45;
        v32 = (v31 + 4095) & 0xFFFFF000;
LABEL_49:
        v52 = 1;
        *(_DWORD *)(v5 + 52) = v32;
        if ( (*(_DWORD *)v5 & 0x10000) == 0 )
        {
          *(_DWORD *)v5 |= 0x10000u;
          *(_DWORD *)v5 ^= (*(_DWORD *)v5 ^ ((unsigned int)PsGetPagePriorityThread((__int64)KeGetCurrentThread()) << 18)) & 0x1C0000;
          KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 80), v36);
          if ( (int)CcAllocateWorkQueueEntry(v43, v46, v6, &v44) >= 0 )
          {
            if ( (xmmword_140FC5B10 & 0x20000) != 0 )
              CcPerfLogScheduleReadAhead(v44, Object, v50, v51, v22, v19, 1);
            if ( (*(_DWORD *)(v12 + 152) & 0x10000000) != 0 )
              CcChargeThreadForReadAhead((_DWORD)Object, v37, v38, v19, (__int64)CurrentThread);
            ObfReferenceObjectWithTag(Object, 0x746C6644u);
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v43 + 768), &LockHandle);
            ++*(_DWORD *)(v12 + 4);
            ++*(_DWORD *)(v12 + 544);
            *(_DWORD *)(v12 + 152) |= 0x4000u;
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v39 = v44;
            *(_QWORD *)(v5 + 112) = v44;
            *(_DWORD *)(v39 + 128) = 1;
            *(_QWORD *)(v39 + 16) = Object;
            *(_QWORD *)(v39 + 24) = 0LL;
            IoReferenceIoAttributionFromThread(CurrentThread, (unsigned __int64 *)(v39 + 24));
            CcPostWorkQueue(v39, v6 + 88);
            return;
          }
          v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 80));
          *(_DWORD *)v5 &= ~0x10000u;
          v41 = (KSPIN_LOCK *)(v5 + 80);
          v42 = v40;
LABEL_64:
          KeReleaseSpinLock(v41, v42);
          return;
        }
        if ( (*(_DWORD *)(v12 + 152) & 0x10000000) != 0 )
        {
          CcChargeThreadForReadAhead((_DWORD)Object, v26, v32, v19, (__int64)CurrentThread);
          goto LABEL_60;
        }
LABEL_61:
        if ( (xmmword_140FC5B10 & 0x20000) != 0 )
          CcPerfLogScheduleReadAhead(0LL, Object, v50, v31, v22, v19, v52);
        v42 = v49;
        v41 = SpinLock;
        goto LABEL_64;
      }
    }
    LOBYTE(v19) = 0;
    *(_DWORD *)(v5 + 48) = 0;
    *(_QWORD *)(v5 + 64) = 0LL;
    *(_QWORD *)(v5 + 72) = 0LL;
    goto LABEL_60;
  }
}
