/*
 * XREFs of HalpSetTimerAnyMode @ 0x140374A84
 * Callers:
 *     HalpVpptUpdatePhysicalTimer @ 0x1403729E8 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpTimerClockPowerChange @ 0x140544330 (HalpTimerClockPowerChange.c)
 * Callees:
 *     HalpTimerClearProblem @ 0x140374B2C (HalpTimerClearProblem.c)
 *     HalpSetTimer @ 0x140375A30 (HalpSetTimer.c)
 */

__int64 __fastcall HalpSetTimerAnyMode(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v7; // eax
  int v8; // r9d
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  int v13; // eax
  int v14; // eax
  int v15; // r9d
  __int64 v16; // [rsp+20h] [rbp-18h]

  v4 = a4;
  v16 = a4;
  LOBYTE(a4) = 1;
  v7 = HalpSetTimer(a1, 3, a2, a4, v16);
  v9 = (unsigned int)v7;
  if ( v7 >= 0
    || (LOBYTE(v8) = 1, v14 = HalpSetTimer(a1, 2, a2, v8, v4), v9 = (unsigned int)v14, v14 >= 0)
    || (LOBYTE(v15) = 1, v13 = HalpSetTimer(a1, 1, a2, v15, v4), v9 = (unsigned int)v13, v13 >= 0) )
  {
    HalpTimerClearProblem(a1, 17LL, v9);
    HalpTimerClearProblem(v10, 18LL, v11);
  }
  return (unsigned int)v9;
}
