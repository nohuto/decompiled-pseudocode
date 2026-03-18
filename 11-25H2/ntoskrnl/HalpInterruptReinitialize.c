/*
 * XREFs of HalpInterruptReinitialize @ 0x140B5AD18
 * Callers:
 *     HalpAcpiPostSleep @ 0x140B5AABC (HalpAcpiPostSleep.c)
 * Callees:
 *     HalGetProcessorIdByNtNumber @ 0x140201680 (HalGetProcessorIdByNtNumber.c)
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     KeGetProcessorIndexFromNumber @ 0x1403B30F0 (KeGetProcessorIndexFromNumber.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalStartDynamicProcessor @ 0x14053EEB0 (HalStartDynamicProcessor.c)
 *     HalStartNextProcessor @ 0x140543990 (HalStartNextProcessor.c)
 *     HalpInterruptControllerInUse @ 0x140553A6C (HalpInterruptControllerInUse.c)
 *     HalpInterruptInitializeController @ 0x140553BD4 (HalpInterruptInitializeController.c)
 *     HalpInterruptStartBlockedProcessors @ 0x140554BD4 (HalpInterruptStartBlockedProcessors.c)
 *     HalpIommuInitializeAll @ 0x140B5B7A0 (HalpIommuInitializeAll.c)
 */

char __fastcall HalpInterruptReinitialize(__int64 a1)
{
  int v1; // ebp
  ULONG_PTR *v2; // rdi
  int v3; // r15d
  ULONG_PTR v4; // rbx
  int v5; // eax
  int v6; // eax
  ULONG_PTR BugCheckParameter4; // rsi
  int v8; // eax
  unsigned __int8 CurrentIrql; // cl
  int ProcessorIdByNtNumber; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // r12
  unsigned int v14; // edi
  unsigned int i; // ebx
  __int64 v16; // r14
  ULONG_PTR v17; // rsi
  unsigned int v18; // esi
  unsigned int j; // ebx
  ULONG_PTR v20; // rdi
  ULONG ProcessorIndexFromNumber; // eax
  ULONG_PTR v22; // rbp
  unsigned int v24; // [rsp+60h] [rbp+8h] BYREF

  v24 = 0;
  v1 = a1;
  v2 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  v3 = 0;
  while ( v2 != &HalpRegisteredInterruptControllers )
  {
    v4 = (ULONG_PTR)v2;
    v2 = (ULONG_PTR *)*v2;
    v5 = *(_DWORD *)(v4 + 248);
    if ( (v5 & 1) != 0 )
    {
      *(_DWORD *)(v4 + 248) = v5 & 0xFFFFFFFE;
      v6 = HalpInterruptInitializeController(v4);
      BugCheckParameter4 = v6;
      if ( v6 < 0 )
      {
        if ( HalpInterruptControllerInUse(v4) )
          KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, v4, BugCheckParameter4);
      }
    }
  }
  LOBYTE(a1) = 1;
  v8 = HalpIommuInitializeAll(a1, 0LL);
  if ( v8 < 0 )
    KeBugCheckEx(0x5Cu, 0x500uLL, v8, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  LOBYTE(ProcessorIdByNtNumber) = HalpDisableInterrupts();
  v13 = ProcessorIdByNtNumber;
  if ( (v1 & 0x10000) != 0 )
  {
    v14 = HalpInterruptProcessorsStarted - HalpInterruptDynamicProcessorCount;
    if ( HalpInterruptBlockedProcessors )
      LOBYTE(ProcessorIdByNtNumber) = HalpInterruptStartBlockedProcessors(0);
    for ( i = 1; i < v14; ++i )
    {
      v16 = HalpHiberProcState + 1472LL * i;
      v17 = HalpInterruptProcessorState + ((unsigned __int64)i << 6);
      ProcessorIdByNtNumber = HalGetProcessorIdByNtNumber(i, (__int64)&v24, v11, v12);
      if ( ProcessorIdByNtNumber >= 0 )
      {
        ProcessorIdByNtNumber = HalStartNextProcessor(v16, i, v24);
        v3 = ProcessorIdByNtNumber;
      }
      if ( v3 != 4 )
        KeBugCheckEx(0x5Cu, 0x2001uLL, i, (unsigned int)HalpInterruptProcessorCount, v17);
    }
    v18 = HalpInterruptDynamicProcessorCount;
    for ( j = 0; j < v18; ++j )
    {
      v20 = HalpInterruptDynamicProcessorState + ((unsigned __int64)j << 6);
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v20 + 16));
      v22 = ProcessorIndexFromNumber;
      ProcessorIdByNtNumber = HalStartDynamicProcessor(
                                HalpHiberProcState + 1472LL * ProcessorIndexFromNumber,
                                ProcessorIndexFromNumber,
                                *(_DWORD *)v20,
                                0xFFFFu);
      if ( ProcessorIdByNtNumber != 4 )
        KeBugCheckEx(0x5Cu, 0x2001uLL, v22, (unsigned int)HalpInterruptProcessorCount, v20);
    }
    HalpInterruptProcessorRestarting = 0;
  }
  HalpInterruptPicStateIntact = 0;
  if ( v13 )
    _enable();
  return ProcessorIdByNtNumber;
}
