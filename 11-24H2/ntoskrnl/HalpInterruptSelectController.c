/*
 * XREFs of HalpInterruptSelectController @ 0x140554CA8
 * Callers:
 *     HalpInitializeInterrupts @ 0x140C0FE18 (HalpInitializeInterrupts.c)
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     HalpFindInterruptController @ 0x1405539D4 (HalpFindInterruptController.c)
 *     HalpInterruptInitializeController @ 0x140553E14 (HalpInterruptInitializeController.c)
 */

__int64 __fastcall HalpInterruptSelectController(ULONG_PTR **a1)
{
  ULONG_PTR *InterruptController; // rax
  __int64 v3; // rdx
  ULONG_PTR *v4; // rbx
  int v5; // r10d
  ULONG_PTR *v6; // rax
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(); // rcx
  int v9; // eax

  InterruptController = HalpFindInterruptController(2);
  v4 = InterruptController;
  if ( InterruptController && (v5 = HalpInterruptInitializeController((ULONG_PTR)InterruptController, v3), v5 >= 0)
    || (v6 = HalpFindInterruptController(0), (v4 = v6) != 0LL)
    && (v5 = HalpInterruptInitializeController((ULONG_PTR)v6, v7), v5 >= 0) )
  {
    v8 = (__int64 (__fastcall *)())v4[13];
    *a1 = v4;
    if ( v8 )
      HalPerformEndOfInterruptAtController = v8;
    v9 = *((_DWORD *)v4 + 61);
    if ( (v9 & 1) != 0 )
    {
      HalpInterruptDirectedEoiModeDetermined = 1;
      if ( (v9 & 0x400) != 0 )
        HalpInterruptDirectedEoiModeEnabled = 1;
    }
  }
  else
  {
    HalpInterruptSetProblemEx(0LL, 2, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 0x16Bu);
  }
  return (unsigned int)v5;
}
