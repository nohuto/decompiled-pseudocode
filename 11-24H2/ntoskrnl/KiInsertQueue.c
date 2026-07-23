/*
 * XREFs of KiInsertQueue @ 0x1402C55A0
 * Callers:
 *     EtwpQueueReply @ 0x1408320AC (EtwpQueueReply.c)
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
 */

__int64 __fastcall KiInsertQueue(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  char v4; // r15
  _QWORD *v5; // r12
  __int64 *v6; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // rbx
  _QWORD *p_Lock; // rcx
  bool v12; // di
  _QWORD *v13; // rdi
  _QWORD *v14; // rbp
  _QWORD *v15; // rax
  char v16; // cl
  int v17; // eax
  __int64 v18; // rdx
  char v19; // al
  __int64 v20; // rcx
  char v21; // r15
  unsigned int v22; // esi
  __int64 v23; // rbx
  int v24; // ecx
  __int64 *v25; // rax
  __int64 **v26; // rdx
  __int64 v27; // rax
  unsigned __int8 IsThreadRunning; // al
  __int64 v30; // rdx
  char v31; // [rsp+30h] [rbp-58h]
  unsigned int v32; // [rsp+90h] [rbp+8h]

  v4 = a4;
  v5 = (_QWORD *)(a1 + 8);
  v6 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v31 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, v6, IsThreadRunning);
  }
  p_Lock = &CurrentThread->Header.Lock;
  if ( CurrentThread[1].WaitBlock[1].Object )
    p_Lock = CurrentThread[1].WaitBlock[1].Object;
  v12 = (v4 & 5) != 0 && (*(_DWORD *)(p_Lock[68] + 136LL) & 0x2000) != 0;
  KiAcquireKobjectLockSafe(a1);
  v32 = *(_DWORD *)(a1 + 4);
  if ( (_QWORD *)*v5 != v5
    && (*(_DWORD *)(a1 + 40) < *(_DWORD *)(a1 + 44) || v12)
    && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)a1 || CurrentThread->WaitReason != 15) )
  {
    v13 = (_QWORD *)*v5;
    do
    {
      v14 = v13;
      v13 = (_QWORD *)*v13;
      if ( *((_BYTE *)v14 + 16) != 3 )
        break;
      v15 = (_QWORD *)v14[1];
      if ( (_QWORD *)v13[1] != v14 || (_QWORD *)*v15 != v14 )
        goto LABEL_17;
      *v15 = v13;
      v21 = 0;
      v13[1] = v15;
      v22 = 0;
      v23 = v14[3];
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 64), 0LL) )
      {
        do
        {
          if ( (++v22 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v22);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v23 + 64) );
      }
      if ( *(_BYTE *)(v23 + 388) == 5 )
      {
        v16 = *(_BYTE *)(v23 + 112);
        v17 = v16 & 7;
        if ( v17 == 1 || v17 == 4 )
        {
          v18 = *(_QWORD *)(v23 + 232);
          if ( v18 )
          {
            if ( (*(_BYTE *)v18 & 0x7F) == 0x15 )
            {
              v27 = (unsigned __int8)*(_DWORD *)(v23 + 540);
              *(_DWORD *)(v23 + 540) = v27;
              _InterlockedIncrement((volatile signed __int32 *)(v18 + 4 * v27 + 536));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v18 + 40));
            }
          }
          KiRemovePrcbWaitEntry(v23);
          v19 = *(_BYTE *)(v23 + 388);
          if ( v19 == 1 )
          {
            *(_DWORD *)(v23 + 116) |= 2u;
          }
          else if ( v19 == 5 )
          {
            v20 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v23 + 436));
            if ( *(_BYTE *)(v23 + 391) )
              *(_QWORD *)(v23 + 1000) += v20;
            else
              *(_QWORD *)(v23 + 992) += v20;
          }
          *(_BYTE *)(v23 + 388) = 7;
          *(_QWORD *)(v23 + 216) = CurrentPrcb->DeferredReadyListHead.Next;
          v21 = 1;
          CurrentPrcb->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v23 + 216);
          *(_QWORD *)(v23 + 200) = a2;
          *(_QWORD *)(v23 + 976) = 0LL;
        }
        else if ( (*(_BYTE *)(v23 + 112) & 7) != 0 )
        {
          if ( v17 == 5 )
          {
            *(_BYTE *)(v23 + 112) = v16 & 0xF8 | 6;
          }
          else if ( v17 == 3 )
          {
            *((_BYTE *)v14 + 17) = 2;
          }
        }
        else
        {
          v21 = 1;
          *(_BYTE *)(v23 + 112) = v16 & 0xF8 | 2;
          *(_QWORD *)(v23 + 200) = a2;
          *(_QWORD *)(v23 + 976) = 0LL;
          *((_BYTE *)v14 + 17) = 0;
        }
      }
      *(_QWORD *)(v23 + 64) = 0LL;
      ++*((_BYTE *)v14 + 17);
      if ( v21 )
      {
        v4 = a4;
        *a2 = 0LL;
        goto LABEL_50;
      }
    }
    while ( v13 != v5 );
    v6 = a2;
    v4 = a4;
  }
  v24 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = v24 + 1;
  v25 = (__int64 *)(a1 + 24);
  if ( (v4 & 2) != 0 )
  {
    v30 = *v25;
    if ( *(__int64 **)(*v25 + 8) == v25 )
    {
      *v6 = v30;
      v6[1] = (__int64)v25;
      *(_QWORD *)(v30 + 8) = v6;
      *v25 = (__int64)v6;
      goto LABEL_45;
    }
LABEL_17:
    __fastfail(3u);
  }
  v26 = *(__int64 ***)(a1 + 32);
  if ( *v26 != v25 )
    goto LABEL_17;
  *v6 = (__int64)v25;
  v6[1] = (__int64)v26;
  *v26 = v6;
  *(_QWORD *)(a1 + 32) = v6;
LABEL_45:
  if ( !v24 && (_QWORD *)*v5 != v5 )
    KiWakeOtherQueueWaiters(CurrentPrcb, a1);
LABEL_50:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (v4 & 1) == 0 && (v4 & 4) != 0 )
    KiCompleteDirectSwitchThread(CurrentPrcb);
  KiExitDispatcher(CurrentPrcb, v31);
  return v32;
}
