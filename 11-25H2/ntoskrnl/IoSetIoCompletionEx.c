/*
 * XREFs of IoSetIoCompletionEx @ 0x140285150
 * Callers:
 *     PspNotificationPacketCallback @ 0x1408DB0C0 (PspNotificationPacketCallback.c)
 *     NtSetIoCompletionEx @ 0x1409A6630 (NtSetIoCompletionEx.c)
 *     PspSendReliableJobNotification @ 0x140A4F98C (PspSendReliableJobNotification.c)
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

__int64 __fastcall IoSetIoCompletionEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7)
{
  __int64 MiniCompletionPacket; // r14
  __int64 v11; // r15
  _QWORD *v12; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r13
  __int64 CurrentThread; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rdi
  _QWORD *v18; // rbp
  _QWORD *v19; // rax
  int v20; // edx
  unsigned int v21; // ebx
  __int64 *v22; // rcx
  unsigned int v23; // esi
  __int64 v24; // rbx
  char v25; // dl
  int v26; // eax
  __int64 v27; // rdx
  char v28; // al
  __int64 v29; // rcx
  __int64 v30; // rax
  char IsThreadRunning; // al
  char v33; // [rsp+30h] [rbp-38h]

  MiniCompletionPacket = a7;
  v11 = a1;
  if ( a7 || (LOBYTE(a1) = 1, (MiniCompletionPacket = IopAllocateMiniCompletionPacket(a1, a6)) != 0) )
  {
    v12 = (_QWORD *)(v11 + 8);
    *(_QWORD *)(MiniCompletionPacket + 48) = a5;
    *(_QWORD *)(MiniCompletionPacket + 24) = a2;
    *(_QWORD *)(MiniCompletionPacket + 32) = a3;
    *(_DWORD *)(MiniCompletionPacket + 40) = a4;
    CurrentIrql = KeGetCurrentIrql();
    v33 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning((__int64)CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, MiniCompletionPacket, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe(v11);
    if ( (_QWORD *)*v12 != v12
      && *(_DWORD *)(v11 + 40) < *(_DWORD *)(v11 + 44)
      && (*(_QWORD *)(CurrentThread + 232) != v11 || *(_BYTE *)(CurrentThread + 643) != 15) )
    {
      v17 = (_QWORD *)*v12;
      do
      {
        v18 = v17;
        v17 = (_QWORD *)*v17;
        if ( *((_BYTE *)v18 + 16) != 3 )
          break;
        v19 = (_QWORD *)v18[1];
        if ( (_QWORD *)v17[1] != v18 || (_QWORD *)*v19 != v18 )
          goto LABEL_13;
        *v19 = v17;
        v23 = 0;
        v17[1] = v19;
        v24 = v18[3];
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 64), 0LL) )
        {
          do
          {
            if ( (++v23 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v16) )
            {
              HvlNotifyLongSpinWait(v23);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v24 + 64) );
        }
        if ( *(_BYTE *)(v24 + 388) == 5 )
        {
          v16 = *(unsigned __int8 *)(v24 + 112);
          v25 = 0;
          v26 = *(_BYTE *)(v24 + 112) & 7;
          if ( v26 == 1 || v26 == 4 )
          {
            v27 = *(_QWORD *)(v24 + 232);
            if ( v27 )
            {
              if ( (*(_BYTE *)v27 & 0x7F) == 0x15 )
              {
                v30 = (unsigned __int8)*(_DWORD *)(v24 + 540);
                *(_DWORD *)(v24 + 540) = v30;
                _InterlockedIncrement((volatile signed __int32 *)(v27 + 4 * v30 + 536));
              }
              else
              {
                _InterlockedIncrement((volatile signed __int32 *)(v27 + 40));
              }
            }
            KiRemovePrcbWaitEntry(v24);
            v28 = *(_BYTE *)(v24 + 388);
            if ( v28 == 1 )
            {
              *(_DWORD *)(v24 + 116) |= 2u;
            }
            else if ( v28 == 5 )
            {
              v29 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v24 + 436));
              if ( *(_BYTE *)(v24 + 391) )
                *(_QWORD *)(v24 + 1000) += v29;
              else
                *(_QWORD *)(v24 + 992) += v29;
            }
            *(_BYTE *)(v24 + 388) = 7;
            v16 = v24 + 216;
            *(_QWORD *)(v24 + 216) = CurrentPrcb->DeferredReadyListHead.Next;
            v25 = 1;
            CurrentPrcb->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v24 + 216);
            *(_QWORD *)(v24 + 200) = MiniCompletionPacket;
            *(_QWORD *)(v24 + 976) = 0LL;
          }
          else if ( (*(_BYTE *)(v24 + 112) & 7) != 0 )
          {
            if ( v26 == 5 )
            {
              LOBYTE(v16) = v16 & 0xF8 | 6;
              *(_BYTE *)(v24 + 112) = v16;
            }
            else if ( v26 == 3 )
            {
              *((_BYTE *)v18 + 17) = 2;
            }
          }
          else
          {
            v25 = 1;
            LOBYTE(v16) = v16 & 0xF8 | 2;
            *(_BYTE *)(v24 + 112) = v16;
            *(_QWORD *)(v24 + 200) = MiniCompletionPacket;
            *(_QWORD *)(v24 + 976) = 0LL;
            *((_BYTE *)v18 + 17) = 0;
          }
        }
        else
        {
          v25 = 0;
        }
        *(_QWORD *)(v24 + 64) = 0LL;
        ++*((_BYTE *)v18 + 17);
        if ( v25 )
        {
          *(_QWORD *)MiniCompletionPacket = 0LL;
          v21 = 0;
          goto LABEL_46;
        }
      }
      while ( v17 != v12 );
    }
    v20 = *(_DWORD *)(v11 + 4);
    v21 = 0;
    *(_DWORD *)(v11 + 4) = v20 + 1;
    v22 = *(__int64 **)(v11 + 32);
    if ( *v22 != v11 + 24 )
LABEL_13:
      __fastfail(3u);
    *(_QWORD *)MiniCompletionPacket = v11 + 24;
    *(_QWORD *)(MiniCompletionPacket + 8) = v22;
    *v22 = MiniCompletionPacket;
    *(_QWORD *)(v11 + 32) = MiniCompletionPacket;
    if ( !v20 && (_QWORD *)*v12 != v12 )
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v11);
LABEL_46:
    _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
    KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, v33);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v21;
}
