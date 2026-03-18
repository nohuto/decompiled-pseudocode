/*
 * XREFs of HalpInterruptFindControllerAndLineState @ 0x1403B9540
 * Callers:
 *     HalpInterruptSetRemappedDestinationHv @ 0x1403B9368 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptGetRemappedLineState @ 0x1403BACD0 (HalpInterruptGetRemappedLineState.c)
 * Callees:
 *     HalpInterruptFindLinesForGsiRange @ 0x1403B9C8C (HalpInterruptFindLinesForGsiRange.c)
 *     HalpInterruptLookupController @ 0x1403B9D14 (HalpInterruptLookupController.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptFindControllerAndLineState(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 LinesForGsiRange; // rax
  __int64 v6; // r10
  __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // r11
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  int v13; // r9d
  unsigned int v14; // r8d
  unsigned int v15; // ecx

  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(a1, (unsigned int)(a1 + 1));
  v6 = 0LL;
  if ( LinesForGsiRange )
  {
    v7 = HalpInterruptLookupController(*(unsigned int *)(LinesForGsiRange + 16));
    v9 = v7;
    if ( v7 )
    {
      v10 = (_QWORD *)(v7 + 264);
      v11 = *(_QWORD **)(v7 + 264);
      while ( v11 != v10 )
      {
        v12 = v11;
        v11 = (_QWORD *)*v11;
        v13 = *((_DWORD *)v12 + 5);
        if ( v13 <= v8 && *((_DWORD *)v12 + 6) > v8 )
        {
          v14 = v8 - v13;
          if ( v12 )
          {
            *a2 = v9;
            v15 = v6;
            v6 = v12[5] + 56LL * v14;
            goto LABEL_9;
          }
          break;
        }
      }
      HalpInterruptSetProblemEx(v9, 18, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 657);
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
