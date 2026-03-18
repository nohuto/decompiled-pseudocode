/*
 * XREFs of KeSetTimer @ 0x1402EE1E0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x1402EDE10 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x1402EEDC0 (KiTimerWaitTest.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiTraceSetTimer @ 0x1403F95AC (KiTraceSetTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

BOOLEAN __stdcall KeSetTimer(PKTIMER Timer, LARGE_INTEGER DueTime, PKDPC Dpc)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rcx
  _KDPC *v7; // rbp
  __int64 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int v10; // r14d
  BOOLEAN v11; // r12
  unsigned int v12; // esi
  unsigned __int64 Size; // rcx
  volatile signed __int32 *v14; // rsi
  unsigned __int64 v15; // r11
  unsigned __int16 TimerType; // r8
  __int64 v17; // r12
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v19; // r10
  unsigned __int64 v20; // r13
  struct _LIST_ENTRY *Blink; // rax
  __int64 v22; // r9
  _KPROCESS *Process; // rcx
  unsigned __int16 v24; // dx
  unsigned __int64 v25; // rax
  PKDPC v26; // r14
  volatile signed __int32 *v28; // r14
  unsigned int v29; // r12d
  __int64 v30; // rcx
  unsigned int v31; // esi
  unsigned int v32; // r12d
  unsigned int v33; // esi
  unsigned __int64 v34; // [rsp+30h] [rbp-A8h]
  __int64 v35; // [rsp+38h] [rbp-A0h]
  UCHAR v36; // [rsp+40h] [rbp-98h]
  LONG LockNV; // [rsp+48h] [rbp-90h]
  __int64 v38; // [rsp+60h] [rbp-78h]
  PKTIMER v39; // [rsp+68h] [rbp-70h] BYREF
  PKDPC v40; // [rsp+78h] [rbp-60h]
  _QWORD v41[2]; // [rsp+80h] [rbp-58h] BYREF

  v4 = (unsigned __int64)Timer ^ _byteswap_uint64(KiWaitAlways ^ (unsigned __int64)Dpc);
  v40 = Dpc;
  v5 = (unsigned int)KiWaitNever;
  v7 = (_KDPC *)(KiWaitNever ^ __ROR8__(v4, KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  v41[0] = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  v39 = 0LL;
  v11 = 0;
  while ( 1 )
  {
    v12 = 0;
    if ( _interlockedbittestandset(&Timer->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v5) )
        {
          HvlNotifyLongSpinWait(v12);
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
    v36 = Timer->Header.Size;
    v34 = Size;
    v35 = KiProcessorBlock[Timer->Processor];
    v14 = (volatile signed __int32 *)(v35 + 16640 + 32 * (((unsigned __int64)Timer->TimerType << 8) + Size + 16));
    while ( _interlockedbittestandset64(v14, 0LL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Size) )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v14 );
    }
    if ( (Timer->Header.Reserved1 & 0x80u) == 0 )
    {
      v15 = v34;
      TimerType = Timer->TimerType;
      v17 = v35;
      Flink = Timer->TimerListEntry.Flink;
      v19 = v35 + 16640;
      v20 = v35 + 16640 + 32 * (((unsigned __int64)TimerType << 8) + v34 + 16);
      Blink = Timer->TimerListEntry.Blink;
      v22 = v35 + 16640 + 32 * (((TimerType ^ 1LL) << 8) + v34 + 16);
      v38 = v22;
      if ( Flink->Blink != &Timer->TimerListEntry || Blink->Flink != &Timer->TimerListEntry )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      if ( Blink != Flink )
        goto LABEL_17;
      *(_DWORD *)(v20 + 28) = -1;
      if ( TimerType )
      {
        v28 = (volatile signed __int32 *)(v19 + 32 * (v34 + 16));
        if ( _interlockedbittestandset64(v28, 0LL) )
        {
          _mm_pause();
        }
        else if ( v28 )
        {
          goto LABEL_41;
        }
        _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
        v31 = 0;
        while ( _interlockedbittestandset64(v28, 0LL) )
        {
          do
          {
            if ( (++v31 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Flink) )
            {
              HvlNotifyLongSpinWait(v31);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v28 );
        }
        v14 = (volatile signed __int32 *)(v35 + 16640 + 32 * (v34 + 272));
        v32 = 0;
        while ( _interlockedbittestandset64(v14, 0LL) )
        {
          do
          {
            if ( (++v32 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Flink) )
            {
              HvlNotifyLongSpinWait(v32);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v14 );
        }
      }
      else
      {
        v28 = (volatile signed __int32 *)(v19 + 32 * (v34 + 272));
        v29 = 0;
        while ( _interlockedbittestandset64(v28, 0LL) )
        {
          do
          {
            if ( (++v29 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Flink) )
            {
              HvlNotifyLongSpinWait(v29);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v28 );
        }
      }
      v17 = v35;
      v15 = v34;
      v22 = v38;
LABEL_41:
      if ( *(_DWORD *)(v20 + 28) == -1 && *(_DWORD *)(v22 + 28) == -1 )
      {
        v30 = qword_140FC7528[2 * *(unsigned __int8 *)(v17 + 208)];
        if ( !KiSerializeTimerExpiration )
        {
          _interlockedbittestandreset64((volatile signed __int32 *)((v15 << 6) + v30), *(unsigned __int8 *)(v17 + 209));
          _InterlockedAnd64((volatile signed __int64 *)v28, 0LL);
          goto LABEL_17;
        }
        _interlockedbittestandreset64((volatile signed __int32 *)(v30 + 8 * (v15 >> 6)), v36 & 0x3F);
      }
      _InterlockedAnd64((volatile signed __int64 *)v28, 0LL);
LABEL_17:
      _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
      _InterlockedAnd(&Timer->Header.Lock, 0xBFFFFFFF);
      LOBYTE(CurrentIrql) = v41[0];
      v11 = 1;
      goto LABEL_18;
    }
    _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
    v10 = 0;
    v5 = _InterlockedExchange64((volatile __int64 *)(v35 + 8LL * (Timer->Header.Reserved1 & 0x3F) + 16640), 0LL);
    if ( v5 )
      break;
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
    v33 = 0;
    while ( (Timer->Header.Reserved1 & 0x80u) != 0 )
    {
      if ( (++v33 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v5) )
      {
        HvlNotifyLongSpinWait(v33);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFFu);
  v11 = 1;
LABEL_18:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v11 )
  {
    v39 = Timer;
    v41[0] = &v39;
    v41[1] = 8LL;
    EtwTraceKernelEvent((int)v41, 1, 0x40020000u, 3925, 1538);
  }
  v24 = 0;
  if ( !KiGlobalTimerResolutionRequests )
  {
    if ( CurrentPrcb->NestingLevel
      || (Process = KeGetCurrentThread()->ApcState.Process, (Process[1].DirectoryTableBase & 0x100000000000LL) == 0)
      || (Process[3].ActiveGroupsMask.Masks[1] & 0x400000000000000LL) != 0 )
    {
      v24 = 1;
    }
  }
  Timer->TimerType = v24;
  Timer->Dpc = v7;
  Timer->Period = 0;
  LockNV = Timer->Header.LockNV;
  BYTE1(LockNV) = 0;
  if ( DueTime.HighPart < 0
    || (BYTE1(LockNV) = 1, DueTime.QuadPart = MEMORY[0xFFFFF78000000014] - DueTime.QuadPart, DueTime.HighPart < 0) )
  {
    HIBYTE(LockNV) |= 0x40u;
    v25 = MEMORY[0xFFFFF78000000008] - DueTime.QuadPart;
    Timer->DueTime.QuadPart = MEMORY[0xFFFFF78000000008] - DueTime.QuadPart;
    BYTE2(LockNV) = v25 >> 18;
    Timer->Header.LockNV = LockNV;
    Timer->Header.SignalState = 0;
    v26 = v40;
    if ( !KiInsertTimerTable((__int64)CurrentPrcb, (__int64)Timer, (__int64)v40, BYTE2(LockNV), 0LL) )
      goto LABEL_32;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      KiTraceSetTimer(Timer, v26, 0LL);
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
  KiExitDispatcher(CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v11;
}
