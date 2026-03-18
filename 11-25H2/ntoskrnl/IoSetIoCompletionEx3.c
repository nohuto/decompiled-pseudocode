/*
 * XREFs of IoSetIoCompletionEx3 @ 0x140282550
 * Callers:
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140304090 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExpShutdownWorkerFactory @ 0x14036EF50 (ExpShutdownWorkerFactory.c)
 * Callees:
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
  __int64 MiniCompletionPacket; // r14
  __int64 v13; // r15
  _QWORD *v14; // r13
  int v15; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 CurrentThread; // rbx
  __int64 v19; // rax
  bool v20; // di
  __int64 v21; // rcx
  _QWORD *v22; // rdi
  _QWORD *v23; // rbp
  _QWORD *v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  char v27; // al
  __int64 v28; // rcx
  char v29; // r12
  unsigned int v31; // esi
  __int64 v32; // rbx
  int v33; // ecx
  __int64 *v34; // rdx
  __int64 v35; // rax
  int v36; // ecx
  char IsThreadRunning; // al
  struct _KPRCB *v38; // [rsp+30h] [rbp-38h]
  char v39; // [rsp+38h] [rbp-30h]
  int v40; // [rsp+A0h] [rbp+38h]

  MiniCompletionPacket = a7;
  v13 = a1;
  if ( !a7 )
  {
    LOBYTE(a1) = 1;
    MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, a6);
    if ( !MiniCompletionPacket )
      return 3221225626LL;
  }
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
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  CurrentPrcb = KeGetCurrentPrcb();
  v38 = CurrentPrcb;
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning((__int64)CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, MiniCompletionPacket, IsThreadRunning);
  }
  if ( a9 )
  {
    if ( (*(_BYTE *)(v13 + 1) & 2) != 0 )
      v15 = 0;
    v40 = v15;
  }
  v19 = *(_QWORD *)(CurrentThread + 1616);
  if ( !v19 )
    v19 = CurrentThread;
  v20 = a8 && (*(_DWORD *)(*(_QWORD *)(v19 + 544) + 136LL) & 0x2000) != 0;
  KiAcquireKobjectLockSafe(v13);
  if ( (_QWORD *)*v14 != v14
    && (*(_DWORD *)(v13 + 40) < *(_DWORD *)(v13 + 44) || v20)
    && (*(_QWORD *)(CurrentThread + 232) != v13 || *(_BYTE *)(CurrentThread + 643) != 15) )
  {
    v22 = (_QWORD *)*v14;
    while ( 1 )
    {
      v23 = v22;
      v22 = (_QWORD *)*v22;
      if ( *((_BYTE *)v23 + 16) != 3 )
      {
LABEL_36:
        CurrentPrcb = v38;
        break;
      }
      v24 = (_QWORD *)v23[1];
      if ( (_QWORD *)v22[1] != v23 || (_QWORD *)*v24 != v23 )
        goto LABEL_22;
      *v24 = v22;
      v29 = 0;
      v22[1] = v24;
      v31 = 0;
      v32 = v23[3];
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 64), 0LL) )
      {
        do
        {
          if ( (++v31 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21) )
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
        v21 = *(unsigned __int8 *)(v32 + 112);
        v25 = *(_BYTE *)(v32 + 112) & 7;
        if ( v25 == 1 || v25 == 4 )
        {
          v26 = *(_QWORD *)(v32 + 232);
          if ( v26 )
          {
            if ( (*(_BYTE *)v26 & 0x7F) == 0x15 )
            {
              v35 = (unsigned __int8)*(_DWORD *)(v32 + 540);
              *(_DWORD *)(v32 + 540) = v35;
              _InterlockedIncrement((volatile signed __int32 *)(v26 + 4 * v35 + 536));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v26 + 40));
            }
          }
          KiRemovePrcbWaitEntry(v32);
          v27 = *(_BYTE *)(v32 + 388);
          if ( v27 == 1 )
          {
            *(_DWORD *)(v32 + 116) |= 2u;
          }
          else if ( v27 == 5 )
          {
            v28 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v32 + 436));
            if ( *(_BYTE *)(v32 + 391) )
              *(_QWORD *)(v32 + 1000) += v28;
            else
              *(_QWORD *)(v32 + 992) += v28;
          }
          v21 = v32 + 216;
          *(_BYTE *)(v32 + 388) = 7;
          *(_QWORD *)(v32 + 216) = v38->DeferredReadyListHead.Next;
          v38->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v32 + 216);
          *(_QWORD *)(v32 + 200) = MiniCompletionPacket;
          *(_QWORD *)(v32 + 976) = 0LL;
          goto LABEL_33;
        }
        if ( (*(_BYTE *)(v32 + 112) & 7) == 0 )
        {
          LOBYTE(v21) = v21 & 0xF8 | 2;
          *(_BYTE *)(v32 + 112) = v21;
          *(_QWORD *)(v32 + 200) = MiniCompletionPacket;
          *(_QWORD *)(v32 + 976) = 0LL;
          *((_BYTE *)v23 + 17) = 0;
LABEL_33:
          v29 = 1;
          goto LABEL_34;
        }
        if ( v25 == 5 )
        {
          LOBYTE(v21) = v21 & 0xF8 | 6;
          *(_BYTE *)(v32 + 112) = v21;
        }
        else if ( v25 == 3 )
        {
          *((_BYTE *)v23 + 17) = 2;
        }
      }
LABEL_34:
      *(_QWORD *)(v32 + 64) = 0LL;
      ++*((_BYTE *)v23 + 17);
      if ( v29 )
      {
        *(_QWORD *)MiniCompletionPacket = 0LL;
        goto LABEL_56;
      }
      if ( v22 == v14 )
        goto LABEL_36;
    }
  }
  v33 = *(_DWORD *)(v13 + 4);
  *(_DWORD *)(v13 + 4) = v33 + 1;
  v34 = *(__int64 **)(v13 + 32);
  if ( *v34 != v13 + 24 )
LABEL_22:
    __fastfail(3u);
  *(_QWORD *)MiniCompletionPacket = v13 + 24;
  *(_QWORD *)(MiniCompletionPacket + 8) = v34;
  *v34 = MiniCompletionPacket;
  *(_QWORD *)(v13 + 32) = MiniCompletionPacket;
  if ( !v33 && (_QWORD *)*v14 != v14 )
    KiWakeOtherQueueWaiters(CurrentPrcb, v13);
LABEL_56:
  _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
  if ( a8 )
    v36 = 3;
  else
    v36 = 0;
  KiExitDispatcher((_DWORD)v38, v36, 1, v40, v39);
  return 0LL;
}
