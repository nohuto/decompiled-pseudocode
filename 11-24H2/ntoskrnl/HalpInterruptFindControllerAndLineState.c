/*
 * XREFs of HalpInterruptFindControllerAndLineState @ 0x1403735D0
 * Callers:
 *     HalpInterruptSetRemappedDestinationHv @ 0x140373848 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptGetRemappedLineState @ 0x14037463C (HalpInterruptGetRemappedLineState.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x14037265C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x1403726E4 (HalpInterruptLookupController.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptFindControllerAndLineState(unsigned int a1, __int64 *a2, __int64 *a3)
{
  _DWORD *LinesForGsiRange; // rax
  __int64 v6; // r10
  ULONG_PTR *v7; // rax
  int v8; // r8d
  ULONG_PTR *v9; // r11
  ULONG_PTR *v10; // rcx
  ULONG_PTR *v11; // rax
  ULONG_PTR *v12; // rdx
  int v13; // r9d
  unsigned int v14; // r8d
  unsigned int v15; // ecx

  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(a1, a1 + 1);
  v6 = 0LL;
  if ( LinesForGsiRange )
  {
    v7 = HalpInterruptLookupController(LinesForGsiRange[4]);
    v9 = v7;
    if ( v7 )
    {
      v10 = v7 + 33;
      v11 = (ULONG_PTR *)v7[33];
      while ( v11 != v10 )
      {
        v12 = v11;
        v11 = (ULONG_PTR *)*v11;
        v13 = *((_DWORD *)v12 + 5);
        if ( v13 <= v8 && *((_DWORD *)v12 + 6) > v8 )
        {
          v14 = v8 - v13;
          if ( v12 )
          {
            *a2 = (__int64)v9;
            v15 = v6;
            v6 = v12[5] + 56LL * v14;
            goto LABEL_9;
          }
          break;
        }
      }
      HalpInterruptSetProblemEx(
        (_DWORD)v9,
        18,
        0,
        (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
        657);
    }
    else
    {
      HalpInterruptLastProblemController = v6;
      HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      HalpInterruptLastProblem = 17;
      HalpInterruptLastProblemStatus = v6;
      HalpInterruptLastProblemLine = 641;
    }
    v15 = -1073741275;
  }
  else
  {
    HalpInterruptLastProblemController = 0LL;
    HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    v15 = -1073741811;
    HalpInterruptLastProblem = 18;
    HalpInterruptLastProblemStatus = 0;
    HalpInterruptLastProblemLine = 628;
  }
  *a2 = v6;
LABEL_9:
  *a3 = v6;
  return v15;
}
