/*
 * XREFs of HalpTimerStallExecutionProcessor @ 0x14031AB50
 * Callers:
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 *     HalpTimerMeasureFrequencies @ 0x140545550 (HalpTimerMeasureFrequencies.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCheckForThreadDispatch @ 0x1402C5DAC (KiCheckForThreadDispatch.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     KiSetSystemAffinityThread @ 0x140318DD4 (KiSetSystemAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     HalpTscQueryCounterOrdered @ 0x140319950 (HalpTscQueryCounterOrdered.c)
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     KeFirstGroupAffinityEx @ 0x14044FD10 (KeFirstGroupAffinityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405BD680 (KiCpuPartitionCheckAffinitization.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpTimerStallExecutionProcessor(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  unsigned int v4; // edi
  char v6; // r14
  unsigned int Number; // eax
  unsigned int v9; // ecx
  char v10; // bp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _KTHREAD *CurrentThread; // rbx
  __int64 v14; // rcx
  __int64 CounterOrdered; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  __int64 v19; // r12
  unsigned __int64 v20; // rsi
  __int64 v21; // rbx
  unsigned int v22; // edi
  bool v23; // bp
  __int64 v24; // rdx
  unsigned __int64 v25; // r15
  __int64 InternalData; // rcx
  __int64 v27; // r8
  __int64 (__fastcall *v28)(__int64, __int64); // rax
  unsigned __int64 v29; // rax
  unsigned int j; // eax
  int v31; // ecx
  int MiscFlags; // eax
  __int64 *v33; // rdi
  char v34; // bl
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  _KAFFINITY_EX *Affinity; // r8
  unsigned __int16 i; // cx
  unsigned __int64 v38; // rdx
  char v39; // [rsp+30h] [rbp-98h]
  __int64 v41; // [rsp+38h] [rbp-90h] BYREF
  __int128 v42; // [rsp+40h] [rbp-88h] BYREF
  int v43; // [rsp+50h] [rbp-78h]
  __int64 v44; // [rsp+58h] [rbp-70h]
  _GROUP_AFFINITY v45; // [rsp+60h] [rbp-68h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+70h] [rbp-58h] BYREF
  int v47; // [rsp+C0h] [rbp-8h]

  v3 = *(_DWORD *)(a1 + 224);
  v4 = 0;
  v6 = a3;
  v39 = 0;
  v42 = 0LL;
  PreviousAffinity = 0LL;
  if ( (v3 & 1) == 0
    || (unsigned int)KeNumberProcessors_0 < 2
    || KeGetCurrentIrql() >= 2u
    || (v47 & 0x200) == 0
    || (*(_DWORD *)(a1 + 184) & 0x20) != 0 )
  {
    goto LABEL_19;
  }
  Number = KeGetPcr()->Prcb.Number;
  *(_DWORD *)((char *)&v42 + 10) = 0;
  HIWORD(v42) = 0;
  v39 = 1;
  v9 = *((_DWORD *)KiGlobalState + Number);
  DWORD2(v42) = (unsigned __int16)(v9 >> 6);
  *(_QWORD *)&v42 = 1LL << (v9 & 0x3F);
  v45 = 0LL;
  if ( WORD4(v42) < KeActiveProcessors.Count
    && (KeActiveProcessors.Bitmap[WORD4(v42)] & (unsigned __int64)v42) != 0
    && !(HIWORD(v42) | (unsigned __int16)(WORD6(v42) | WORD5(v42))) )
  {
    v10 = 1;
    *(_QWORD *)&v42 = KeActiveProcessors.Bitmap[WORD4(v42)] & v42;
  }
  else
  {
    v10 = 0;
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
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v4);
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
    v33 = 0LL;
    goto LABEL_47;
  }
  Next = CurrentThread->SystemAffinityTokenListHead.Next;
  if ( Next )
  {
    if ( BYTE2(Next[2].Next) )
    {
      if ( BYTE2(Next[2].Next) == 1 )
      {
        KeFirstGroupAffinityEx(&v45, CurrentThread->Affinity);
        goto LABEL_46;
      }
      if ( BYTE2(Next[2].Next) != 2 )
        goto LABEL_46;
    }
    if ( v10 )
    {
      BYTE2(Next[2].Next) = 1;
      v41 = 0LL;
      goto LABEL_48;
    }
    goto LABEL_46;
  }
  Affinity = CurrentThread->Affinity;
  v33 = 0LL;
  for ( i = 0; i < Affinity->Count; ++i )
  {
    v38 = Affinity->Bitmap[i];
    if ( v38 )
    {
      v45.Group = i;
      v45.Mask = v38;
      break;
    }
  }
LABEL_47:
  v41 = 0LL;
  if ( !v10 )
  {
    CurrentThread->ThreadLock = 0LL;
    goto LABEL_49;
  }
LABEL_48:
  KiSetSystemAffinityThread(CurrentPrcb, 0LL, (__int64 *)&v42, 0x800u, (struct _SINGLE_LIST_ENTRY *)&v41);
  v33 = (__int64 *)v41;
LABEL_49:
  if ( (WORD2(xmmword_140FC6B50) & 0x200) != 0 )
    KiCpuPartitionCheckAffinitization(CurrentThread, CurrentThread->Affinity, 1LL, 0LL);
  v34 = 0;
  if ( v33 )
  {
    v41 = *v33;
    do
    {
      KiDeferredReadySingleThread(CurrentPrcb, (unsigned __int64)(v33 - 27), (struct _SINGLE_LIST_ENTRY *)&v41, 0LL);
      v33 = (__int64 *)v41;
      ++v34;
      if ( v41 )
        v41 = *(_QWORD *)v41;
      if ( (v34 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
    }
    while ( v33 );
  }
  KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
  KiCheckForThreadDispatch(CurrentPrcb, CurrentIrql);
  PreviousAffinity = v45;
  KeGetCurrentIrql();
  v6 = a3;
LABEL_19:
  if ( (*(_DWORD *)(a1 + 224) & 0x10000) != 0 )
    v14 = *(_QWORD *)(a1 + 72) + *(_DWORD *)(a1 + 80) * KeGetPcr()->Prcb.Number;
  else
    v14 = *(_QWORD *)(a1 + 72);
  if ( *(__int64 (__fastcall **)(__int64, __int64))(a1 + 112) == HalpTscQueryCounterOrdered )
    CounterOrdered = HalpTscQueryCounterOrdered(v14, (__int64)HalpTscQueryCounterOrdered);
  else
    CounterOrdered = guard_dispatch_icall_no_overrides(v14, HalpTscQueryCounterOrdered);
  v16 = CounterOrdered;
  v44 = CounterOrdered;
  v17 = __readcr2();
  __writecr2(v17);
  _R9D = 0;
  v19 = 1LL << *(_DWORD *)(a1 + 220);
  v20 = v16;
  v21 = 0LL;
  v22 = 0;
  v23 = (KeFeatureBits2 & 0x800000) != 0
     && !qword_140FC1120
     && (*(_DWORD *)(a1 + 224) & 0x6000) == 0
     && *(_DWORD *)(a1 + 228) == 5;
  v24 = ((unsigned __int64)(*(_QWORD *)(a1 + 192) * a2 + 9999999) * (unsigned __int128)0xD6BF94D5E57A42BDuLL) >> 64;
  v25 = (*(_QWORD *)(a1 + 192) * a2 + 9999999) / 0x989680uLL + 1;
  if ( v25 )
  {
    do
    {
      if ( v6 )
      {
        if ( v23 )
        {
          __asm { tpause  r9d }
        }
        else if ( (++v22 & dword_140FC111C) == 0 && qword_140FC1120 )
        {
          guard_dispatch_icall_no_overrides(v22, v24);
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
          v31 = j * HalpGlobalVolatile;
          HalpGlobalVolatile = v31;
        }
      }
      InternalData = HalpTimerGetInternalData(a1);
      v28 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 112);
      if ( v28 == HalpTscQueryCounterOrdered )
      {
        __asm { rdtscp }
        v24 = (_QWORD)HalpTscQueryCounterOrdered << 32;
        v43 = InternalData;
        v29 = ((_QWORD)HalpTscQueryCounterOrdered << 32) | (unsigned __int64)v28;
      }
      else
      {
        v29 = guard_dispatch_icall_no_overrides(InternalData, HalpTscQueryCounterOrdered);
        v27 = v44;
      }
      if ( v29 < v20 )
        v21 += v19;
      v20 = v29;
      _R9D = 0;
    }
    while ( v29 + v21 - v27 < v25 );
  }
  if ( v39 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
