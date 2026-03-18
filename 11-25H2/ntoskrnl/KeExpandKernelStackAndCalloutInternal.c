/*
 * XREFs of KeExpandKernelStackAndCalloutInternal @ 0x140347C90
 * Callers:
 *     EtwpTraceStackWalk @ 0x140309D40 (EtwpTraceStackWalk.c)
 *     KeExpandKernelStackAndCalloutEx @ 0x140347C60 (KeExpandKernelStackAndCalloutEx.c)
 *     EtwpExpandStackAndWalkFrameChain @ 0x140348E10 (EtwpExpandStackAndWalkFrameChain.c)
 *     MiSwapStackPage @ 0x1403DBBA8 (MiSwapStackPage.c)
 *     MiDoStackCopy @ 0x14047FF80 (MiDoStackCopy.c)
 *     KeExpandKernelStackAndCallout @ 0x140489A50 (KeExpandKernelStackAndCallout.c)
 * Callees:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140347DF0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     RtlWalkFrameChain @ 0x140348060 (RtlWalkFrameChain.c)
 *     ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140348680 (-SmStDirectReadCallout@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KeBugCheck @ 0x1404F9260 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KiFatalFilter @ 0x1405AD560 (KiFatalFilter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     Callout @ 0x140A29C30 (Callout.c)
 */

__int64 __fastcall KeExpandKernelStackAndCalloutInternal(
        EXPAND_STACK_CALLOUT *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        int a4,
        __int64 a5)
{
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned __int8 CurrentIrql; // si
  $337297D4DB492EF8AE6D69E6DE6EB829 *v10; // rbx
  char v11; // r15
  unsigned __int8 v12; // al

  result = KiExpandKernelStackAndCalloutSwitchStack((_DWORD)BugCheckParameter2, BugCheckParameter3, a3, a4, a5);
  if ( (_DWORD)result == -1073740661 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v10 = &KeGetCurrentThread()->125;
    if ( (v10->SameThreadTransientFlags & 1) != 0 )
    {
      v11 = 1;
    }
    else
    {
      v10->SameThreadTransientFlags |= 1u;
      v11 = 0;
    }
    if ( (char *)BugCheckParameter2 == (char *)EtwpExpandedStackWalk )
    {
      *(_DWORD *)(BugCheckParameter3 + 32) = RtlWalkFrameChain(
                                               *(PVOID **)BugCheckParameter3,
                                               *(_DWORD *)(BugCheckParameter3 + 24),
                                               *(_DWORD *)(BugCheckParameter3 + 28));
    }
    else if ( BugCheckParameter2 == SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout )
    {
      SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout((PVOID)BugCheckParameter3);
    }
    else if ( BugCheckParameter2 == Callout )
    {
      Callout((PVOID)BugCheckParameter3);
    }
    else
    {
      guard_dispatch_icall_no_overrides(BugCheckParameter3, v8);
    }
    if ( !v11 )
      v10->SameThreadTransientFlags &= ~1u;
    if ( KeGetCurrentIrql() != CurrentIrql )
    {
      v12 = KeGetCurrentIrql();
      KeBugCheckEx(
        0xC8u,
        ((CurrentIrql | ((unsigned __int64)v12 << 8)) << 8) | 2,
        (ULONG_PTR)BugCheckParameter2,
        BugCheckParameter3,
        0LL);
    }
    return 0LL;
  }
  return result;
}
