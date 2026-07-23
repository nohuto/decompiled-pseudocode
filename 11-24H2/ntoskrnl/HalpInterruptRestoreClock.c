/*
 * XREFs of HalpInterruptRestoreClock @ 0x140540210
 * Callers:
 *     HalpPostSleepMP @ 0x140B70824 (HalpPostSleepMP.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14031B0F0 (HalpTimerGetInternalData.c)
 *     HalpInterruptLookupController @ 0x1403726E4 (HalpInterruptLookupController.c)
 *     HalpInterruptSetLineStateInternal @ 0x140372714 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptFindLines @ 0x140373298 (HalpInterruptFindLines.c)
 *     HalpInterruptApplyOverrides @ 0x1403732F0 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpInterruptRestoreClock()
{
  unsigned int v0; // edi
  __int64 i; // rbx
  ULONG_PTR *Lines; // rax
  ULONG_PTR *v3; // rax
  __int64 v4; // r9
  int v5; // eax
  __int64 InternalData; // rax
  __int64 v7; // rdx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  v0 = HalpTimerCriticalClockSourceCount;
  for ( i = 0LL; (unsigned int)i < v0; i = (unsigned int)(i + 1) )
  {
    v9 = HalpTimerCriticalClockSource[i];
    HalpInterruptApplyOverrides((__int64)&v9, 0LL, 0LL);
    Lines = HalpInterruptFindLines((int *)&v9);
    if ( !Lines )
    {
      HalpInterruptSetProblemEx(0LL, 18, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x7EBu);
      goto LABEL_9;
    }
    v3 = HalpInterruptLookupController(*((_DWORD *)Lines + 4));
    if ( !v3 )
    {
      HalpInterruptSetProblemEx(0LL, 17, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x7F9u);
LABEL_9:
      v5 = -1073741810;
LABEL_10:
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 2uLL, v5);
    }
    v5 = HalpInterruptSetLineStateInternal((__int64)v3, (__int64)&v9, *(_QWORD *)(v4 + 40));
    if ( v5 < 0 )
      goto LABEL_10;
  }
  InternalData = HalpTimerGetInternalData(HalpClockTimer);
  return guard_dispatch_icall_no_overrides(InternalData, v7);
}
