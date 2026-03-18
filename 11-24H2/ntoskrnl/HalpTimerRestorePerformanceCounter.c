/*
 * XREFs of HalpTimerRestorePerformanceCounter @ 0x1403D68C8
 * Callers:
 *     HalpAcpiPostSleep @ 0x140B6A5BC (HalpAcpiPostSleep.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403D69D4 (HalpTimerCalibratePerformanceCounter.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

LARGE_INTEGER __fastcall HalpTimerRestorePerformanceCounter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int Number; // esi
  ULONG_PTR v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  LARGE_INTEGER result; // rax
  ULONG_PTR BugCheckParameter2[3]; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  Number = KeGetPcr()->Prcb.Number;
  BugCheckParameter2[0] = HalpPerformanceCounter;
  BugCheckParameter2[1] = HalpAlwaysOnCounter;
  while ( (unsigned int)v4 < 2 )
  {
    v6 = BugCheckParameter2[v4];
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 224) & 0x10000) != 0 )
        v7 = *(_QWORD *)(v6 + 72) + *(_DWORD *)(v6 + 80) * KeGetPcr()->Prcb.Number;
      else
        v7 = *(_QWORD *)(v6 + 72);
      v8 = guard_dispatch_icall_no_overrides(v7, a2, a3, a4);
      if ( v8 < 0 )
      {
        *(_DWORD *)(v6 + 256) = v8;
        *(_QWORD *)(v6 + 264) = "minkernel\\hals\\lib\\timers\\common\\timer.c";
        HalpTimerLastProblem = 15;
        *(_DWORD *)(v6 + 252) = 15;
        *(_DWORD *)(v6 + 272) = 2272;
        KeBugCheckEx(0x5Cu, 0x110uLL, v6, 0xFuLL, v8);
      }
      if ( *(_DWORD *)(v6 + 228) != 5 && !Number )
        HalpTimerCalibratePerformanceCounter(v6, *(_QWORD *)(v6 + 16));
    }
    v4 = (unsigned int)(v4 + 1);
  }
  result = KeQueryPerformanceCounter(0LL);
  HalpTimerEarliestQpcAllowedToConvert = result.QuadPart;
  return result;
}
