/*
 * XREFs of HalpInterruptResetThisProcessor @ 0x140541D10
 * Callers:
 *     HalpInterruptRebootService @ 0x14055A1D0 (HalpInterruptRebootService.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     HalpPowerWriteResetCommand @ 0x140544B14 (HalpPowerWriteResetCommand.c)
 *     HalpInterruptInitializeController @ 0x1405564D4 (HalpInterruptInitializeController.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1405565EC (HalpInterruptInitializeLocalUnit.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __noreturn HalpInterruptResetThisProcessor()
{
  unsigned int Number; // esi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  ULONG_PTR *v5; // rdi
  ULONG_PTR v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  int v16; // eax

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
    v5 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
    while ( v5 != &HalpRegisteredInterruptControllers )
    {
      v6 = (ULONG_PTR)v5;
      v5 = (ULONG_PTR *)*v5;
      v7 = *(_DWORD *)(v6 + 248);
      if ( (v7 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 248) = v7 & 0xFFFFFFFE;
        HalpInterruptInitializeController(v6);
        if ( *(_QWORD *)(v6 + 176)
          && (v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v6 + 16), v8, v9, v10), v11 < 0) )
        {
          HalpInterruptSetProblemEx(v6, 35, v11, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 0xBF1u);
        }
        else
        {
          *(_DWORD *)(v6 + 248) &= ~1u;
        }
      }
    }
    KeStallExecutionProcessor(0x64u);
  }
  guard_dispatch_icall_no_overrides(v2, v1, v3, v4);
  v15 = HalpInterruptController;
  if ( *(_QWORD *)(HalpInterruptController + 168) )
  {
    v16 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), v12, v13, v14);
    if ( v16 < 0 )
      HalpInterruptSetProblemEx(v15, 34, v16, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 0xC22u);
  }
  HalpPowerWriteResetCommand(Number, (unsigned __int64)&HalpInterruptProcessorsStarted & -(__int64)(Number != 0));
  JUMPOUT(0x140541E68LL);
}
