/*
 * XREFs of KeQueryCurrentStackInformationEx @ 0x1402571F0
 * Callers:
 *     EtwpTraceLastBranchRecord @ 0x140257020 (EtwpTraceLastBranchRecord.c)
 *     KeQueryCurrentStackInformation @ 0x1402571A0 (KeQueryCurrentStackInformation.c)
 *     RtlpWalkFrameChain @ 0x140257BE0 (RtlpWalkFrameChain.c)
 *     RtlpGetStackLimits @ 0x140258FB0 (RtlpGetStackLimits.c)
 *     RtlUnwindEx @ 0x14025C330 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x14025CE90 (RtlDispatchException.c)
 *     EtwpTraceStackWalk @ 0x140309D40 (EtwpTraceStackWalk.c)
 *     EtwpLogSystemEventUnsafe @ 0x14030BF40 (EtwpLogSystemEventUnsafe.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140347DF0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1403481A0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     RtlpIsFrameInBoundsEx @ 0x140429A30 (RtlpIsFrameInBoundsEx.c)
 *     KeCheckStackAndTargetAddress @ 0x140439680 (KeCheckStackAndTargetAddress.c)
 *     KasanWrapperRtlRestoreContext @ 0x14044B640 (KasanWrapperRtlRestoreContext.c)
 *     RtlpGetStackLimitsEx @ 0x140456190 (RtlpGetStackLimitsEx.c)
 *     KasanHibernationGetStackLow @ 0x1405A62A0 (KasanHibernationGetStackLow.c)
 *     WheaIsAltContextAllocPossible @ 0x140650E50 (WheaIsAltContextAllocPossible.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     KiRspInIstStack @ 0x1403E2C50 (KiRspInIstStack.c)
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
