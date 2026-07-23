/*
 * XREFs of AlpcpSignal @ 0x1402C46F0
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x140846380 (NtAlpcSendWaitReceivePort.c)
 *     NtReplyWaitReceivePortEx @ 0x14089D590 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemovePrcbWaitEntry @ 0x1402C5A30 (KiRemovePrcbWaitEntry.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCompleteDirectSwitchThread @ 0x1403ABAF4 (KiCompleteDirectSwitchThread.c)
 *     AlpcpQueueIoCompletion @ 0x1403AC630 (AlpcpQueueIoCompletion.c)
 *     KiWakeOtherQueueWaiters @ 0x1403ACF00 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1403AD158 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1403AD184 (EtwTraceEnqueueWork.c)
 *     AlpcpReleaseDirectAttribute @ 0x140463550 (AlpcpReleaseDirectAttribute.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IopAllocateMiniCompletionPacket @ 0x1409C52D0 (IopAllocateMiniCompletionPacket.c)
 */

__int64 __fastcall AlpcpSignal(__int64 a1, BOOLEAN a2, unsigned __int8 a3)
{
  _QWORD *v3; // rdi
  __int64 v6; // rbx
  char v7; // r15
  __int64 v8; // r13
  int v9; // r12d
  unsigned __int8 CurrentIrql; // bp
  __int64 v11; // rdx
  unsigned int v12; // edx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // r14
  int v18; // ebp
  _QWORD *v19; // r12
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // rsi
  _KTHREAD *CurrentThread; // rbx
  _QWORD *Object; // rax
  bool v24; // di
  _QWORD *v25; // rdi
  _QWORD *v26; // rbp
  _QWORD *v27; // rax
  __int64 result; // rax
  unsigned __int64 v29; // rcx
  struct _KPRCB *v30; // rbx
  __int64 v31; // rdi
  unsigned __int8 v32; // r15
  struct _KPRCB *v33; // r14
  int v34; // eax
  int v35; // ecx
  _QWORD *v36; // rbx
  _QWORD *v37; // rcx
  _QWORD *v38; // rax
  _QWORD *v39; // rdx
  char v40; // cl
  __int64 v41; // rbx
  unsigned __int8 v42; // r15
  struct _KPRCB *v43; // rbp
  int v44; // eax
  int v45; // ecx
  _QWORD *v46; // rdi
  _QWORD *v47; // rcx
  _QWORD *v48; // rax
  _QWORD *v49; // rdx
  char v50; // cl
  char v51; // cl
  char v52; // dl
  int v53; // eax
  __int64 v54; // rdx
  char v55; // al
  __int64 v56; // rcx
  unsigned int v57; // esi
  __int64 v58; // rbx
  int v59; // ecx
  __int64 *v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rbx
  unsigned __int8 v63; // bp
  struct _KPRCB *v64; // rsi
  int v65; // eax
  int v66; // ecx
  _QWORD *v67; // rdi
  _QWORD *v68; // rcx
  _QWORD *v69; // rax
  _QWORD *v70; // rdx
  char v71; // cl
  unsigned __int8 IsThreadRunning; // al
  struct _KPRCB *v73; // [rsp+38h] [rbp-60h]
  char v74; // [rsp+40h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  __int64 v76; // [rsp+A0h] [rbp+8h]
  char v77; // [rsp+B8h] [rbp+20h]

  v3 = *(_QWORD **)(a1 + 32);
  if ( v3 )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      v6 = v3[6];
      v7 = *(_BYTE *)(a1 + 59);
      v8 = v3[4];
      v9 = a3;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v6;
      LockHandle.LockQueue.Next = 0LL;
      *(_QWORD *)&LockHandle.OldIrql = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags != LOBYTE(LockHandle.LockQueue.Next) )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      LockHandle.OldIrql = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v11 = _InterlockedExchange64((volatile __int64 *)v6, (__int64)&LockHandle);
        if ( v11 )
          KxWaitForLockOwnerShip(&LockHandle, v11);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v6);
      }
      v12 = *(_DWORD *)(v6 + 12);
      if ( v12 >= *(_DWORD *)(v6 + 8) )
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( !(unsigned int)AlpcpQueueIoCompletion(v8, v3[5], -(v7 != 0), 0, 0, v9) )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v6, &LockHandle);
          if ( v7 )
            ++*(_DWORD *)(v6 + 20);
          else
            ++*(_DWORD *)(v6 + 16);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        if ( _InterlockedCompareExchange64(v3 + 44, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v3 + 44);
        return KeAbPostRelease((ULONG_PTR)(v3 + 44));
      }
      else
      {
        v13 = *(_QWORD **)(v6 + 32);
        if ( v13 )
          *(_QWORD *)(v6 + 32) = *v13;
        v76 = v13[1];
        *(_DWORD *)(v6 + 12) = v12 + 1;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( _InterlockedCompareExchange64(v3 + 44, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v3 + 44);
        KeAbPostRelease((ULONG_PTR)(v3 + 44));
        v15 = v3[5];
        v16 = a2 == 0;
        v17 = v76;
        v18 = !v16 | 4;
        if ( !v9 )
          v18 = !v16;
        v77 = v18;
        if ( v76 || (LOBYTE(v14) = 1, result = IopAllocateMiniCompletionPacket(v14, 0LL), (v17 = result) != 0) )
        {
          *(_QWORD *)(v17 + 24) = v15;
          v19 = (_QWORD *)(v8 + 8);
          *(_QWORD *)(v17 + 32) = -(__int64)(v7 != 0);
          *(_DWORD *)(v17 + 40) = 0;
          *(_QWORD *)(v17 + 48) = 0LL;
          v20 = KeGetCurrentIrql();
          v74 = v20;
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(v20, 2LL);
          CurrentPrcb = KeGetCurrentPrcb();
          v73 = CurrentPrcb;
          CurrentThread = CurrentPrcb->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v17, IsThreadRunning);
          }
          Object = CurrentThread[1].WaitBlock[1].Object;
          if ( !Object )
            Object = &CurrentThread->Header.Lock;
          v24 = v18 && (*(_DWORD *)(Object[68] + 136LL) & 0x2000) != 0;
          KiAcquireKobjectLockSafe(v8);
          if ( (_QWORD *)*v19 != v19
            && (*(_DWORD *)(v8 + 40) < *(_DWORD *)(v8 + 44) || v24)
            && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v8 || CurrentThread->WaitReason != 15) )
          {
            v25 = (_QWORD *)*v19;
            do
            {
              v26 = v25;
              v25 = (_QWORD *)*v25;
              if ( *((_BYTE *)v26 + 16) != 3 )
                break;
              v27 = (_QWORD *)v26[1];
              if ( (_QWORD *)v25[1] != v26 || (_QWORD *)*v27 != v26 )
                goto LABEL_32;
              *v27 = v25;
              v57 = 0;
              v25[1] = v27;
              v58 = v26[3];
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v58 + 64), 0LL) )
              {
                do
                {
                  if ( (++v57 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v57);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(_QWORD *)(v58 + 64) );
              }
              if ( *(_BYTE *)(v58 + 388) == 5 )
              {
                v51 = *(_BYTE *)(v58 + 112);
                v52 = 0;
                v53 = v51 & 7;
                if ( v53 == 1 || v53 == 4 )
                {
                  v54 = *(_QWORD *)(v58 + 232);
                  if ( v54 )
                  {
                    if ( (*(_BYTE *)v54 & 0x7F) == 0x15 )
                    {
                      v61 = (unsigned __int8)*(_DWORD *)(v58 + 540);
                      *(_DWORD *)(v58 + 540) = v61;
                      _InterlockedIncrement((volatile signed __int32 *)(v54 + 4 * v61 + 536));
                    }
                    else
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(v54 + 40));
                    }
                  }
                  KiRemovePrcbWaitEntry(v58);
                  v55 = *(_BYTE *)(v58 + 388);
                  if ( v55 == 1 )
                  {
                    *(_DWORD *)(v58 + 116) |= 2u;
                  }
                  else if ( v55 == 5 )
                  {
                    v56 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v58 + 436));
                    if ( *(_BYTE *)(v58 + 391) )
                      *(_QWORD *)(v58 + 1000) += v56;
                    else
                      *(_QWORD *)(v58 + 992) += v56;
                  }
                  *(_BYTE *)(v58 + 388) = 7;
                  *(_QWORD *)(v58 + 216) = v73->DeferredReadyListHead.Next;
                  v73->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v58 + 216);
                  v52 = 1;
                  *(_QWORD *)(v58 + 200) = v17;
                  *(_QWORD *)(v58 + 976) = 0LL;
                }
                else if ( (*(_BYTE *)(v58 + 112) & 7) != 0 )
                {
                  if ( v53 == 5 )
                  {
                    *(_BYTE *)(v58 + 112) = v51 & 0xF8 | 6;
                  }
                  else if ( v53 == 3 )
                  {
                    *((_BYTE *)v26 + 17) = 2;
                  }
                }
                else
                {
                  v52 = 1;
                  *(_BYTE *)(v58 + 112) = v51 & 0xF8 | 2;
                  *(_QWORD *)(v58 + 200) = v17;
                  *(_QWORD *)(v58 + 976) = 0LL;
                  *((_BYTE *)v26 + 17) = 0;
                }
              }
              else
              {
                v52 = 0;
              }
              *(_QWORD *)(v58 + 64) = 0LL;
              ++*((_BYTE *)v26 + 17);
              if ( v52 )
              {
                LOBYTE(v18) = v77;
                *(_QWORD *)v17 = 0LL;
                goto LABEL_39;
              }
            }
            while ( v25 != v19 );
            CurrentPrcb = v73;
            LOBYTE(v18) = v77;
          }
          v59 = *(_DWORD *)(v8 + 4);
          *(_DWORD *)(v8 + 4) = v59 + 1;
          v60 = *(__int64 **)(v8 + 32);
          if ( *v60 != v8 + 24 )
LABEL_32:
            __fastfail(3u);
          *(_QWORD *)v17 = v8 + 24;
          *(_QWORD *)(v17 + 8) = v60;
          *v60 = v17;
          *(_QWORD *)(v8 + 32) = v17;
          if ( !v59 && (_QWORD *)*v19 != v19 )
            KiWakeOtherQueueWaiters(CurrentPrcb, v8);
LABEL_39:
          _InterlockedAnd((volatile signed __int32 *)v8, 0xFFFFFF7F);
          if ( (v18 & 1) == 0 && (v18 & 4) != 0 )
          {
            v30 = v73;
            KiCompleteDirectSwitchThread(v73);
          }
          else
          {
            v30 = v73;
          }
          return KiExitDispatcher(v30, v74);
        }
      }
    }
    else
    {
      v41 = v3[31];
      v42 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v42, 2LL);
      v43 = KeGetCurrentPrcb();
      KiAcquireKobjectLockSafe(v41);
      v44 = *(_DWORD *)(v41 + 4);
      v45 = v44 + 1;
      if ( v44 + 1 <= v44 || v45 > *(_DWORD *)(v41 + 24) )
      {
        _InterlockedAnd((volatile signed __int32 *)v41, 0xFFFFFF7F);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v42);
        __writecr8(v42);
        RtlRaiseStatus(-1073741753);
      }
      *(_DWORD *)(v41 + 4) = v45;
      if ( !v44 )
      {
        v46 = *(_QWORD **)(v41 + 8);
        while ( v46 != (_QWORD *)(v41 + 8) )
        {
          v47 = (_QWORD *)*v46;
          v48 = v46;
          v46 = v47;
          v49 = (_QWORD *)v48[1];
          if ( (_QWORD *)v47[1] != v48 || (_QWORD *)*v49 != v48 )
            goto LABEL_32;
          *v49 = v47;
          v47[1] = v49;
          v50 = *((_BYTE *)v48 + 16);
          switch ( v50 )
          {
            case 1:
              if ( (unsigned __int8)KiTryUnwaitThread(v43, v48, *((unsigned __int16 *)v48 + 9), 0LL) )
              {
                v16 = (*(_DWORD *)(v41 + 4))-- == 1;
                if ( v16 )
                  goto LABEL_72;
              }
              break;
            case 2:
              *((_BYTE *)v48 + 17) = 5;
              KiInsertQueueInternal(v48[3], v48);
              v16 = (*(_DWORD *)(v41 + 4))-- == 1;
              if ( v16 )
                goto LABEL_72;
              break;
            case 4:
              *((_BYTE *)v48 + 17) = 5;
              *(_DWORD *)(v41 + 4) = 0;
              KeInsertQueueDpc((PRKDPC)v48[3], (PVOID)v41, v48);
              break;
            default:
              KiTryUnwaitThread(v43, v48, 256LL, 0LL);
              break;
          }
        }
      }
LABEL_72:
      _InterlockedAnd((volatile signed __int32 *)v41, 0xFFFFFF7F);
      return KiExitDispatcher(v43, v42);
    }
  }
  else
  {
    result = *(_QWORD *)(a1 + 24);
    if ( result )
    {
      if ( a2 )
      {
        v31 = result + 1304;
        v32 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v32, 2LL);
        v33 = KeGetCurrentPrcb();
        KiAcquireKobjectLockSafe(v31);
        v34 = *(_DWORD *)(v31 + 4);
        v35 = v34 + 1;
        if ( v34 + 1 <= v34 || v35 > *(_DWORD *)(v31 + 24) )
        {
          _InterlockedAnd((volatile signed __int32 *)v31, 0xFFFFFF7F);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v32);
          result = v32;
          __writecr8(v32);
        }
        else
        {
          *(_DWORD *)(v31 + 4) = v35;
          if ( !v34 )
          {
            v36 = *(_QWORD **)(v31 + 8);
            while ( v36 != (_QWORD *)(v31 + 8) )
            {
              v37 = (_QWORD *)*v36;
              v38 = v36;
              v36 = v37;
              v39 = (_QWORD *)v38[1];
              if ( (_QWORD *)v37[1] != v38 || (_QWORD *)*v39 != v38 )
                goto LABEL_32;
              *v39 = v37;
              v37[1] = v39;
              v40 = *((_BYTE *)v38 + 16);
              switch ( v40 )
              {
                case 1:
                  if ( (unsigned __int8)KiTryUnwaitThread(v33, v38, *((unsigned __int16 *)v38 + 9), 0LL) )
                  {
                    v16 = (*(_DWORD *)(v31 + 4))-- == 1;
                    if ( v16 )
                      goto LABEL_59;
                  }
                  break;
                case 2:
                  *((_BYTE *)v38 + 17) = 5;
                  KiInsertQueueInternal(v38[3], v38);
                  v16 = (*(_DWORD *)(v31 + 4))-- == 1;
                  if ( v16 )
                    goto LABEL_59;
                  break;
                case 4:
                  *((_BYTE *)v38 + 17) = 5;
                  *(_DWORD *)(v31 + 4) = 0;
                  KeInsertQueueDpc((PRKDPC)v38[3], (PVOID)v31, v38);
                  break;
                default:
                  KiTryUnwaitThread(v33, v38, 256LL, 0LL);
                  break;
              }
            }
          }
LABEL_59:
          _InterlockedAnd((volatile signed __int32 *)v31, 0xFFFFFF7F);
          return KiExitDispatcher(v33, v32);
        }
      }
      else
      {
        v62 = result + 1304;
        v63 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(v63, 2LL);
        v64 = KeGetCurrentPrcb();
        KiAcquireKobjectLockSafe(v62);
        v65 = *(_DWORD *)(v62 + 4);
        v66 = v65 + 1;
        if ( v65 + 1 <= v65 || v66 > *(_DWORD *)(v62 + 24) )
        {
          _InterlockedAnd((volatile signed __int32 *)v62, 0xFFFFFF7F);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v63);
          result = v63;
          __writecr8(v63);
        }
        else
        {
          *(_DWORD *)(v62 + 4) = v66;
          if ( !v65 )
          {
            v67 = *(_QWORD **)(v62 + 8);
            while ( v67 != (_QWORD *)(v62 + 8) )
            {
              v68 = (_QWORD *)*v67;
              v69 = v67;
              v67 = v68;
              v70 = (_QWORD *)v69[1];
              if ( (_QWORD *)v68[1] != v69 || (_QWORD *)*v70 != v69 )
                goto LABEL_32;
              *v70 = v68;
              v68[1] = v70;
              v71 = *((_BYTE *)v69 + 16);
              switch ( v71 )
              {
                case 1:
                  if ( (unsigned __int8)KiTryUnwaitThread(v64, v69, *((unsigned __int16 *)v69 + 9), 0LL) )
                  {
                    v16 = (*(_DWORD *)(v62 + 4))-- == 1;
                    if ( v16 )
                      goto LABEL_117;
                  }
                  break;
                case 2:
                  *((_BYTE *)v69 + 17) = 5;
                  KiInsertQueueInternal(v69[3], v69);
                  v16 = (*(_DWORD *)(v62 + 4))-- == 1;
                  if ( v16 )
                    goto LABEL_117;
                  break;
                case 4:
                  *((_BYTE *)v69 + 17) = 5;
                  *(_DWORD *)(v62 + 4) = 0;
                  KeInsertQueueDpc((PRKDPC)v69[3], (PVOID)v62, v69);
                  break;
                default:
                  KiTryUnwaitThread(v64, v69, 256LL, 0LL);
                  break;
              }
            }
          }
LABEL_117:
          _InterlockedAnd((volatile signed __int32 *)v62, 0xFFFFFF7F);
          KiCompleteDirectSwitchThread(v64);
          return KiExitDispatcher(v64, v63);
        }
      }
    }
    else
    {
      v29 = *(_QWORD *)(a1 + 40);
      if ( (v29 & 1) != 0 )
      {
        if ( v29 >= 4 )
        {
          KeSetEvent((PRKEVENT)(v29 & 0xFFFFFFFFFFFFFFFCuLL), 0, a2);
          result = AlpcpReleaseDirectAttribute(*(_QWORD *)(a1 + 40));
        }
        *(_QWORD *)(a1 + 40) = 0LL;
      }
    }
  }
  return result;
}
