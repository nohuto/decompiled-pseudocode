/*
 * XREFs of KeSetTimer @ 0x140335230
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x140334E60 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x140335E10 (KiTimerWaitTest.c)
 *     KiTraceSetTimer @ 0x140401CDC (KiTraceSetTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

BOOLEAN __stdcall KeSetTimer(PKTIMER Timer, LARGE_INTEGER DueTime, PKDPC Dpc)
{
  _KDPC *v5; // rbp
  __int64 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int v8; // r14d
  BOOLEAN v9; // r12
  unsigned int v10; // esi
  volatile signed __int32 *v11; // rsi
  unsigned __int64 v12; // r11
  unsigned __int16 TimerType; // r8
  __int64 v14; // r12
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v16; // r10
  unsigned __int64 v17; // r13
  struct _LIST_ENTRY *Blink; // rax
  __int64 v19; // r9
  _KPROCESS *Process; // rcx
  unsigned __int16 v21; // dx
  unsigned __int64 v22; // rax
  PKDPC v23; // r14
  volatile signed __int32 *v25; // r14
  unsigned int v26; // r12d
  __int64 v27; // rcx
  unsigned int v28; // esi
  unsigned int v29; // r12d
  unsigned int v30; // esi
  __int64 v31; // [rsp+38h] [rbp-A0h]
  UCHAR Size; // [rsp+40h] [rbp-98h]
  LONG LockNV; // [rsp+48h] [rbp-90h]
  __int64 v34; // [rsp+60h] [rbp-78h]
  PKTIMER v35; // [rsp+68h] [rbp-70h] BYREF
  PKDPC v36; // [rsp+78h] [rbp-60h]
  _QWORD v37[2]; // [rsp+80h] [rbp-58h] BYREF

  v36 = Dpc;
  v5 = (_KDPC *)(KiWaitNever ^ __ROR8__(
                                 (unsigned __int64)Timer ^ _byteswap_uint64(KiWaitAlways ^ (unsigned __int64)Dpc),
                                 KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  v37[0] = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  v35 = 0LL;
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
    v31 = KiProcessorBlock[Timer->Processor];
    v11 = (volatile signed __int32 *)(v31 + 16640 + 32 * (((unsigned __int64)Timer->TimerType << 8) + Size + 16LL));
    while ( _interlockedbittestandset64(v11, 0LL) )
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
      while ( *(_QWORD *)v11 );
    }
    if ( (Timer->Header.Reserved1 & 0x80u) == 0 )
    {
      v12 = Size;
      TimerType = Timer->TimerType;
      v14 = v31;
      Flink = Timer->TimerListEntry.Flink;
      v16 = v31 + 16640;
      v17 = v31 + 16640 + 32 * (((unsigned __int64)TimerType << 8) + Size + 16LL);
      Blink = Timer->TimerListEntry.Blink;
      v19 = v31 + 16640 + 32 * (((TimerType ^ 1LL) << 8) + Size + 16LL);
      v34 = v19;
      if ( Flink->Blink != &Timer->TimerListEntry || Blink->Flink != &Timer->TimerListEntry )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      if ( Blink != Flink )
        goto LABEL_17;
      *(_DWORD *)(v17 + 28) = -1;
      if ( TimerType )
      {
        v25 = (volatile signed __int32 *)(v16 + 32 * (Size + 16LL));
        if ( _interlockedbittestandset64(v25, 0LL) )
        {
          _mm_pause();
        }
        else if ( v25 )
        {
          goto LABEL_41;
        }
        _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
        v28 = 0;
        while ( _interlockedbittestandset64(v25, 0LL) )
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
          while ( *(_QWORD *)v25 );
        }
        v11 = (volatile signed __int32 *)(v31 + 16640 + 32 * (Size + 272LL));
        v29 = 0;
        while ( _interlockedbittestandset64(v11, 0LL) )
        {
          do
          {
            if ( (++v29 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v29);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v11 );
        }
      }
      else
      {
        v25 = (volatile signed __int32 *)(v16 + 32 * (Size + 272LL));
        v26 = 0;
        while ( _interlockedbittestandset64(v25, 0LL) )
        {
          do
          {
            if ( (++v26 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v26);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v25 );
        }
      }
      v14 = v31;
      v12 = Size;
      v19 = v34;
LABEL_41:
      if ( *(_DWORD *)(v17 + 28) == -1 && *(_DWORD *)(v19 + 28) == -1 )
      {
        v27 = qword_140FC7508[2 * *(unsigned __int8 *)(v14 + 208)];
        if ( !KiSerializeTimerExpiration )
        {
          _interlockedbittestandreset64((volatile signed __int32 *)((v12 << 6) + v27), *(unsigned __int8 *)(v14 + 209));
          _InterlockedAnd64((volatile signed __int64 *)v25, 0LL);
          goto LABEL_17;
        }
        _interlockedbittestandreset64((volatile signed __int32 *)(v27 + 8 * (v12 >> 6)), Size & 0x3F);
      }
      _InterlockedAnd64((volatile signed __int64 *)v25, 0LL);
LABEL_17:
      _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
      _InterlockedAnd(&Timer->Header.Lock, 0xBFFFFFFF);
      LOBYTE(CurrentIrql) = v37[0];
      v9 = 1;
      goto LABEL_18;
    }
    _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
    v8 = 0;
    if ( _InterlockedExchange64((volatile __int64 *)(v31 + 8LL * (Timer->Header.Reserved1 & 0x3F) + 16640), 0LL) )
      break;
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
    v30 = 0;
    while ( (Timer->Header.Reserved1 & 0x80u) != 0 )
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
  }
  _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFFu);
  v9 = 1;
LABEL_18:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v9 )
  {
    v35 = Timer;
    v37[0] = &v35;
    v37[1] = 8LL;
    EtwTraceKernelEvent((int)v37, 1, 0x40020000u, 3925, 1538);
  }
  v21 = 0;
  if ( !KiGlobalTimerResolutionRequests )
  {
    if ( CurrentPrcb->NestingLevel
      || (Process = KeGetCurrentThread()->ApcState.Process, (Process[1].DirectoryTableBase & 0x100000000000LL) == 0)
      || (Process[3].ActiveGroupsMask.Masks[1] & 0x400000000000000LL) != 0 )
    {
      v21 = 1;
    }
  }
  Timer->TimerType = v21;
  Timer->Dpc = v5;
  Timer->Period = 0;
  LockNV = Timer->Header.LockNV;
  BYTE1(LockNV) = 0;
  if ( DueTime.HighPart < 0
    || (BYTE1(LockNV) = 1, DueTime.QuadPart = MEMORY[0xFFFFF78000000014] - DueTime.QuadPart, DueTime.HighPart < 0) )
  {
    HIBYTE(LockNV) |= 0x40u;
    v22 = MEMORY[0xFFFFF78000000008] - DueTime.QuadPart;
    Timer->DueTime.QuadPart = MEMORY[0xFFFFF78000000008] - DueTime.QuadPart;
    BYTE2(LockNV) = v22 >> 18;
    Timer->Header.LockNV = LockNV;
    Timer->Header.SignalState = 0;
    v23 = v36;
    if ( !KiInsertTimerTable((__int64)CurrentPrcb, (__int64)Timer, (__int64)v36, BYTE2(LockNV), 0LL) )
      goto LABEL_32;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      KiTraceSetTimer(Timer, v23, 0LL);
    else
      _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
  }
  else
  {
    Timer->Header.LockNV = LockNV;
    Timer->DueTime.QuadPart = 0LL;
LABEL_32:
    KiTimerWaitTest(CurrentPrcb, Timer, 0LL);
  }
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v9;
}
