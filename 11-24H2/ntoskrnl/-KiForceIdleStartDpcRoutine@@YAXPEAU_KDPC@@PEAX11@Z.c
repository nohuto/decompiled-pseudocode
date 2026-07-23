/*
 * XREFs of ?KiForceIdleStartDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404B6CC0
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140484B24 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KiSetForceIdleState @ 0x140484E74 (KiSetForceIdleState.c)
 */

void __fastcall KiForceIdleStartDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  char v4; // di
  unsigned int v5; // ebx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett

  v4 = 0;
  _disable();
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
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
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleState == 1 )
  {
    KiSetForceIdleState(4u);
    KiForceIdleActiveLastStartTime = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    v4 = 1;
  }
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v8 = *SchedulerAssist;
    do
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange(SchedulerAssist, v8 & 0xFFDFFFFF, v8);
    }
    while ( v9 != v8 );
    if ( (v8 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  if ( !v4 )
    KiForceIdleUpdateSchedulerParkState(1u);
}
