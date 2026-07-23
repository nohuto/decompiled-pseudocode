/*
 * XREFs of KeInsertQueueEx @ 0x1403AC260
 * Callers:
 *     IopCompleteRequest @ 0x1402D51F0 (IopCompleteRequest.c)
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
 */

__int64 __fastcall KeInsertQueueEx(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v3; // edi
  _QWORD *v4; // r15
  _QWORD *v5; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // rbx
  _QWORD *v10; // rdi
  _QWORD *v11; // rbp
  _QWORD *v12; // rax
  char v13; // cl
  int v14; // eax
  __int64 v15; // rdx
  char v16; // al
  __int64 v17; // rcx
  char v18; // r12
  int v19; // edx
  _QWORD *v20; // rcx
  unsigned int v21; // esi
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned __int8 IsThreadRunning; // al
  unsigned __int8 v26; // [rsp+80h] [rbp+8h]
  unsigned int v28; // [rsp+90h] [rbp+18h]
  unsigned int v29; // [rsp+98h] [rbp+20h]

  v28 = a3;
  v3 = a3;
  v4 = (_QWORD *)(a1 + 8);
  v5 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v26 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, v5, IsThreadRunning);
  }
  if ( v3 )
  {
    if ( (*(_BYTE *)(a1 + 1) & 2) != 0 )
      v3 = 0;
    v28 = v3;
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1);
  v29 = *(_DWORD *)(a1 + 4);
  if ( (_QWORD *)*v4 != v4
    && *(_DWORD *)(a1 + 40) < *(_DWORD *)(a1 + 44)
    && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)a1 || CurrentThread->WaitReason != 15) )
  {
    v10 = (_QWORD *)*v4;
    while ( 1 )
    {
      v11 = v10;
      v10 = (_QWORD *)*v10;
      if ( *((_BYTE *)v11 + 16) != 3 )
      {
LABEL_27:
        v5 = a2;
        v3 = v28;
        break;
      }
      v12 = (_QWORD *)v11[1];
      if ( (_QWORD *)v10[1] != v11 || (_QWORD *)*v12 != v11 )
        goto LABEL_13;
      *v12 = v10;
      v18 = 0;
      v10[1] = v12;
      v21 = 0;
      v22 = v11[3];
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 64), 0LL) )
      {
        do
        {
          if ( (++v21 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v21);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v22 + 64) );
      }
      if ( *(_BYTE *)(v22 + 388) == 5 )
      {
        v13 = *(_BYTE *)(v22 + 112);
        v14 = v13 & 7;
        if ( v14 == 1 || v14 == 4 )
        {
          v15 = *(_QWORD *)(v22 + 232);
          if ( v15 )
          {
            if ( (*(_BYTE *)v15 & 0x7F) == 0x15 )
            {
              v23 = (unsigned __int8)*(_DWORD *)(v22 + 540);
              *(_DWORD *)(v22 + 540) = v23;
              _InterlockedIncrement((volatile signed __int32 *)(v15 + 4 * v23 + 536));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v15 + 40));
            }
          }
          KiRemovePrcbWaitEntry((_QWORD *)v22);
          v16 = *(_BYTE *)(v22 + 388);
          if ( v16 == 1 )
          {
            *(_DWORD *)(v22 + 116) |= 2u;
          }
          else if ( v16 == 5 )
          {
            v17 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v22 + 436));
            if ( *(_BYTE *)(v22 + 391) )
              *(_QWORD *)(v22 + 1000) += v17;
            else
              *(_QWORD *)(v22 + 992) += v17;
          }
          *(_BYTE *)(v22 + 388) = 7;
          *(_QWORD *)(v22 + 216) = CurrentPrcb->DeferredReadyListHead.Next;
          CurrentPrcb->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v22 + 216);
          *(_QWORD *)(v22 + 200) = a2;
          *(_QWORD *)(v22 + 976) = 0LL;
          goto LABEL_24;
        }
        if ( (*(_BYTE *)(v22 + 112) & 7) == 0 )
        {
          *(_BYTE *)(v22 + 112) = v13 & 0xF8 | 2;
          *(_QWORD *)(v22 + 200) = a2;
          *(_QWORD *)(v22 + 976) = 0LL;
          *((_BYTE *)v11 + 17) = 0;
LABEL_24:
          v18 = 1;
          goto LABEL_25;
        }
        if ( v14 == 5 )
        {
          *(_BYTE *)(v22 + 112) = v13 & 0xF8 | 6;
        }
        else if ( v14 == 3 )
        {
          *((_BYTE *)v11 + 17) = 2;
        }
      }
LABEL_25:
      *(_QWORD *)(v22 + 64) = 0LL;
      ++*((_BYTE *)v11 + 17);
      if ( v18 )
      {
        v3 = v28;
        *a2 = 0LL;
        goto LABEL_44;
      }
      if ( v10 == v4 )
        goto LABEL_27;
    }
  }
  v19 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = v19 + 1;
  v20 = *(_QWORD **)(a1 + 32);
  if ( *v20 != a1 + 24 )
LABEL_13:
    __fastfail(3u);
  *v5 = a1 + 24;
  v5[1] = v20;
  *v20 = v5;
  *(_QWORD *)(a1 + 32) = v5;
  if ( !v19 && (_QWORD *)*v4 != v4 )
    KiWakeOtherQueueWaiters(CurrentPrcb, a1);
LABEL_44:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, v3, v26);
  return v29;
}
