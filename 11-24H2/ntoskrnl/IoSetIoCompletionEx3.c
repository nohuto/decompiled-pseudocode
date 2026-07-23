/*
 * XREFs of IoSetIoCompletionEx3 @ 0x1403ACAA0
 * Callers:
 *     ExpShutdownWorkerFactory @ 0x1403ADC94 (ExpShutdownWorkerFactory.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14042AA30 (ExpWorkerFactoryCompletionPacketRoutine.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemovePrcbWaitEntry @ 0x1402C5A30 (KiRemovePrcbWaitEntry.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiWakeOtherQueueWaiters @ 0x1403ACF00 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1403AD158 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1403AD184 (EtwTraceEnqueueWork.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IopAllocateMiniCompletionPacket @ 0x1409C52D0 (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall IoSetIoCompletionEx3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        char a8,
        char a9)
{
  __int64 MiniCompletionPacket; // r15
  __int64 v13; // r14
  _QWORD *v14; // r12
  unsigned int v15; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rsi
  _KTHREAD *CurrentThread; // rbx
  unsigned int v19; // ebp
  _QWORD *Object; // rax
  bool v21; // di
  _QWORD *v22; // rdi
  _QWORD *v23; // rbp
  _QWORD *v24; // rax
  char v25; // cl
  int v26; // eax
  __int64 v27; // rdx
  char v28; // al
  __int64 v29; // rcx
  char v30; // r13
  unsigned int v31; // esi
  __int64 v32; // rbx
  int v33; // ecx
  __int64 *v34; // rdx
  __int64 v35; // rax
  unsigned __int8 IsThreadRunning; // al
  struct _KPRCB *v38; // [rsp+30h] [rbp-38h]
  unsigned __int8 v39; // [rsp+38h] [rbp-30h]
  unsigned int v40; // [rsp+A0h] [rbp+38h]

  MiniCompletionPacket = a7;
  v13 = a1;
  if ( a7 || (LOBYTE(a1) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, a6)) != 0) )
  {
    v14 = (_QWORD *)(v13 + 8);
    *(_QWORD *)(MiniCompletionPacket + 32) = a3;
    v15 = a9;
    v40 = a9;
    *(_QWORD *)(MiniCompletionPacket + 24) = a2;
    *(_DWORD *)(MiniCompletionPacket + 40) = a4;
    *(_QWORD *)(MiniCompletionPacket + 48) = a5;
    CurrentIrql = KeGetCurrentIrql();
    v39 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v38 = CurrentPrcb;
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, MiniCompletionPacket, IsThreadRunning);
    }
    if ( a9 )
    {
      v19 = 0;
      if ( (*(_BYTE *)(v13 + 1) & 2) != 0 )
        v15 = 0;
      v40 = v15;
    }
    else
    {
      v19 = 0;
    }
    Object = CurrentThread[1].WaitBlock[1].Object;
    if ( !Object )
      Object = &CurrentThread->Header.Lock;
    v21 = a8 && (*(_DWORD *)(Object[68] + 136LL) & 0x2000) != 0;
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v13);
    if ( (_QWORD *)*v14 == v14
      || *(_DWORD *)(v13 + 40) >= *(_DWORD *)(v13 + 44) && !v21
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v13 && CurrentThread->WaitReason == 15 )
    {
LABEL_50:
      v33 = *(_DWORD *)(v13 + 4);
      *(_DWORD *)(v13 + 4) = v33 + 1;
      v34 = *(__int64 **)(v13 + 32);
      if ( *v34 != v13 + 24 )
LABEL_20:
        __fastfail(3u);
      *(_QWORD *)MiniCompletionPacket = v13 + 24;
      *(_QWORD *)(MiniCompletionPacket + 8) = v34;
      *v34 = MiniCompletionPacket;
      *(_QWORD *)(v13 + 32) = MiniCompletionPacket;
      if ( !v33 && (_QWORD *)*v14 != v14 )
        KiWakeOtherQueueWaiters(CurrentPrcb, v13);
    }
    else
    {
      v22 = (_QWORD *)*v14;
      while ( 1 )
      {
        v23 = v22;
        v22 = (_QWORD *)*v22;
        if ( *((_BYTE *)v23 + 16) != 3 )
        {
LABEL_33:
          CurrentPrcb = v38;
          v19 = 0;
          goto LABEL_50;
        }
        v24 = (_QWORD *)v23[1];
        if ( (_QWORD *)v22[1] != v23 || (_QWORD *)*v24 != v23 )
          goto LABEL_20;
        *v24 = v22;
        v30 = 0;
        v22[1] = v24;
        v31 = 0;
        v32 = v23[3];
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 64), 0LL) )
        {
          do
          {
            if ( (++v31 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v31);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v32 + 64) );
        }
        if ( *(_BYTE *)(v32 + 388) == 5 )
        {
          v25 = *(_BYTE *)(v32 + 112);
          v26 = v25 & 7;
          if ( v26 == 1 || v26 == 4 )
          {
            v27 = *(_QWORD *)(v32 + 232);
            if ( v27 )
            {
              if ( (*(_BYTE *)v27 & 0x7F) == 0x15 )
              {
                v35 = (unsigned __int8)*(_DWORD *)(v32 + 540);
                *(_DWORD *)(v32 + 540) = v35;
                _InterlockedIncrement((volatile signed __int32 *)(v27 + 4 * v35 + 536));
              }
              else
              {
                _InterlockedIncrement((volatile signed __int32 *)(v27 + 40));
              }
            }
            KiRemovePrcbWaitEntry((_QWORD *)v32);
            v28 = *(_BYTE *)(v32 + 388);
            if ( v28 == 1 )
            {
              *(_DWORD *)(v32 + 116) |= 2u;
            }
            else if ( v28 == 5 )
            {
              v29 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v32 + 436));
              if ( *(_BYTE *)(v32 + 391) )
                *(_QWORD *)(v32 + 1000) += v29;
              else
                *(_QWORD *)(v32 + 992) += v29;
            }
            *(_BYTE *)(v32 + 388) = 7;
            v30 = 1;
            *(_QWORD *)(v32 + 216) = v38->DeferredReadyListHead.Next;
            v38->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v32 + 216);
            *(_QWORD *)(v32 + 200) = MiniCompletionPacket;
            *(_QWORD *)(v32 + 976) = 0LL;
          }
          else if ( (*(_BYTE *)(v32 + 112) & 7) != 0 )
          {
            if ( v26 == 5 )
            {
              *(_BYTE *)(v32 + 112) = v25 & 0xF8 | 6;
            }
            else if ( v26 == 3 )
            {
              *((_BYTE *)v23 + 17) = 2;
            }
          }
          else
          {
            v30 = 1;
            *(_BYTE *)(v32 + 112) = v25 & 0xF8 | 2;
            *(_QWORD *)(v32 + 200) = MiniCompletionPacket;
            *(_QWORD *)(v32 + 976) = 0LL;
            *((_BYTE *)v23 + 17) = 0;
          }
        }
        *(_QWORD *)(v32 + 64) = 0LL;
        ++*((_BYTE *)v23 + 17);
        if ( v30 )
          break;
        if ( v22 == v14 )
          goto LABEL_33;
      }
      CurrentPrcb = v38;
      v19 = 0;
      *(_QWORD *)MiniCompletionPacket = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
    KiExitDispatcher((unsigned __int64)CurrentPrcb, a8 != 0 ? 3 : 0, 1u, v40, v39);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v19;
}
