/*
 * XREFs of KeInsertQueueEx @ 0x140281900
 * Callers:
 *     IopCompleteRequest @ 0x14029FD20 (IopCompleteRequest.c)
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
 */

__int64 __fastcall KeInsertQueueEx(__int64 a1, _QWORD *a2, int a3)
{
  int v3; // edi
  _QWORD *v4; // r15
  _QWORD *v5; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r13
  __int64 CurrentThread; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  _QWORD *v12; // rbp
  _QWORD *v13; // rax
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
  char IsThreadRunning; // al
  char v26; // [rsp+80h] [rbp+8h]
  int v28; // [rsp+90h] [rbp+18h]
  unsigned int v29; // [rsp+98h] [rbp+20h]

  v28 = a3;
  v3 = a3;
  v4 = (_QWORD *)(a1 + 8);
  v5 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v26 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning((__int64)CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, (__int64)v5, IsThreadRunning);
  }
  if ( v3 )
  {
    if ( (*(_BYTE *)(a1 + 1) & 2) != 0 )
      v3 = 0;
    v28 = v3;
  }
  KiAcquireKobjectLockSafe(a1);
  v29 = *(_DWORD *)(a1 + 4);
  if ( (_QWORD *)*v4 != v4
    && *(_DWORD *)(a1 + 40) < *(_DWORD *)(a1 + 44)
    && (*(_QWORD *)(CurrentThread + 232) != a1 || *(_BYTE *)(CurrentThread + 643) != 15) )
  {
    v11 = (_QWORD *)*v4;
    while ( 1 )
    {
      v12 = v11;
      v11 = (_QWORD *)*v11;
      if ( *((_BYTE *)v12 + 16) != 3 )
      {
LABEL_30:
        v5 = a2;
        v3 = v28;
        break;
      }
      v13 = (_QWORD *)v12[1];
      if ( (_QWORD *)v11[1] != v12 || (_QWORD *)*v13 != v12 )
        goto LABEL_16;
      *v13 = v11;
      v18 = 0;
      v11[1] = v13;
      v21 = 0;
      v22 = v12[3];
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 64), 0LL) )
      {
        do
        {
          if ( (++v21 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10) )
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
        v10 = *(unsigned __int8 *)(v22 + 112);
        v14 = *(_BYTE *)(v22 + 112) & 7;
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
          KiRemovePrcbWaitEntry(v22);
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
          v10 = v22 + 216;
          *(_QWORD *)(v22 + 216) = CurrentPrcb->DeferredReadyListHead.Next;
          CurrentPrcb->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v22 + 216);
          *(_QWORD *)(v22 + 200) = a2;
          *(_QWORD *)(v22 + 976) = 0LL;
          goto LABEL_27;
        }
        if ( (*(_BYTE *)(v22 + 112) & 7) == 0 )
        {
          LOBYTE(v10) = v10 & 0xF8 | 2;
          *(_BYTE *)(v22 + 112) = v10;
          *(_QWORD *)(v22 + 200) = a2;
          *(_QWORD *)(v22 + 976) = 0LL;
          *((_BYTE *)v12 + 17) = 0;
LABEL_27:
          v18 = 1;
          goto LABEL_28;
        }
        if ( v14 == 5 )
        {
          LOBYTE(v10) = v10 & 0xF8 | 6;
          *(_BYTE *)(v22 + 112) = v10;
        }
        else if ( v14 == 3 )
        {
          *((_BYTE *)v12 + 17) = 2;
        }
      }
LABEL_28:
      *(_QWORD *)(v22 + 64) = 0LL;
      ++*((_BYTE *)v12 + 17);
      if ( v18 )
      {
        v3 = v28;
        *a2 = 0LL;
        goto LABEL_47;
      }
      if ( v11 == v4 )
        goto LABEL_30;
    }
  }
  v19 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = v19 + 1;
  v20 = *(_QWORD **)(a1 + 32);
  if ( *v20 != a1 + 24 )
LABEL_16:
    __fastfail(3u);
  *v5 = a1 + 24;
  v5[1] = v20;
  *v20 = v5;
  *(_QWORD *)(a1 + 32) = v5;
  if ( !v19 && (_QWORD *)*v4 != v4 )
    KiWakeOtherQueueWaiters(CurrentPrcb, a1);
LABEL_47:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, v3, v26);
  return v29;
}
