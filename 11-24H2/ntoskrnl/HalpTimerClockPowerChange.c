/*
 * XREFs of HalpTimerClockPowerChange @ 0x140544330
 * Callers:
 *     HalpTimerPowerChange @ 0x140545F80 (HalpTimerPowerChange.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpSetTimerAnyMode @ 0x140374A84 (HalpSetTimerAnyMode.c)
 *     HalpTimerClockStop @ 0x1404B1000 (HalpTimerClockStop.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalpTimerClockInitialize @ 0x1405442C0 (HalpTimerClockInitialize.c)
 *     KeGetNextClockTickDuration @ 0x1405B6610 (KeGetNextClockTickDuration.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

unsigned __int64 __fastcall HalpTimerClockPowerChange(ULONG_PTR BugCheckParameter3, char a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  ULONG_PTR v3; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rdi
  signed __int64 v6; // rax
  __int64 InternalData; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // r8
  char v11; // [rsp+48h] [rbp+10h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v11 = 0;
  if ( a2 )
    return HalpTimerClockInitialize();
  v3 = HalpAlwaysOnTimer;
  if ( !HalpAlwaysOnTimer )
    KeBugCheckEx(0x5Cu, 0x113uLL, 0x21uLL, BugCheckParameter3, 0LL);
  if ( KiClockTimerPerCpuTickScheduling
    || (result = (unsigned int)KiClockTimerOwner, CurrentPrcb->Number == (_DWORD)KiClockTimerOwner) )
  {
    HalpTimerClockStop();
    result = KeGetNextClockTickDuration(&v11);
    v5 = result;
    if ( !v11 )
    {
      v6 = 0x989680uLL / *(_QWORD *)(v3 + 192);
      if ( v6 < 5000 )
        v6 = 5000LL;
      if ( (__int64)v5 < v6 )
      {
        ++HalpTimerClockSwapViolationCount;
        v5 = v6;
      }
      if ( v5 > HalpTimerMaxIncrement )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0x25uLL, v5, 0LL);
      InternalData = HalpTimerGetInternalData(v3);
      v9 = guard_dispatch_icall_no_overrides(InternalData, v8);
      if ( v9 < 0 )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0xFuLL, v3, v9);
      result = HalpSetTimerAnyMode(v3, v5, v10, (__int64)&v12);
      if ( (result & 0x80000000) != 0LL )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0x23uLL, v3, (int)result);
      CurrentPrcb->PendingTickFlags |= 2u;
    }
  }
  return result;
}
