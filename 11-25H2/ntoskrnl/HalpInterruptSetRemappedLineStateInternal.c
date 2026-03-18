/*
 * XREFs of HalpInterruptSetRemappedLineStateInternal @ 0x14053EAF8
 * Callers:
 *     HalpInterruptEnableNmi @ 0x140443DC4 (HalpInterruptEnableNmi.c)
 *     HalpInterruptRemap @ 0x14053E694 (HalpInterruptRemap.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1405478D4 (HalpTimerInitializeHypervisorTimer.c)
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x1404443B8 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptFindLines @ 0x140445644 (HalpInterruptFindLines.c)
 *     HalpInterruptGetPriority @ 0x140446738 (HalpInterruptGetPriority.c)
 */

__int64 __fastcall HalpInterruptSetRemappedLineStateInternal(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v4; // ebx
  _QWORD *Lines; // rax
  __int64 v7; // rcx
  int Priority; // eax
  __int64 v9; // r11
  __int64 v10; // r9
  __int64 v11; // r10

  v4 = 0;
  Lines = HalpInterruptFindLines(a2);
  if ( Lines )
  {
    v7 = Lines[5];
    *(_OWORD *)v7 = *(_OWORD *)a3;
    *(_OWORD *)(v7 + 16) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v7 + 32) = *(_OWORD *)(a3 + 32);
    *(_QWORD *)(v7 + 48) = *(_QWORD *)(a3 + 48);
    Priority = HalpInterruptGetPriority(a1, *(_DWORD *)(a3 + 48));
    *(_DWORD *)(*(_QWORD *)(v9 + 40) + v10 + 52) = Priority;
    *(_BYTE *)(*(_QWORD *)(v9 + 48) + 16 * v11 + 12) = 1;
  }
  else
  {
    HalpInterruptSetProblemEx(a1, 18, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 0xCFBu);
    return (unsigned int)-1073741811;
  }
  return v4;
}
