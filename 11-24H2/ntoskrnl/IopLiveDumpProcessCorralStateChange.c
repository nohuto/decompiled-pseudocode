/*
 * XREFs of IopLiveDumpProcessCorralStateChange @ 0x140467B1C
 * Callers:
 *     IopLiveDumpCorralDpc @ 0x14059A5F0 (IopLiveDumpCorralDpc.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x14059B99C (IopLiveDumpInitiateCorralStateChange.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     IopLiveDumpBufferDumpData @ 0x140599878 (IopLiveDumpBufferDumpData.c)
 *     KeRestoreSupervisorState @ 0x1405B87E0 (KeRestoreSupervisorState.c)
 *     KeSaveSupervisorState @ 0x1405B8864 (KeSaveSupervisorState.c)
 *     KeResumeClockTimerSafe @ 0x1405B9F4C (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1405B9FAC (KeSuspendClockTimerSafe.c)
 */

char __fastcall IopLiveDumpProcessCorralStateChange(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  signed __int32 v10; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v13; // ett

  v2 = 0;
  while ( *(_DWORD *)(a1 + 12) == *(_DWORD *)(a2 + 4) )
  {
    if ( (++v2 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v2);
    }
    else
    {
      _mm_pause();
    }
  }
  v5 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a2 + 4) = v5;
  v6 = v5 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( --v10 )
            {
              if ( v10 == 1 && *(_BYTE *)(a2 + 9) )
              {
                LOBYTE(v10) = KeRestoreSupervisorState(
                                KeGetCurrentPrcb()->ExtendedSupervisorState,
                                MEMORY[0xFFFFF780000005F0] | 0x100LL);
                *(_BYTE *)(a2 + 9) = 0;
              }
            }
            else if ( SaveSupervisorState )
            {
              LOBYTE(v10) = KeSaveSupervisorState(
                              KeGetCurrentPrcb()->ExtendedSupervisorState,
                              MEMORY[0xFFFFF780000005F0] | 0x100LL);
              *(_BYTE *)(a2 + 9) = 1;
            }
          }
          else if ( *(_BYTE *)(a2 + 8) )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v10 = *SchedulerAssist;
              do
              {
                v13 = v10;
                v10 = _InterlockedCompareExchange(SchedulerAssist, v10 & 0xFFDFFFFF, v10);
              }
              while ( v13 != v10 );
              if ( (v10 & 0x200000) != 0 )
                LOBYTE(v10) = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            _enable();
          }
        }
        else
        {
          LOBYTE(v10) = KeResumeClockTimerSafe();
        }
      }
      else
      {
        LOBYTE(v10) = IopLiveDumpBufferDumpData(a1, a2);
      }
    }
    else
    {
      LOBYTE(v10) = KeSuspendClockTimerSafe();
    }
  }
  else
  {
    LOBYTE(v10) = KeDisableInterrupts();
    *(_BYTE *)(a2 + 8) = v10;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
  return v10;
}
