/*
 * XREFs of KeSetTimer @ 0x1403161F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiComputeDueTime @ 0x140316E40 (KiComputeDueTime.c)
 *     KiInsertTimerTable @ 0x140316F50 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x140317320 (KiTimerWaitTest.c)
 *     KiTraceSetTimer @ 0x140471C1C (KiTraceSetTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

BOOLEAN __stdcall KeSetTimer(PKTIMER Timer, LARGE_INTEGER DueTime, PKDPC Dpc)
{
  _KDPC *v5; // rbp
  __int64 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v8; // r15d
  BOOLEAN v9; // r12
  unsigned int v10; // esi
  unsigned __int64 Size; // rcx
  __int64 Processor; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  volatile signed __int32 *v15; // rsi
  unsigned __int64 v16; // r11
  unsigned __int16 TimerType; // r8
  __int64 v18; // r12
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v20; // r10
  unsigned __int64 v21; // r13
  struct _LIST_ENTRY *Blink; // rax
  __int64 v23; // r9
  _KPROCESS *Process; // rcx
  unsigned __int16 v25; // dx
  int v26; // r9d
  PKDPC v27; // r15
  volatile signed __int32 *v29; // r15
  unsigned int v30; // r12d
  __int64 v31; // rcx
  unsigned int v32; // esi
  unsigned int v33; // r12d
  unsigned int v34; // esi
  int v35; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v36; // [rsp+38h] [rbp-90h]
  __int64 v37; // [rsp+40h] [rbp-88h]
  int v38; // [rsp+48h] [rbp-80h]
  __int64 v39; // [rsp+50h] [rbp-78h]
  PKTIMER v40; // [rsp+58h] [rbp-70h] BYREF
  PKDPC v41; // [rsp+68h] [rbp-60h]
  _QWORD v42[2]; // [rsp+70h] [rbp-58h] BYREF

  v41 = Dpc;
  v35 = 0;
  v5 = (_KDPC *)(KiWaitNever ^ __ROR8__(
                                 (unsigned __int64)Timer ^ _byteswap_uint64(KiWaitAlways ^ (unsigned __int64)Dpc),
                                 KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  v42[0] = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  v40 = 0LL;
  v9 = 0;
  while ( 1 )
  {
    v10 = 0;
    if ( _interlockedbittestandset(&Timer->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (Timer->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Timer->Header.Lock, 7u) );
    }
    if ( (Timer->Header.Reserved1 & 0xC0) == 0 )
      goto LABEL_18;
    Size = Timer->Header.Size;
    Processor = Timer->Processor;
    v38 = Timer->Header.Size;
    v36 = Size;
    v13 = KiProcessorBlock[Processor];
    v14 = (unsigned __int64)Timer->TimerType << 8;
    v37 = v13;
    v15 = (volatile signed __int32 *)(v13 + 16640 + 32 * (v14 + Size + 16));
    while ( _interlockedbittestandset64(v15, 0LL) )
    {
      do
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v8);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v15 );
    }
    if ( (Timer->Header.Reserved1 & 0x80u) == 0 )
    {
      v16 = v36;
      TimerType = Timer->TimerType;
      v18 = v37;
      Flink = Timer->TimerListEntry.Flink;
      v20 = v37 + 16640;
      v21 = v37 + 16640 + 32 * (((unsigned __int64)TimerType << 8) + v36 + 16);
      Blink = Timer->TimerListEntry.Blink;
      v23 = v37 + 16640 + 32 * (((TimerType ^ 1LL) << 8) + v36 + 16);
      v39 = v23;
      if ( Flink->Blink != &Timer->TimerListEntry || Blink->Flink != &Timer->TimerListEntry )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      if ( Blink != Flink )
        goto LABEL_17;
      *(_DWORD *)(v21 + 28) = -1;
      if ( TimerType )
      {
        v29 = (volatile signed __int32 *)(v20 + 32 * (v16 + 16));
        if ( _interlockedbittestandset64(v29, 0LL) )
        {
          _mm_pause();
        }
        else if ( v29 )
        {
          goto LABEL_39;
        }
        _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
        v32 = 0;
        while ( _interlockedbittestandset64(v29, 0LL) )
        {
          do
          {
            if ( (++v32 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v32);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v29 );
        }
        v15 = (volatile signed __int32 *)(v18 + 16640 + 32 * (v36 + 272));
        v33 = 0;
        while ( _interlockedbittestandset64(v15, 0LL) )
        {
          do
          {
            if ( (++v33 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v33);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v15 );
        }
      }
      else
      {
        v29 = (volatile signed __int32 *)(v20 + 32 * (v16 + 272));
        v30 = 0;
        while ( _interlockedbittestandset64(v29, 0LL) )
        {
          do
          {
            if ( (++v30 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v30);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v29 );
        }
      }
      v18 = v37;
      v16 = v36;
      v23 = v39;
LABEL_39:
      if ( *(_DWORD *)(v21 + 28) == -1 && *(_DWORD *)(v23 + 28) == -1 )
      {
        v31 = qword_140FC8568[2 * *(unsigned __int8 *)(v18 + 208)];
        if ( !KiSerializeTimerExpiration )
        {
          _interlockedbittestandreset64((volatile signed __int32 *)((v16 << 6) + v31), *(unsigned __int8 *)(v18 + 209));
          _InterlockedAnd64((volatile signed __int64 *)v29, 0LL);
          goto LABEL_17;
        }
        _interlockedbittestandreset64((volatile signed __int32 *)(v31 + 8 * (v16 >> 6)), v38 & 0x3F);
      }
      _InterlockedAnd64((volatile signed __int64 *)v29, 0LL);
LABEL_17:
      _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
      _InterlockedAnd(&Timer->Header.Lock, 0xBFFFFFFF);
      LOBYTE(CurrentIrql) = v42[0];
      v9 = 1;
      goto LABEL_18;
    }
    _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
    v8 = 0;
    if ( _InterlockedExchange64((volatile __int64 *)(v37 + 8LL * (Timer->Header.Reserved1 & 0x3F) + 16640), 0LL) )
      break;
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
    v34 = 0;
    while ( (Timer->Header.Reserved1 & 0x80u) != 0 )
    {
      if ( (++v34 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v34);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFFu);
  v9 = 1;
LABEL_18:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v9 )
  {
    v40 = Timer;
    v42[0] = &v40;
    v42[1] = 8LL;
    EtwTraceKernelEvent((int)v42, 1, 0x40020000u, 3925, 1538);
  }
  v25 = 0;
  if ( !KiGlobalTimerResolutionRequests )
  {
    if ( CurrentPrcb->NestingLevel
      || (Process = KeGetCurrentThread()->ApcState.Process, (Process[1].DirectoryTableBase & 0x100000000000LL) == 0)
      || (Process[3].ActiveGroupsMask.Masks[1] & 0x400000000000000LL) != 0 )
    {
      v25 = 1;
    }
  }
  Timer->TimerType = v25;
  Timer->Dpc = v5;
  Timer->Period = 0;
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiComputeDueTime)(
                       Timer,
                       (LARGE_INTEGER)DueTime.QuadPart,
                       0LL,
                       &v35)
    && (v26 = v35,
        Timer->Header.SignalState = 0,
        v27 = v41,
        (unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, (_DWORD)Timer, (_DWORD)v41, v26, 0LL)) )
  {
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      KiTraceSetTimer(Timer, v27, 0LL);
    else
      _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
  }
  else
  {
    KiTimerWaitTest(CurrentPrcb, Timer, 0LL);
  }
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v9;
}
