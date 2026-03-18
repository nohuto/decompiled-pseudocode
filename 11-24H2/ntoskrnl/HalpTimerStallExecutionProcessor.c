/*
 * XREFs of HalpTimerStallExecutionProcessor @ 0x14033B670
 * Callers:
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 *     HalpTimerMeasureFrequencies @ 0x140547C90 (HalpTimerMeasureFrequencies.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCheckForThreadDispatch @ 0x14031D21C (KiCheckForThreadDispatch.c)
 *     KiDeferredReadySingleThread @ 0x14031ED40 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x14031FCD0 (KiFlushSoftwareInterruptBatch.c)
 *     KiSetSystemAffinityThread @ 0x1403398F4 (KiSetSystemAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     HalpTscQueryCounterOrdered @ 0x14033A470 (HalpTscQueryCounterOrdered.c)
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     KeFirstGroupAffinityEx @ 0x14045A8C0 (KeFirstGroupAffinityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405C0050 (KiCpuPartitionCheckAffinitization.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpTimerStallExecutionProcessor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned int v5; // edi
  char v7; // r14
  unsigned int Number; // eax
  unsigned int v10; // ecx
  char v11; // bp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _KTHREAD *CurrentThread; // rbx
  __int64 v15; // rcx
  __int64 CounterOrdered; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  __int64 v20; // r12
  unsigned __int64 v21; // rsi
  __int64 v22; // rbx
  unsigned int v23; // edi
  bool v24; // bp
  __int64 v25; // rdx
  unsigned __int64 v26; // r15
  __int64 InternalData; // rcx
  __int64 v28; // r9
  __int64 (__fastcall *v29)(__int64, __int64); // rax
  unsigned __int64 v30; // rax
  unsigned int j; // eax
  int v32; // ecx
  int MiscFlags; // eax
  __int64 *v34; // rdi
  char v35; // bl
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  _KAFFINITY_EX *Affinity; // r8
  unsigned __int16 i; // cx
  unsigned __int64 v39; // rdx
  char v40; // [rsp+30h] [rbp-98h]
  char v41; // [rsp+31h] [rbp-97h]
  __int64 v42; // [rsp+38h] [rbp-90h] BYREF
  __int128 v43; // [rsp+40h] [rbp-88h] BYREF
  int v44; // [rsp+50h] [rbp-78h]
  __int64 v45; // [rsp+58h] [rbp-70h]
  struct _GROUP_AFFINITY v46; // [rsp+60h] [rbp-68h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+70h] [rbp-58h] BYREF
  int v48; // [rsp+C0h] [rbp-8h]

  v4 = *(_DWORD *)(a1 + 224);
  v5 = 0;
  v7 = a3;
  v41 = a3;
  v40 = 0;
  v43 = 0LL;
  PreviousAffinity = 0LL;
  if ( (v4 & 1) == 0
    || (unsigned int)KeNumberProcessors_0 < 2
    || KeGetCurrentIrql() >= 2u
    || (v48 & 0x200) == 0
    || (*(_DWORD *)(a1 + 184) & 0x20) != 0 )
  {
    goto LABEL_19;
  }
  Number = KeGetPcr()->Prcb.Number;
  *(_DWORD *)((char *)&v43 + 10) = 0;
  HIWORD(v43) = 0;
  v40 = 1;
  v10 = *((_DWORD *)KiGlobalState + Number);
  DWORD2(v43) = (unsigned __int16)(v10 >> 6);
  *(_QWORD *)&v43 = 1LL << (v10 & 0x3F);
  v46 = 0LL;
  if ( WORD4(v43) < KeActiveProcessors.Count
    && (KeActiveProcessors.Bitmap[WORD4(v43)] & (unsigned __int64)v43) != 0
    && !(HIWORD(v43) | (unsigned __int16)(WORD6(v43) | WORD5(v43))) )
  {
    v11 = 1;
    *(_QWORD *)&v43 = KeActiveProcessors.Bitmap[WORD4(v43)] & v43;
  }
  else
  {
    v11 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v5);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( CurrentThread->ThreadLock );
  }
  MiscFlags = CurrentThread->MiscFlags;
  if ( (MiscFlags & 8) == 0 )
  {
    CurrentThread->MiscFlags = MiscFlags | 8;
LABEL_46:
    v34 = 0LL;
    goto LABEL_47;
  }
  Next = CurrentThread->SystemAffinityTokenListHead.Next;
  if ( Next )
  {
    if ( BYTE2(Next[2].Next) )
    {
      if ( BYTE2(Next[2].Next) == 1 )
      {
        KeFirstGroupAffinityEx(&v46, CurrentThread->Affinity);
        goto LABEL_46;
      }
      if ( BYTE2(Next[2].Next) != 2 )
        goto LABEL_46;
    }
    if ( v11 )
    {
      BYTE2(Next[2].Next) = 1;
      v42 = 0LL;
      goto LABEL_48;
    }
    goto LABEL_46;
  }
  Affinity = CurrentThread->Affinity;
  v34 = 0LL;
  for ( i = 0; i < Affinity->Count; ++i )
  {
    v39 = Affinity->Bitmap[i];
    if ( v39 )
    {
      v46.Group = i;
      v46.Mask = v39;
      break;
    }
  }
LABEL_47:
  v42 = 0LL;
  if ( !v11 )
  {
    CurrentThread->ThreadLock = 0LL;
    goto LABEL_49;
  }
LABEL_48:
  KiSetSystemAffinityThread(CurrentPrcb, 0LL, (__int64 *)&v43, 0x800u, (struct _SINGLE_LIST_ENTRY *)&v42);
  v34 = (__int64 *)v42;
LABEL_49:
  if ( (WORD2(xmmword_140FC5B10) & 0x200) != 0 )
    KiCpuPartitionCheckAffinitization(CurrentThread, CurrentThread->Affinity, 1LL, 0LL);
  v35 = 0;
  if ( v34 )
  {
    v42 = *v34;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, (unsigned __int64)(v34 - 27), (struct _SINGLE_LIST_ENTRY *)&v42, 0LL);
      v34 = (__int64 *)v42;
      ++v35;
      if ( v42 )
        v42 = *(_QWORD *)v42;
      if ( (v35 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
    }
    while ( v34 );
  }
  KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
  KiCheckForThreadDispatch(CurrentPrcb, CurrentIrql);
  PreviousAffinity = v46;
  KeGetCurrentIrql();
  v7 = v41;
LABEL_19:
  if ( (*(_DWORD *)(a1 + 224) & 0x10000) != 0 )
    v15 = *(_QWORD *)(a1 + 72) + *(_DWORD *)(a1 + 80) * KeGetPcr()->Prcb.Number;
  else
    v15 = *(_QWORD *)(a1 + 72);
  if ( *(__int64 (__fastcall **)(__int64, __int64))(a1 + 112) == HalpTscQueryCounterOrdered )
    CounterOrdered = HalpTscQueryCounterOrdered(v15, (__int64)HalpTscQueryCounterOrdered);
  else
    CounterOrdered = guard_dispatch_icall_no_overrides(v15, HalpTscQueryCounterOrdered, a3, a4);
  v17 = CounterOrdered;
  v45 = CounterOrdered;
  v18 = __readcr2();
  __writecr2(v18);
  _R9D = 0;
  v20 = 1LL << *(_DWORD *)(a1 + 220);
  v21 = v17;
  v22 = 0LL;
  v23 = 0;
  v24 = (KeFeatureBits2 & 0x800000) != 0
     && !qword_140FC0EC0
     && (*(_DWORD *)(a1 + 224) & 0x6000) == 0
     && *(_DWORD *)(a1 + 228) == 5;
  v25 = ((unsigned __int64)(*(_QWORD *)(a1 + 192) * a2 + 9999999) * (unsigned __int128)0xD6BF94D5E57A42BDuLL) >> 64;
  v26 = (*(_QWORD *)(a1 + 192) * a2 + 9999999) / 0x989680uLL + 1;
  if ( v26 )
  {
    do
    {
      if ( v7 )
      {
        if ( v24 )
        {
          __asm { tpause  r9d }
        }
        else if ( (++v23 & dword_140FC0EBC) == 0 && qword_140FC0EC0 )
        {
          guard_dispatch_icall_no_overrides(v23, v25, v17, 0LL);
        }
        else
        {
          _mm_pause();
        }
      }
      else
      {
        for ( j = 0; j < 0xC8; ++j )
        {
          _mm_pause();
          v32 = j * HalpGlobalVolatile;
          HalpGlobalVolatile = v32;
        }
      }
      InternalData = HalpTimerGetInternalData(a1);
      v29 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 112);
      if ( v29 == HalpTscQueryCounterOrdered )
      {
        __asm { rdtscp }
        v25 = (_QWORD)HalpTscQueryCounterOrdered << 32;
        v44 = InternalData;
        v30 = ((_QWORD)HalpTscQueryCounterOrdered << 32) | (unsigned __int64)v29;
      }
      else
      {
        v30 = guard_dispatch_icall_no_overrides(InternalData, HalpTscQueryCounterOrdered, v17, v28);
        v17 = v45;
      }
      if ( v30 < v21 )
        v22 += v20;
      v21 = v30;
      _R9D = 0;
    }
    while ( v30 + v22 - v17 < v26 );
  }
  if ( v40 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
