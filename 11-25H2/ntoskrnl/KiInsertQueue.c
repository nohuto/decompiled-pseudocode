/*
 * XREFs of KiInsertQueue @ 0x140285500
 * Callers:
 *     EtwpQueueReply @ 0x1409FB2D0 (EtwpQueueReply.c)
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
 */

__int64 __fastcall KiInsertQueue(__int64 a1, __int64 *a2, int a3, unsigned int a4)
{
  unsigned int v4; // r15d
  _QWORD *v5; // r12
  int v6; // edi
  __int64 *v7; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r13
  __int64 CurrentThread; // rbx
  int v12; // esi
  __int64 v13; // rcx
  bool v14; // di
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  _QWORD *v17; // rbp
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rcx
  char v23; // r15
  unsigned int v24; // esi
  __int64 v25; // rbx
  int v26; // ecx
  __int64 v27; // rax
  __int64 **v28; // rdx
  __int64 v29; // rax
  int v31; // r15d
  char IsThreadRunning; // al
  __int64 v33; // rdx
  char v34; // [rsp+30h] [rbp-58h]
  unsigned int v35; // [rsp+90h] [rbp+8h]
  int v37; // [rsp+A0h] [rbp+18h]

  v37 = a3;
  v4 = a4;
  v5 = (_QWORD *)(a1 + 8);
  v6 = a3;
  v7 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v34 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    IsThreadRunning = KeIsThreadRunning((__int64)CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, (__int64)v7, IsThreadRunning);
  }
  if ( v6 )
  {
    v12 = 0;
    if ( (*(_BYTE *)(a1 + 1) & 2) != 0 )
      v6 = 0;
    v37 = v6;
  }
  else
  {
    v12 = 0;
  }
  v13 = CurrentThread;
  if ( *(_QWORD *)(CurrentThread + 1616) )
    v13 = *(_QWORD *)(CurrentThread + 1616);
  v14 = (v4 & 5) != 0 && (*(_DWORD *)(*(_QWORD *)(v13 + 544) + 136LL) & 0x2000) != 0;
  KiAcquireKobjectLockSafe(a1);
  v35 = *(_DWORD *)(a1 + 4);
  if ( (_QWORD *)*v5 != v5
    && (*(_DWORD *)(a1 + 40) < *(_DWORD *)(a1 + 44) || v14)
    && (*(_QWORD *)(CurrentThread + 232) != a1 || *(_BYTE *)(CurrentThread + 643) != 15) )
  {
    v16 = (_QWORD *)*v5;
    do
    {
      v17 = v16;
      v16 = (_QWORD *)*v16;
      if ( *((_BYTE *)v17 + 16) != 3 )
        break;
      v18 = (_QWORD *)v17[1];
      if ( (_QWORD *)v16[1] != v17 || (_QWORD *)*v18 != v17 )
        goto LABEL_21;
      *v18 = v16;
      v23 = 0;
      v16[1] = v18;
      v24 = 0;
      v25 = v17[3];
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 64), 0LL) )
      {
        do
        {
          if ( (++v24 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15) )
          {
            HvlNotifyLongSpinWait(v24);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v25 + 64) );
      }
      if ( *(_BYTE *)(v25 + 388) == 5 )
      {
        v15 = *(unsigned __int8 *)(v25 + 112);
        v19 = *(_BYTE *)(v25 + 112) & 7;
        if ( v19 == 1 || v19 == 4 )
        {
          v20 = *(_QWORD *)(v25 + 232);
          if ( v20 )
          {
            if ( (*(_BYTE *)v20 & 0x7F) == 0x15 )
            {
              v29 = (unsigned __int8)*(_DWORD *)(v25 + 540);
              *(_DWORD *)(v25 + 540) = v29;
              _InterlockedIncrement((volatile signed __int32 *)(v20 + 4 * v29 + 536));
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v20 + 40));
            }
          }
          KiRemovePrcbWaitEntry(v25);
          v21 = *(_BYTE *)(v25 + 388);
          if ( v21 == 1 )
          {
            *(_DWORD *)(v25 + 116) |= 2u;
          }
          else if ( v21 == 5 )
          {
            v22 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v25 + 436));
            if ( *(_BYTE *)(v25 + 391) )
              *(_QWORD *)(v25 + 1000) += v22;
            else
              *(_QWORD *)(v25 + 992) += v22;
          }
          *(_BYTE *)(v25 + 388) = 7;
          v15 = v25 + 216;
          *(_QWORD *)(v25 + 216) = CurrentPrcb->DeferredReadyListHead.Next;
          v23 = 1;
          CurrentPrcb->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v25 + 216);
          *(_QWORD *)(v25 + 200) = a2;
          *(_QWORD *)(v25 + 976) = 0LL;
        }
        else if ( (*(_BYTE *)(v25 + 112) & 7) != 0 )
        {
          if ( v19 == 5 )
          {
            LOBYTE(v15) = v15 & 0xF8 | 6;
            *(_BYTE *)(v25 + 112) = v15;
          }
          else if ( v19 == 3 )
          {
            *((_BYTE *)v17 + 17) = 2;
          }
        }
        else
        {
          LOBYTE(v15) = v15 & 0xF8 | 2;
          v23 = 1;
          *(_BYTE *)(v25 + 112) = v15;
          *(_QWORD *)(v25 + 200) = a2;
          *(_QWORD *)(v25 + 976) = 0LL;
          *((_BYTE *)v17 + 17) = 0;
        }
      }
      *(_QWORD *)(v25 + 64) = 0LL;
      ++*((_BYTE *)v17 + 17);
      if ( v23 )
      {
        v12 = 0;
        v4 = a4;
        *a2 = 0LL;
        goto LABEL_58;
      }
    }
    while ( v16 != v5 );
    v7 = a2;
    v12 = 0;
    v4 = a4;
  }
  v26 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = v26 + 1;
  v27 = a1 + 24;
  if ( (v4 & 2) != 0 )
  {
    v33 = *(_QWORD *)v27;
    if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) == v27 )
    {
      *v7 = v33;
      v7[1] = v27;
      *(_QWORD *)(v33 + 8) = v7;
      *(_QWORD *)v27 = v7;
      goto LABEL_53;
    }
LABEL_21:
    __fastfail(3u);
  }
  v28 = *(__int64 ***)(a1 + 32);
  if ( *v28 != (__int64 *)v27 )
    goto LABEL_21;
  *v7 = v27;
  v7[1] = (__int64)v28;
  *v28 = v7;
  *(_QWORD *)(a1 + 32) = v7;
LABEL_53:
  if ( !v26 && (_QWORD *)*v5 != v5 )
    KiWakeOtherQueueWaiters((__int64)CurrentPrcb, a1);
LABEL_58:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (v4 & 1) != 0 )
  {
    v31 = ~(unsigned __int8)(v4 >> 2) & 2 | 1;
LABEL_63:
    v12 = v31;
    goto LABEL_60;
  }
  if ( (v4 & 4) != 0 )
  {
    KiCompleteDirectSwitchThread(CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
    v31 = ~(unsigned __int8)(v4 >> 2) & 2 | 4;
    goto LABEL_63;
  }
LABEL_60:
  KiExitDispatcher((_DWORD)CurrentPrcb, v12, 1, v37, v34);
  return v35;
}
