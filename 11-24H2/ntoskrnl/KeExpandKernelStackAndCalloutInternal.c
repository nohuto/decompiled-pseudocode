/*
 * XREFs of KeExpandKernelStackAndCalloutInternal @ 0x140232D30
 * Callers:
 *     KeExpandKernelStackAndCallout @ 0x140231040 (KeExpandKernelStackAndCallout.c)
 *     KeExpandKernelStackAndCalloutEx @ 0x140232D00 (KeExpandKernelStackAndCalloutEx.c)
 *     EtwpExpandStackAndWalkFrameChain @ 0x1403DD360 (EtwpExpandStackAndWalkFrameChain.c)
 *     EtwpTraceStackWalk @ 0x1403DDBA0 (EtwpTraceStackWalk.c)
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     MiDoStackCopy @ 0x14047B710 (MiDoStackCopy.c)
 * Callees:
 *     ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140231CC0 (-SmStDirectReadCallout@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140232E90 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     RtlWalkFrameChain @ 0x140233100 (RtlWalkFrameChain.c)
 *     KeBugCheck @ 0x1404F9230 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KiFatalFilter @ 0x1405ADE60 (KiFatalFilter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     Callout @ 0x140A24720 (Callout.c)
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
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 CurrentIrql; // si
  $337297D4DB492EF8AE6D69E6DE6EB829 *v12; // rbx
  char v13; // r15
  unsigned __int8 v14; // al

  result = KiExpandKernelStackAndCalloutSwitchStack((_DWORD)BugCheckParameter2, BugCheckParameter3, a3, a4, a5);
  if ( (_DWORD)result == -1073740661 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v12 = &KeGetCurrentThread()->125;
    if ( (v12->SameThreadTransientFlags & 1) != 0 )
    {
      v13 = 1;
    }
    else
    {
      v12->SameThreadTransientFlags |= 1u;
      v13 = 0;
    }
    if ( (char *)BugCheckParameter2 == (char *)EtwpExpandedStackWalk )
    {
      *(_DWORD *)(BugCheckParameter3 + 32) = RtlWalkFrameChain(
                                               *(PVOID **)BugCheckParameter3,
                                               *(_DWORD *)(BugCheckParameter3 + 24),
                                               *(_DWORD *)(BugCheckParameter3 + 28));
    }
    else if ( (char *)BugCheckParameter2 == (char *)SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout )
    {
      SMKM_STORE<SM_TRAITS>::SmStDirectReadCallout((PVOID)BugCheckParameter3);
    }
    else if ( BugCheckParameter2 == Callout )
    {
      Callout((PVOID)BugCheckParameter3);
    }
    else
    {
      guard_dispatch_icall_no_overrides(BugCheckParameter3, v8, v9, v10);
    }
    if ( !v13 )
      v12->SameThreadTransientFlags &= ~1u;
    if ( KeGetCurrentIrql() != CurrentIrql )
    {
      v14 = KeGetCurrentIrql();
      KeBugCheckEx(
        0xC8u,
        ((CurrentIrql | ((unsigned __int64)v14 << 8)) << 8) | 2,
        (ULONG_PTR)BugCheckParameter2,
        BugCheckParameter3,
        0LL);
    }
    return 0LL;
  }
  return result;
}
