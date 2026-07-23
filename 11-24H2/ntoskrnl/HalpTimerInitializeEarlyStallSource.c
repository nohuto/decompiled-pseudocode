/*
 * XREFs of HalpTimerInitializeEarlyStallSource @ 0x140538C4C
 * Callers:
 *     HalpTimerInitSystem @ 0x1405387E0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpTimerSetProblemEx @ 0x1404F71C4 (HalpTimerSetProblemEx.c)
 *     HalpTimerInitialize @ 0x140538BA8 (HalpTimerInitialize.c)
 *     HalpFindTimer @ 0x140544A60 (HalpFindTimer.c)
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x1405461A4 (HalpTimerRegisterBuiltinPluginsCommon.c)
 */

__int64 __fastcall HalpTimerInitializeEarlyStallSource(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r10d
  __int64 Timer; // rax
  __int64 v6; // rbx
  unsigned int v7; // eax
  bool v8; // zf
  unsigned __int64 v9; // rcx

  LODWORD(HalpRegisteredTimerCount) = 0;
  HalpTimerLoaderBlock = a1;
  qword_140FC35C8 = (__int64)&HalpRegisteredTimers;
  HalpRegisteredTimers = (ULONG_PTR)&HalpRegisteredTimers;
  v4 = HalpTimerRegisterBuiltinPluginsCommon(0LL, a2, a3);
  if ( v4 >= 0 )
  {
    if ( (_DWORD)HalpRegisteredTimerCount && (Timer = HalpFindTimer(0, 2, 0, 0, 1), (v6 = Timer) != 0) )
    {
      HalpPerformanceCounter = Timer;
      HalpStallCounter = Timer;
      v4 = HalpTimerInitialize(Timer);
      if ( v4 >= 0 )
      {
        v7 = *(_DWORD *)(v6 + 184) & 0xFFFFFFFB;
        v8 = *(_QWORD *)(v6 + 192) == 0LL;
        *(_DWORD *)(v6 + 184) = v7;
        if ( v8 )
        {
          *(_DWORD *)(v6 + 184) = v7 | 8;
          v9 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2496LL);
          *(_QWORD *)(v6 + 192) = v9;
          if ( v9 < 0x3E8 )
          {
            *(_QWORD *)(v6 + 192) = 15625000LL;
            HalpTimerSetProblemEx(v6, 40, 0, (__int64)"minkernel\\hals\\lib\\timers\\common\\timer.c", 0x4A9u);
          }
        }
        else
        {
          HalpTimerProcessorFrequencyKnown = 1;
        }
      }
    }
    else
    {
      v4 = -1073741823;
      HalpTimerLastProblem = 21;
    }
  }
  else
  {
    HalpTimerLastProblem = 14;
  }
  return (unsigned int)v4;
}
