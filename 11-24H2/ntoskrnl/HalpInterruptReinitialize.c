/*
 * XREFs of HalpInterruptReinitialize @ 0x140B6A818
 * Callers:
 *     HalpAcpiPostSleep @ 0x140B6A5BC (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     KeGetProcessorIndexFromNumber @ 0x140352BB0 (KeGetProcessorIndexFromNumber.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403B88E0 (HalGetProcessorIdByNtNumber.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalStartDynamicProcessor @ 0x1405416E0 (HalStartDynamicProcessor.c)
 *     HalStartNextProcessor @ 0x140546280 (HalStartNextProcessor.c)
 *     HalpInterruptControllerInUse @ 0x14055636C (HalpInterruptControllerInUse.c)
 *     HalpInterruptInitializeController @ 0x1405564D4 (HalpInterruptInitializeController.c)
 *     HalpInterruptStartBlockedProcessors @ 0x1405574D4 (HalpInterruptStartBlockedProcessors.c)
 *     HalpIommuInitializeAll @ 0x140B6B2A0 (HalpIommuInitializeAll.c)
 */

char __fastcall HalpInterruptReinitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  ULONG_PTR *v5; // rdi
  int v6; // r15d
  ULONG_PTR v7; // rbx
  int v8; // eax
  int v9; // eax
  ULONG_PTR BugCheckParameter4; // rsi
  int v11; // eax
  unsigned __int8 CurrentIrql; // cl
  int ProcessorIdByNtNumber; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // r12
  unsigned int v17; // edi
  unsigned int i; // ebx
  __int64 v19; // r14
  ULONG_PTR v20; // rsi
  unsigned int v21; // esi
  unsigned int j; // ebx
  ULONG_PTR v23; // rdi
  ULONG ProcessorIndexFromNumber; // eax
  ULONG_PTR v25; // rbp
  unsigned int v27; // [rsp+60h] [rbp+8h] BYREF

  v27 = 0;
  v4 = a1;
  v5 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  v6 = 0;
  while ( v5 != &HalpRegisteredInterruptControllers )
  {
    v7 = (ULONG_PTR)v5;
    v5 = (ULONG_PTR *)*v5;
    v8 = *(_DWORD *)(v7 + 248);
    if ( (v8 & 1) != 0 )
    {
      *(_DWORD *)(v7 + 248) = v8 & 0xFFFFFFFE;
      v9 = HalpInterruptInitializeController(v7, a2, a3, a4);
      BugCheckParameter4 = v9;
      if ( v9 < 0 )
      {
        if ( HalpInterruptControllerInUse(v7) )
          KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, v7, BugCheckParameter4);
      }
    }
  }
  LOBYTE(a1) = 1;
  v11 = HalpIommuInitializeAll(a1, 0LL);
  if ( v11 < 0 )
    KeBugCheckEx(0x5Cu, 0x500uLL, v11, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  LOBYTE(ProcessorIdByNtNumber) = HalpDisableInterrupts();
  v16 = ProcessorIdByNtNumber;
  if ( (v4 & 0x10000) != 0 )
  {
    v17 = HalpInterruptProcessorsStarted - HalpInterruptDynamicProcessorCount;
    if ( HalpInterruptBlockedProcessors )
      LOBYTE(ProcessorIdByNtNumber) = HalpInterruptStartBlockedProcessors(0);
    for ( i = 1; i < v17; ++i )
    {
      v19 = HalpHiberProcState + 1472LL * i;
      v20 = HalpInterruptProcessorState + ((unsigned __int64)i << 6);
      ProcessorIdByNtNumber = HalGetProcessorIdByNtNumber(i, (__int64)&v27, v14, v15);
      if ( ProcessorIdByNtNumber >= 0 )
      {
        ProcessorIdByNtNumber = HalStartNextProcessor(v19, i, v27);
        v6 = ProcessorIdByNtNumber;
      }
      if ( v6 != 4 )
        KeBugCheckEx(0x5Cu, 0x2001uLL, i, (unsigned int)HalpInterruptProcessorCount, v20);
    }
    v21 = HalpInterruptDynamicProcessorCount;
    for ( j = 0; j < v21; ++j )
    {
      v23 = HalpInterruptDynamicProcessorState + ((unsigned __int64)j << 6);
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v23 + 16));
      v25 = ProcessorIndexFromNumber;
      ProcessorIdByNtNumber = HalStartDynamicProcessor(
                                HalpHiberProcState + 1472LL * ProcessorIndexFromNumber,
                                ProcessorIndexFromNumber,
                                *(_DWORD *)v23,
                                0xFFFFu);
      if ( ProcessorIdByNtNumber != 4 )
        KeBugCheckEx(0x5Cu, 0x2001uLL, v25, (unsigned int)HalpInterruptProcessorCount, v23);
    }
    HalpInterruptProcessorRestarting = 0;
  }
  HalpInterruptPicStateIntact = 0;
  if ( v16 )
    _enable();
  return ProcessorIdByNtNumber;
}
