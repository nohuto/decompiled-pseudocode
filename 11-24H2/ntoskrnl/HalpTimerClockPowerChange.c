/*
 * XREFs of HalpTimerClockPowerChange @ 0x140546A70
 * Callers:
 *     HalpTimerPowerChange @ 0x1405486C0 (HalpTimerPowerChange.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpSetTimerAnyMode @ 0x1403BB348 (HalpSetTimerAnyMode.c)
 *     HalpTimerClockStop @ 0x1404B6820 (HalpTimerClockStop.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalpTimerClockInitialize @ 0x140546A00 (HalpTimerClockInitialize.c)
 *     KeGetNextClockTickDuration @ 0x1405B8FD0 (KeGetNextClockTickDuration.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // r8
  char v13; // [rsp+48h] [rbp+10h] BYREF
  char v14; // [rsp+50h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v13 = 0;
  if ( a2 )
    return HalpTimerClockInitialize();
  v3 = HalpAlwaysOnTimer;
  if ( !HalpAlwaysOnTimer )
    KeBugCheckEx(0x5Cu, 0x113uLL, 0x21uLL, BugCheckParameter3, 0LL);
  if ( KiClockTimerPerCpuTickScheduling
    || (result = (unsigned int)KiClockTimerOwner, CurrentPrcb->Number == (_DWORD)KiClockTimerOwner) )
  {
    HalpTimerClockStop();
    result = KeGetNextClockTickDuration(&v13);
    v5 = result;
    if ( !v13 )
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
      v11 = guard_dispatch_icall_no_overrides(InternalData, v8, v9, v10);
      if ( v11 < 0 )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0xFuLL, v3, v11);
      result = HalpSetTimerAnyMode(v3, v5, v12, (__int64)&v14);
      if ( (result & 0x80000000) != 0LL )
        KeBugCheckEx(0x5Cu, 0x113uLL, 0x23uLL, v3, (int)result);
      CurrentPrcb->PendingTickFlags |= 2u;
    }
  }
  return result;
}
