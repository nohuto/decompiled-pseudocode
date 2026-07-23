/*
 * XREFs of HalpInterruptReinitialize @ 0x140B6C0DC
 * Callers:
 *     HalpAcpiPostSleep @ 0x140B6BE80 (HalpAcpiPostSleep.c)
 * Callees:
 *     HalGetProcessorIdByNtNumber @ 0x1402B4970 (HalGetProcessorIdByNtNumber.c)
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     KeGetProcessorIndexFromNumber @ 0x140370440 (KeGetProcessorIndexFromNumber.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalStartDynamicProcessor @ 0x14053EFE0 (HalStartDynamicProcessor.c)
 *     Feature_ProcessorStartupCacheFlushOptimization__private_IsEnabledDeviceUsageNoInline @ 0x14053F994 (Feature_ProcessorStartupCacheFlushOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     HalStartNextProcessor @ 0x140543B40 (HalStartNextProcessor.c)
 *     HalpInterruptControllerInUse @ 0x140553CAC (HalpInterruptControllerInUse.c)
 *     HalpInterruptInitializeController @ 0x140553E14 (HalpInterruptInitializeController.c)
 *     HalpInterruptStartBlockedProcessors @ 0x140554E14 (HalpInterruptStartBlockedProcessors.c)
 *     HalpInterruptResetProcessorCacheFlushOptimization @ 0x140556EB4 (HalpInterruptResetProcessorCacheFlushOptimization.c)
 *     HalpIommuInitializeAll @ 0x140B70010 (HalpIommuInitializeAll.c)
 */

void __fastcall HalpInterruptReinitialize(__int64 a1, __int64 a2)
{
  ULONG_PTR *v2; // rbx
  int started; // r15d
  int v4; // ebp
  ULONG_PTR v5; // rdi
  int v6; // eax
  int v7; // eax
  ULONG_PTR v8; // rsi
  int v9; // eax
  unsigned __int8 CurrentIrql; // cl
  bool v11; // r12
  unsigned int v12; // edi
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int i; // ebx
  __int64 v16; // r14
  ULONG_PTR v17; // rsi
  unsigned int v18; // esi
  unsigned int v19; // ebx
  __int64 v20; // rdi
  ULONG_PTR BugCheckParameter4; // r14
  ULONG ProcessorIndexFromNumber; // eax
  ULONG_PTR v23; // rbp
  unsigned int v24; // [rsp+60h] [rbp+8h] BYREF

  v24 = 0;
  v2 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  started = 0;
  v4 = a1;
  while ( v2 != &HalpRegisteredInterruptControllers )
  {
    v5 = (ULONG_PTR)v2;
    v2 = (ULONG_PTR *)*v2;
    v6 = *(_DWORD *)(v5 + 248);
    if ( (v6 & 1) != 0 )
    {
      *(_DWORD *)(v5 + 248) = v6 & 0xFFFFFFFE;
      v7 = HalpInterruptInitializeController(v5, a2);
      v8 = v7;
      if ( v7 < 0 )
      {
        if ( HalpInterruptControllerInUse(v5) )
          KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, v5, v8);
      }
    }
  }
  LOBYTE(a1) = 1;
  v9 = HalpIommuInitializeAll(a1, 0LL);
  if ( v9 < 0 )
    KeBugCheckEx(0x5Cu, 0x500uLL, v9, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  v11 = HalpDisableInterrupts();
  if ( (v4 & 0x10000) != 0 )
  {
    v12 = HalpInterruptProcessorsStarted - HalpInterruptDynamicProcessorCount;
    if ( (unsigned int)Feature_ProcessorStartupCacheFlushOptimization__private_IsEnabledDeviceUsageNoInline() )
      HalpInterruptResetProcessorCacheFlushOptimization();
    if ( HalpInterruptBlockedProcessors )
      HalpInterruptStartBlockedProcessors(0);
    for ( i = 1; i < v12; ++i )
    {
      v16 = HalpHiberProcState + 1472LL * i;
      v17 = HalpInterruptProcessorState + ((unsigned __int64)i << 6);
      if ( (int)HalGetProcessorIdByNtNumber(i, (__int64)&v24, v13, v14) >= 0 )
        started = HalStartNextProcessor(v16, i, v24);
      if ( started != 4 )
        KeBugCheckEx(0x5Cu, 0x2001uLL, i, (unsigned int)HalpInterruptProcessorCount, v17);
    }
    v18 = HalpInterruptDynamicProcessorCount;
    v19 = 0;
    if ( HalpInterruptDynamicProcessorCount )
    {
      v20 = 0LL;
      do
      {
        BugCheckParameter4 = HalpInterruptDynamicProcessorState + (v20 << 6);
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(BugCheckParameter4 + 16));
        v23 = ProcessorIndexFromNumber;
        if ( (unsigned int)HalStartDynamicProcessor(
                             HalpHiberProcState + 1472LL * ProcessorIndexFromNumber,
                             ProcessorIndexFromNumber,
                             *(_DWORD *)BugCheckParameter4,
                             0xFFFFu) != 4 )
          KeBugCheckEx(0x5Cu, 0x2001uLL, v23, (unsigned int)HalpInterruptProcessorCount, BugCheckParameter4);
        ++v19;
        ++v20;
      }
      while ( v19 < v18 );
    }
    HalpInterruptProcessorRestarting = 0;
  }
  HalpInterruptPicStateIntact = 0;
  if ( v11 )
    _enable();
}
