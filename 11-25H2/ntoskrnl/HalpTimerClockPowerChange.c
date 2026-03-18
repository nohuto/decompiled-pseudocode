/*
 * XREFs of HalpTimerClockPowerChange @ 0x140544180
 * Callers:
 *     HalpTimerPowerChange @ 0x140545DD0 (HalpTimerPowerChange.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     HalpSetTimerAnyMode @ 0x14044710C (HalpSetTimerAnyMode.c)
 *     HalpTimerClockStop @ 0x1404B6D50 (HalpTimerClockStop.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalpTimerClockInitialize @ 0x140544110 (HalpTimerClockInitialize.c)
 *     KeGetNextClockTickDuration @ 0x1405B5190 (KeGetNextClockTickDuration.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

ULONG_PTR __fastcall HalpTimerClockPowerChange(ULONG_PTR BugCheckParameter3, char a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  ULONG_PTR v3; // rbx
  ULONG_PTR result; // rax
  ULONG_PTR v5; // rdi
  signed __int64 v6; // rax
  __int64 InternalData; // rax
  int v8; // eax
  __int64 v9; // r8
  char v10; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  if ( a2 )
    return HalpTimerClockInitialize();
  v3 = HalpAlwaysOnTimer;
  if ( !HalpAlwaysOnTimer )
    KeBugCheckEx(0x5Cu, 0x113uLL, 0x21uLL, BugCheckParameter3, 0LL);
  if ( KiClockTimerPerCpuTickScheduling
    || (result = (unsigned int)KiClockTimerOwner, CurrentPrcb->Number == (_DWORD)KiClockTimerOwner) )
  {
    HalpTimerClockStop();
    result = KeGetNextClockTickDuration(&v10);
    v5 = result;
    if ( !v10 )
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
      v8 = guard_dispatch_icall_no_overrides(InternalData);
      if ( v8 < 0 )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0xFuLL, v3, v8);
      result = HalpSetTimerAnyMode(v3, (unsigned int)v5, v9, &v11);
      if ( (result & 0x80000000) != 0LL )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0x23uLL, v3, (int)result);
      CurrentPrcb->PendingTickFlags |= 2u;
    }
  }
  return result;
}
