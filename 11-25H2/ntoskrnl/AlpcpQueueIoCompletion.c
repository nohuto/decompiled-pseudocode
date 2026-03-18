/*
 * XREFs of AlpcpQueueIoCompletion @ 0x140281CC0
 * Callers:
 *     AlpcpQueueIoCompletionPort @ 0x140280A30 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpSignal @ 0x140284330 (AlpcpSignal.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x140308E00 (AlpcpSignalAndWait.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140419F10 (AlpcpLookasidePacketCallbackRoutine.c)
 * Callees:
 *     KiCompleteDirectSwitchThread @ 0x14027FA58 (KiCompleteDirectSwitchThread.c)
 *     EtwTraceEnqueueWork @ 0x1402811B8 (EtwTraceEnqueueWork.c)
 *     KeIsThreadRunning @ 0x14028123C (KeIsThreadRunning.c)
 *     KiWakeOtherQueueWaiters @ 0x140283660 (KiWakeOtherQueueWaiters.c)
 *     KiRemovePrcbWaitEntry @ 0x140285980 (KiRemovePrcbWaitEntry.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     IopAllocateMiniCompletionPacket @ 0x1409D26C0 (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall AlpcpQueueIoCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, int a6)
{
  unsigned int v6; // r15d
  __int64 MiniCompletionPacket; // r14
  __int64 v10; // r13
  int v11; // esi
  _QWORD *v12; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 CurrentThread; // rbx
  __int64 v16; // rax
  bool v17; // di
  __int64 v18; // rcx
  _QWORD *v19; // rdi
  _QWORD *v20; // rbp
  _QWORD *v21; // rax
  char v22; // dl
  int v23; // eax
  __int64 v24; // rdx
  char v25; // al
  __int64 v26; // rcx
  unsigned int v27; // esi
  __int64 v28; // rbx
  int v29; // ecx
  __int64 *v30; // rdx
  __int64 v31; // rax
  int v32; // ecx
  int v33; // ebx
  char IsThreadRunning; // al
  struct _KPRCB *v36; // [rsp+30h] [rbp-38h]
  char v37; // [rsp+38h] [rbp-30h]
  int v38; // [rsp+88h] [rbp+20h]
  char v39; // [rsp+98h] [rbp+30h]

  v6 = 0;
  MiniCompletionPacket = a4;
  v10 = a1;
  v11 = (a5 != 0) | 4;
  if ( !a6 )
    v11 = a5 != 0;
  v39 = v11;
  if ( a4 || (LOBYTE(a1) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, 0LL)) != 0) )
  {
    *(_QWORD *)(MiniCompletionPacket + 24) = a2;
    v12 = (_QWORD *)(v10 + 8);
    *(_QWORD *)(MiniCompletionPacket + 32) = a3;
    *(_DWORD *)(MiniCompletionPacket + 40) = 0;
    *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    v37 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    CurrentPrcb = KeGetCurrentPrcb();
    v36 = CurrentPrcb;
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning((__int64)CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, MiniCompletionPacket, IsThreadRunning);
    }
    v38 = ((unsigned __int8)~*(_BYTE *)(v10 + 1) >> 1) & 1;
    v16 = *(_QWORD *)(CurrentThread + 1616);
    if ( !v16 )
      v16 = CurrentThread;
    v17 = v11 && (*(_DWORD *)(*(_QWORD *)(v16 + 544) + 136LL) & 0x2000) != 0;
    KiAcquireKobjectLockSafe(v10);
    if ( (_QWORD *)*v12 == v12
      || *(_DWORD *)(v10 + 40) >= *(_DWORD *)(v10 + 44) && !v17
      || *(_QWORD *)(CurrentThread + 232) == v10 && *(_BYTE *)(CurrentThread + 643) == 15 )
    {
LABEL_48:
      v29 = *(_DWORD *)(v10 + 4);
      *(_DWORD *)(v10 + 4) = v29 + 1;
      v30 = *(__int64 **)(v10 + 32);
      if ( *v30 != v10 + 24 )
LABEL_20:
        __fastfail(3u);
      *(_QWORD *)MiniCompletionPacket = v10 + 24;
      *(_QWORD *)(MiniCompletionPacket + 8) = v30;
      *v30 = MiniCompletionPacket;
      *(_QWORD *)(v10 + 32) = MiniCompletionPacket;
      if ( !v29 && (_QWORD *)*v12 != v12 )
        KiWakeOtherQueueWaiters(CurrentPrcb, v10);
    }
    else
    {
      v19 = (_QWORD *)*v12;
      while ( 1 )
      {
        v20 = v19;
        v19 = (_QWORD *)*v19;
        if ( *((_BYTE *)v20 + 16) != 3 )
        {
LABEL_33:
          LOBYTE(v11) = v39;
          CurrentPrcb = v36;
          goto LABEL_48;
        }
        v21 = (_QWORD *)v20[1];
        if ( (_QWORD *)v19[1] != v20 || (_QWORD *)*v21 != v20 )
          goto LABEL_20;
        *v21 = v19;
        v27 = 0;
        v19[1] = v21;
        v28 = v20[3];
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 64), 0LL) )
        {
          do
          {
            if ( (++v27 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v18) )
            {
              HvlNotifyLongSpinWait(v27);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v28 + 64) );
        }
        if ( *(_BYTE *)(v28 + 388) == 5 )
        {
          v18 = *(unsigned __int8 *)(v28 + 112);
          v22 = 0;
          v23 = *(_BYTE *)(v28 + 112) & 7;
          if ( v23 == 1 || v23 == 4 )
          {
            v24 = *(_QWORD *)(v28 + 232);
            if ( v24 )
            {
              if ( (*(_BYTE *)v24 & 0x7F) == 0x15 )
              {
                v31 = (unsigned __int8)*(_DWORD *)(v28 + 540);
                *(_DWORD *)(v28 + 540) = v31;
                _InterlockedIncrement((volatile signed __int32 *)(v24 + 4 * v31 + 536));
              }
              else
              {
                _InterlockedIncrement((volatile signed __int32 *)(v24 + 40));
              }
            }
            KiRemovePrcbWaitEntry(v28);
            v25 = *(_BYTE *)(v28 + 388);
            if ( v25 == 1 )
            {
              *(_DWORD *)(v28 + 116) |= 2u;
            }
            else if ( v25 == 5 )
            {
              v26 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v28 + 436));
              if ( *(_BYTE *)(v28 + 391) )
                *(_QWORD *)(v28 + 1000) += v26;
              else
                *(_QWORD *)(v28 + 992) += v26;
            }
            v18 = v28 + 216;
            *(_BYTE *)(v28 + 388) = 7;
            *(_QWORD *)(v28 + 216) = v36->DeferredReadyListHead.Next;
            v36->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v28 + 216);
            v22 = 1;
            *(_QWORD *)(v28 + 200) = MiniCompletionPacket;
            *(_QWORD *)(v28 + 976) = 0LL;
          }
          else if ( (*(_BYTE *)(v28 + 112) & 7) != 0 )
          {
            if ( v23 == 5 )
            {
              LOBYTE(v18) = v18 & 0xF8 | 6;
              *(_BYTE *)(v28 + 112) = v18;
            }
            else if ( v23 == 3 )
            {
              *((_BYTE *)v20 + 17) = 2;
            }
          }
          else
          {
            v22 = 1;
            LOBYTE(v18) = v18 & 0xF8 | 2;
            *(_BYTE *)(v28 + 112) = v18;
            *(_QWORD *)(v28 + 200) = MiniCompletionPacket;
            *(_QWORD *)(v28 + 976) = 0LL;
            *((_BYTE *)v20 + 17) = 0;
          }
        }
        else
        {
          v22 = 0;
        }
        *(_QWORD *)(v28 + 64) = 0LL;
        ++*((_BYTE *)v20 + 17);
        if ( v22 )
          break;
        if ( v19 == v12 )
          goto LABEL_33;
      }
      LOBYTE(v11) = v39;
      *(_QWORD *)MiniCompletionPacket = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)v10, 0xFFFFFF7F);
    if ( (v11 & 1) != 0 )
    {
      v32 = 3;
    }
    else
    {
      v32 = 0;
      if ( (v11 & 4) != 0 )
      {
        v33 = (int)v36;
        KiCompleteDirectSwitchThread(v36, (__int64)v36->CurrentThread);
        v32 = 6;
        goto LABEL_57;
      }
    }
    v33 = (int)v36;
LABEL_57:
    KiExitDispatcher(v33, v32, 1, v38, v37);
    return 1;
  }
  return v6;
}
