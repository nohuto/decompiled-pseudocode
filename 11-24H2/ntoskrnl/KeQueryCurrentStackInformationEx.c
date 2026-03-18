/*
 * XREFs of KeQueryCurrentStackInformationEx @ 0x140259BD0
 * Callers:
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     EtwpTraceLastBranchRecord @ 0x140259A00 (EtwpTraceLastBranchRecord.c)
 *     KeQueryCurrentStackInformation @ 0x140259B80 (KeQueryCurrentStackInformation.c)
 *     RtlDispatchException @ 0x14027C1C0 (RtlDispatchException.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14027C840 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     RtlUnwindEx @ 0x14027CD20 (RtlUnwindEx.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14027D900 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     RtlpWalkFrameChain @ 0x14027E270 (RtlpWalkFrameChain.c)
 *     RtlpGetStackLimits @ 0x14027FEF0 (RtlpGetStackLimits.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403274F0 (EtwpLogSystemEventUnsafe.c)
 *     EtwpTraceStackWalk @ 0x1403EDBD0 (EtwpTraceStackWalk.c)
 *     RtlpIsFrameInBoundsEx @ 0x14040D770 (RtlpIsFrameInBoundsEx.c)
 *     KeCheckStackAndTargetAddress @ 0x1404378F0 (KeCheckStackAndTargetAddress.c)
 *     KasanWrapperRtlRestoreContext @ 0x140449420 (KasanWrapperRtlRestoreContext.c)
 *     RtlpGetStackLimitsEx @ 0x140456330 (RtlpGetStackLimitsEx.c)
 *     KasanHibernationGetStackLow @ 0x1405A9C30 (KasanHibernationGetStackLow.c)
 *     WheaIsAltContextAllocPossible @ 0x14065CDE0 (WheaIsAltContextAllocPossible.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     KiRspInIstStack @ 0x14040EE44 (KiRspInIstStack.c)
 */

bool __fastcall KeQueryCurrentStackInformationEx(unsigned __int64 a1, _DWORD *a2, char **a3, unsigned __int64 *a4)
{
  unsigned __int8 CurrentIrql; // r15
  char *v9; // rcx
  char *v10; // rdx
  struct _KTHREAD *CurrentThread; // rbp
  char *StackLimit; // r8
  unsigned __int64 v13; // rax
  char *StackBase; // rcx
  bool result; // al
  char *IsrStack; // rdx
  char *v17; // rcx
  char *v18; // rcx
  char *v19; // rdx
  char *v20; // rcx
  char *v21; // rdx
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int64 v24; // rdx

  if ( !KiRecoveryInProgress && (KiBugCheckActive & 3) != 0 )
  {
    *a2 = 0;
    result = 1;
    *a4 = -1LL;
    *a3 = (char *)0xFFFF800000000000LL;
    return result;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
  {
    IsrStack = (char *)KeGetPcr()->Prcb.IsrStack;
    v17 = &IsrStack[-(unsigned int)KeIsrStackSize];
    if ( (unsigned __int64)v17 <= a1 && a1 < (unsigned __int64)IsrStack )
    {
      *a2 = 6;
      result = 1;
      *a4 = (unsigned __int64)IsrStack;
      *a3 = v17;
      return result;
    }
    v18 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80;
    v19 = &v18[-(unsigned int)KeExceptionStackSize];
    if ( (unsigned __int64)v19 <= a1 && a1 < (unsigned __int64)v18 )
    {
      *a2 = 10;
      result = 1;
      *a4 = (unsigned __int64)v18;
      *a3 = v19;
      return result;
    }
  }
  else if ( KeAreInterruptsEnabled() )
  {
    goto LABEL_5;
  }
  v9 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80;
  v10 = &v9[-(unsigned int)KeExceptionStackSize];
  if ( (unsigned __int64)v10 <= a1 && a1 < (unsigned __int64)v9 )
  {
    *a2 = 10;
    result = 1;
    *a4 = (unsigned __int64)v9;
    *a3 = v10;
    return result;
  }
LABEL_5:
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->InitialStack == (void *)KeGetPcr()->Prcb.RspBase )
  {
    if ( CurrentIrql >= 2u )
    {
      v20 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
      v21 = &v20[-(unsigned int)KeKernelStackSize];
      if ( (unsigned __int64)v21 <= a1 && a1 < (unsigned __int64)v20 )
      {
        *a2 = 1;
        result = 1;
        *a4 = (unsigned __int64)v20;
        *a3 = v21;
        return result;
      }
      if ( KeGetCurrentPrcb() == (struct _KPRCB *)KiDebuggerOwner )
      {
        *a2 = 7;
        result = 1;
        *a4 = -1LL;
        *a3 = (char *)0xFFFF800000000000LL;
        return result;
      }
    }
    if ( KeAreInterruptsEnabled() && KeGetCurrentIrql() < 0xFu )
      goto LABEL_9;
    v22 = (unsigned __int8)KiKvaShadow;
    v23 = (unsigned int)KeIstStackSize;
    v24 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52);
    if ( KiKvaShadow )
      v23 = 464LL;
    if ( a1 <= v24 && a1 >= v24 - v23
      || KiKvaShadow
      && (v22 = *(_QWORD *)(v24 + 8), a1 <= v22)
      && (v22 -= (unsigned int)(KeIstStackSize - 32), a1 >= v22) )
    {
      *a2 = 8;
      result = 1;
      *a4 = -1LL;
      *a3 = (char *)0xFFFF800000000000LL;
      return result;
    }
    if ( !(unsigned int)KiRspInIstStack(2LL, a1, v22, (unsigned int)KeIstStackSize) )
    {
LABEL_9:
      if ( (CurrentThread->SameThreadTransientFlags & 1) != 0 )
        *a2 = 2;
      else
        *a2 = (CurrentThread->CallbackNestingLevel != 0) + 3;
      StackLimit = (char *)CurrentThread->StackLimit;
      v13 = (unsigned __int64)StackLimit;
      StackBase = (char *)CurrentThread->StackBase;
      *a4 = (unsigned __int64)StackBase;
      if ( StackLimit >= StackBase )
        v13 = (unsigned __int64)StackLimit;
      *a3 = StackLimit;
      return v13 <= a1 && a1 < *a4;
    }
    else
    {
      *a2 = 9;
      result = 1;
      *a4 = -1LL;
      *a3 = (char *)0xFFFF800000000000LL;
    }
  }
  else
  {
    *a2 = 5;
    result = 1;
    *a4 = -1LL;
    *a3 = (char *)0xFFFF800000000000LL;
  }
  return result;
}
