/*
 * XREFs of HalpTimerReinitializeThisProcessor @ 0x140538F60
 * Callers:
 *     HalpPostSleepMP @ 0x140B70824 (HalpPostSleepMP.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpTimerSetProblemEx @ 0x1404F71C4 (HalpTimerSetProblemEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void HalpTimerReinitializeThisProcessor()
{
  ULONG_PTR i; // rbx
  __int64 InternalData; // rax
  __int64 v2; // rdx
  int v3; // r8d
  unsigned int v4; // r10d
  ULONG_PTR BugCheckParameter4; // r8

  for ( i = HalpRegisteredTimers; (ULONG_PTR *)i != &HalpRegisteredTimers; i = *(_QWORD *)i )
  {
    if ( (*(_DWORD *)(i + 224) & 1) != 0 && (*(_DWORD *)(i + 184) & 5) == 4 )
    {
      InternalData = HalpTimerGetInternalData(i);
      v3 = guard_dispatch_icall_no_overrides(InternalData, v2);
      if ( v3 < 0 )
      {
        HalpTimerSetProblemEx(i, 15, v3, (__int64)"minkernel\\hals\\lib\\timers\\common\\timer.c", 0xC32u);
        KeBugCheckEx(v4 + 77, 0x110uLL, i, v4, BugCheckParameter4);
      }
    }
  }
}
