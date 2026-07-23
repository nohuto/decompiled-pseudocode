/*
 * XREFs of IoSetIoCompletionEx @ 0x1402C51B0
 * Callers:
 *     PspNotificationPacketCallback @ 0x14085BCC0 (PspNotificationPacketCallback.c)
 *     PspSendReliableJobNotification @ 0x140861974 (PspSendReliableJobNotification.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     NtSetIoCompletionEx @ 0x14098FD60 (NtSetIoCompletionEx.c)
 *     NtLockFile @ 0x1409C2A10 (NtLockFile.c)
 *     NtSetIoCompletion @ 0x1409C66A0 (NtSetIoCompletion.c)
 *     IoSetIoCompletion @ 0x1409E8CE0 (IoSetIoCompletion.c)
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
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // rbx
  _QWORD *v16; // rdi
  _QWORD *v17; // rbp
  _QWORD *v18; // rax
  char v19; // cl
  int v20; // eax
  __int64 v21; // rdx
  char v22; // al
  __int64 v23; // rcx
  char v24; // r13
  int v25; // edx
  unsigned int v26; // ebx
  __int64 *v27; // rcx
  unsigned int v28; // esi
  __int64 v29; // rbx
  __int64 v30; // rax
  unsigned __int8 IsThreadRunning; // al
  char v33; // [rsp+30h] [rbp-38h]
  struct _KPRCB *v34; // [rsp+A0h] [rbp+38h]

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
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v34 = CurrentPrcb;
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, MiniCompletionPacket, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe(v11);
    if ( (_QWORD *)*v12 == v12
      || *(_DWORD *)(v11 + 40) >= *(_DWORD *)(v11 + 44)
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v11 && CurrentThread->WaitReason == 15 )
    {
LABEL_27:
      v25 = *(_DWORD *)(v11 + 4);
      v26 = 0;
      *(_DWORD *)(v11 + 4) = v25 + 1;
      v27 = *(__int64 **)(v11 + 32);
      if ( *v27 != v11 + 24 )
LABEL_13:
        __fastfail(3u);
      *(_QWORD *)MiniCompletionPacket = v11 + 24;
      *(_QWORD *)(MiniCompletionPacket + 8) = v27;
      *v27 = MiniCompletionPacket;
      *(_QWORD *)(v11 + 32) = MiniCompletionPacket;
      if ( !v25 && (_QWORD *)*v12 != v12 )
        KiWakeOtherQueueWaiters(CurrentPrcb, v11);
    }
    else
    {
      v16 = (_QWORD *)*v12;
      while ( 1 )
      {
        v17 = v16;
        v16 = (_QWORD *)*v16;
        if ( *((_BYTE *)v17 + 16) != 3 )
        {
LABEL_26:
          CurrentPrcb = v34;
          goto LABEL_27;
        }
        v18 = (_QWORD *)v17[1];
        if ( (_QWORD *)v16[1] != v17 || (_QWORD *)*v18 != v17 )
          goto LABEL_13;
        *v18 = v16;
        v24 = 0;
        v16[1] = v18;
        v28 = 0;
        v29 = v17[3];
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 64), 0LL) )
        {
          do
          {
            if ( (++v28 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v28);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(v29 + 64) );
        }
        if ( *(_BYTE *)(v29 + 388) == 5 )
        {
          v19 = *(_BYTE *)(v29 + 112);
          v20 = v19 & 7;
          if ( v20 == 1 || v20 == 4 )
          {
            v21 = *(_QWORD *)(v29 + 232);
            if ( v21 )
            {
              if ( (*(_BYTE *)v21 & 0x7F) == 0x15 )
              {
                v30 = (unsigned __int8)*(_DWORD *)(v29 + 540);
                *(_DWORD *)(v29 + 540) = v30;
                _InterlockedIncrement((volatile signed __int32 *)(v21 + 4 * v30 + 536));
              }
              else
              {
                _InterlockedIncrement((volatile signed __int32 *)(v21 + 40));
              }
            }
            KiRemovePrcbWaitEntry(v29);
            v22 = *(_BYTE *)(v29 + 388);
            if ( v22 == 1 )
            {
              *(_DWORD *)(v29 + 116) |= 2u;
            }
            else if ( v22 == 5 )
            {
              v23 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v29 + 436));
              if ( *(_BYTE *)(v29 + 391) )
                *(_QWORD *)(v29 + 1000) += v23;
              else
                *(_QWORD *)(v29 + 992) += v23;
            }
            *(_BYTE *)(v29 + 388) = 7;
            v24 = 1;
            *(_QWORD *)(v29 + 216) = v34->DeferredReadyListHead.Next;
            v34->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v29 + 216);
            *(_QWORD *)(v29 + 200) = MiniCompletionPacket;
            *(_QWORD *)(v29 + 976) = 0LL;
          }
          else if ( (*(_BYTE *)(v29 + 112) & 7) != 0 )
          {
            if ( v20 == 5 )
            {
              *(_BYTE *)(v29 + 112) = v19 & 0xF8 | 6;
            }
            else if ( v20 == 3 )
            {
              *((_BYTE *)v17 + 17) = 2;
            }
          }
          else
          {
            v24 = 1;
            *(_BYTE *)(v29 + 112) = v19 & 0xF8 | 2;
            *(_QWORD *)(v29 + 200) = MiniCompletionPacket;
            *(_QWORD *)(v29 + 976) = 0LL;
            *((_BYTE *)v17 + 17) = 0;
          }
        }
        *(_QWORD *)(v29 + 64) = 0LL;
        ++*((_BYTE *)v17 + 17);
        if ( v24 )
          break;
        if ( v16 == v12 )
          goto LABEL_26;
      }
      CurrentPrcb = v34;
      v26 = 0;
      *(_QWORD *)MiniCompletionPacket = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
    KiExitDispatcher(CurrentPrcb, v33);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v26;
}
