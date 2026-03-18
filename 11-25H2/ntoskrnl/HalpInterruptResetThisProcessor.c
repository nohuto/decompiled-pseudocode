/*
 * XREFs of HalpInterruptResetThisProcessor @ 0x14053F4E0
 * Callers:
 *     HalpInterruptRebootService @ 0x1405578D0 (HalpInterruptRebootService.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140278EE0 (KeStallExecutionProcessor.c)
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     HalpInterruptSetProblemEx @ 0x1404443B8 (HalpInterruptSetProblemEx.c)
 *     HalpPowerWriteResetCommand @ 0x140542254 (HalpPowerWriteResetCommand.c)
 *     HalpInterruptInitializeController @ 0x140553BD4 (HalpInterruptInitializeController.c)
 *     HalpInterruptInitializeLocalUnit @ 0x140553CEC (HalpInterruptInitializeLocalUnit.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __noreturn HalpInterruptResetThisProcessor()
{
  unsigned int Number; // esi
  __int64 v1; // rcx
  ULONG_PTR *v2; // rdi
  ULONG_PTR v3; // rbx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rbx
  int v7; // eax

  Number = KeGetPcr()->Prcb.Number;
  HalpDisableInterrupts();
  HalpInterruptInitializeLocalUnit(HalpInterruptController);
  HalpInterruptSetProblemEx(0LL, 12, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\start.c", 0x3E4u);
  if ( !Number )
  {
    _InterlockedDecrement(&HalpInterruptProcessorsStarted);
    while ( _InterlockedExchangeAdd(&HalpInterruptProcessorsStarted, 0) )
      _mm_pause();
    KeStallExecutionProcessor(0x64u);
    v2 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
    while ( v2 != &HalpRegisteredInterruptControllers )
    {
      v3 = (ULONG_PTR)v2;
      v2 = (ULONG_PTR *)*v2;
      v4 = *(_DWORD *)(v3 + 248);
      if ( (v4 & 1) != 0 )
      {
        *(_DWORD *)(v3 + 248) = v4 & 0xFFFFFFFE;
        HalpInterruptInitializeController(v3);
        if ( *(_QWORD *)(v3 + 176) && (v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 16)), v5 < 0) )
          HalpInterruptSetProblemEx(v3, 35, v5, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 0xBF1u);
        else
          *(_DWORD *)(v3 + 248) &= ~1u;
      }
    }
    KeStallExecutionProcessor(0x64u);
  }
  guard_dispatch_icall_no_overrides(v1);
  v6 = HalpInterruptController;
  if ( *(_QWORD *)(HalpInterruptController + 168) )
  {
    v7 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16));
    if ( v7 < 0 )
      HalpInterruptSetProblemEx(v6, 34, v7, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 0xC22u);
  }
  HalpPowerWriteResetCommand(Number, (unsigned __int64)&HalpInterruptProcessorsStarted & -(__int64)(Number != 0));
  JUMPOUT(0x14053F638LL);
}
