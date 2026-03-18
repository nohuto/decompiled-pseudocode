/*
 * XREFs of HalpInterruptSelectController @ 0x140554A68
 * Callers:
 *     HalpInitializeInterrupts @ 0x140BFCE18 (HalpInitializeInterrupts.c)
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x1404443B8 (HalpInterruptSetProblemEx.c)
 *     HalpFindInterruptController @ 0x140553794 (HalpFindInterruptController.c)
 *     HalpInterruptInitializeController @ 0x140553BD4 (HalpInterruptInitializeController.c)
 */

__int64 __fastcall HalpInterruptSelectController(ULONG_PTR **a1)
{
  ULONG_PTR *InterruptController; // rax
  ULONG_PTR *v3; // rbx
  int v4; // r10d
  ULONG_PTR *v5; // rax
  __int64 (__fastcall *v6)(); // rcx
  int v7; // eax

  InterruptController = HalpFindInterruptController(2);
  v3 = InterruptController;
  if ( InterruptController && (v4 = HalpInterruptInitializeController((ULONG_PTR)InterruptController), v4 >= 0)
    || (v5 = HalpFindInterruptController(0), (v3 = v5) != 0LL)
    && (v4 = HalpInterruptInitializeController((ULONG_PTR)v5), v4 >= 0) )
  {
    v6 = (__int64 (__fastcall *)())v3[13];
    *a1 = v3;
    if ( v6 )
      HalPerformEndOfInterruptAtController = v6;
    v7 = *((_DWORD *)v3 + 61);
    if ( (v7 & 1) != 0 )
    {
      HalpInterruptDirectedEoiModeDetermined = 1;
      if ( (v7 & 0x400) != 0 )
        HalpInterruptDirectedEoiModeEnabled = 1;
    }
  }
  else
  {
    HalpInterruptSetProblemEx(0LL, 2, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 0x16Bu);
  }
  return (unsigned int)v4;
}
