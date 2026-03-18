/*
 * XREFs of HalpInterruptSelectController @ 0x140557368
 * Callers:
 *     HalpInitializeInterrupts @ 0x140C0DE18 (HalpInitializeInterrupts.c)
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     HalpFindInterruptController @ 0x140556094 (HalpFindInterruptController.c)
 *     HalpInterruptInitializeController @ 0x1405564D4 (HalpInterruptInitializeController.c)
 */

__int64 __fastcall HalpInterruptSelectController(ULONG_PTR **a1)
{
  ULONG_PTR *InterruptController; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  ULONG_PTR *v6; // rbx
  int v7; // r10d
  ULONG_PTR *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 (__fastcall *v12)(); // rcx
  int v13; // eax

  InterruptController = HalpFindInterruptController(2);
  v6 = InterruptController;
  if ( InterruptController
    && (v7 = HalpInterruptInitializeController((ULONG_PTR)InterruptController, v3, v4, v5), v7 >= 0)
    || (v8 = HalpFindInterruptController(0), (v6 = v8) != 0LL)
    && (v7 = HalpInterruptInitializeController((ULONG_PTR)v8, v9, v10, v11), v7 >= 0) )
  {
    v12 = (__int64 (__fastcall *)())v6[13];
    *a1 = v6;
    if ( v12 )
      HalPerformEndOfInterruptAtController = v12;
    v13 = *((_DWORD *)v6 + 61);
    if ( (v13 & 1) != 0 )
    {
      HalpInterruptDirectedEoiModeDetermined = 1;
      if ( (v13 & 0x400) != 0 )
        HalpInterruptDirectedEoiModeEnabled = 1;
    }
  }
  else
  {
    HalpInterruptSetProblemEx(0LL, 2, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 0x16Bu);
  }
  return (unsigned int)v7;
}
