/*
 * XREFs of AlpcpQueueIoCompletion @ 0x1403AC630
 * Callers:
 *     AlpcpSignal @ 0x1402C46F0 (AlpcpSignal.c)
 *     AlpcpSignalAndWait @ 0x1402CD9A0 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403ABBA0 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140409280 (AlpcpLookasidePacketCallbackRoutine.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemovePrcbWaitEntry @ 0x1402C5A30 (KiRemovePrcbWaitEntry.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiCompleteDirectSwitchThread @ 0x1403ABAF4 (KiCompleteDirectSwitchThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1403ACF00 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1403AD158 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1403AD184 (EtwTraceEnqueueWork.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IopAllocateMiniCompletionPacket @ 0x1409C52D0 (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall AlpcpQueueIoCompletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, int a6)
{
  unsigned int v6; // r15d
  __int64 MiniCompletionPacket; // r12
  __int64 v10; // r14
  int v11; // r13d
  _QWORD *v12; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // rbx
  _QWORD *Object; // rax
  bool v17; // di
  _QWORD *v18; // rdi
  _QWORD *v19; // rbp
  _QWORD *v20; // rax
  char v21; // cl
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
  unsigned int v32; // ecx
  unsigned __int64 v33; // rbx
  unsigned __int8 IsThreadRunning; // al
  unsigned __int8 v36; // [rsp+30h] [rbp-38h]
  struct _KPRCB *v37; // [rsp+88h] [rbp+20h]
  unsigned int v38; // [rsp+98h] [rbp+30h]

  v6 = 0;
  MiniCompletionPacket = a4;
  v10 = a1;
  v11 = (a5 != 0) | 4;
  if ( !a6 )
    v11 = a5 != 0;
  if ( a4 || (LOBYTE(a1) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, 0LL)) != 0) )
  {
    *(_QWORD *)(MiniCompletionPacket + 24) = a2;
    v12 = (_QWORD *)(v10 + 8);
    *(_QWORD *)(MiniCompletionPacket + 32) = a3;
    *(_DWORD *)(MiniCompletionPacket + 40) = 0;
    *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    v36 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v37 = CurrentPrcb;
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, MiniCompletionPacket, IsThreadRunning);
    }
    v38 = ((unsigned __int8)~*(_BYTE *)(v10 + 1) >> 1) & 1;
    Object = CurrentThread[1].WaitBlock[1].Object;
    if ( !Object )
      Object = &CurrentThread->Header.Lock;
    v17 = v11 && (*(_DWORD *)(Object[68] + 136LL) & 0x2000) != 0;
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v10);
    if ( (_QWORD *)*v12 == v12
      || *(_DWORD *)(v10 + 40) >= *(_DWORD *)(v10 + 44) && !v17
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v10 && CurrentThread->WaitReason == 15 )
    {
LABEL_45:
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
      v18 = (_QWORD *)*v12;
      while ( 1 )
      {
        v19 = v18;
        v18 = (_QWORD *)*v18;
        if ( *((_BYTE *)v19 + 16) != 3 )
        {
LABEL_33:
          CurrentPrcb = v37;
          goto LABEL_45;
        }
        v20 = (_QWORD *)v19[1];
        if ( (_QWORD *)v18[1] != v19 || (_QWORD *)*v20 != v19 )
          goto LABEL_20;
        *v20 = v18;
        v27 = 0;
        v18[1] = v20;
        v28 = v19[3];
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 64), 0LL) )
        {
          do
          {
            if ( (++v27 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
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
          v21 = *(_BYTE *)(v28 + 112);
          v22 = 0;
          v23 = v21 & 7;
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
            KiRemovePrcbWaitEntry((_QWORD *)v28);
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
            *(_BYTE *)(v28 + 388) = 7;
            *(_QWORD *)(v28 + 216) = v37->DeferredReadyListHead.Next;
            v37->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v28 + 216);
            v22 = 1;
            *(_QWORD *)(v28 + 200) = MiniCompletionPacket;
            *(_QWORD *)(v28 + 976) = 0LL;
          }
          else if ( (*(_BYTE *)(v28 + 112) & 7) != 0 )
          {
            if ( v23 == 5 )
            {
              *(_BYTE *)(v28 + 112) = v21 & 0xF8 | 6;
            }
            else if ( v23 == 3 )
            {
              *((_BYTE *)v19 + 17) = 2;
            }
          }
          else
          {
            v22 = 1;
            *(_BYTE *)(v28 + 112) = v21 & 0xF8 | 2;
            *(_QWORD *)(v28 + 200) = MiniCompletionPacket;
            *(_QWORD *)(v28 + 976) = 0LL;
            *((_BYTE *)v19 + 17) = 0;
          }
        }
        else
        {
          v22 = 0;
        }
        *(_QWORD *)(v28 + 64) = 0LL;
        ++*((_BYTE *)v19 + 17);
        if ( v22 )
          break;
        v12 = (_QWORD *)(v10 + 8);
        if ( v18 == (_QWORD *)(v10 + 8) )
          goto LABEL_33;
      }
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
        v33 = (unsigned __int64)v37;
        KiCompleteDirectSwitchThread(v37, (__int64)v37->CurrentThread);
        v32 = 6;
        goto LABEL_54;
      }
    }
    v33 = (unsigned __int64)v37;
LABEL_54:
    KiExitDispatcher(v33, v32, 1u, v38, v36);
    return 1;
  }
  return v6;
}
