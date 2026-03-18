/*
 * XREFs of HalpInterruptRestoreClock @ 0x1405428C0
 * Callers:
 *     HalpPostSleepMP @ 0x140B6886C (HalpPostSleepMP.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14033BC10 (HalpTimerGetInternalData.c)
 *     HalpInterruptApplyOverrides @ 0x1403B96C4 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptFindLines @ 0x1403B97B4 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x1403B9D14 (HalpInterruptLookupController.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403B9D44 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpInterruptRestoreClock()
{
  unsigned int v0; // edi
  __int64 i; // rbx
  _QWORD *Lines; // rax
  ULONG_PTR *v3; // rax
  __int64 v4; // r9
  int v5; // eax
  __int64 InternalData; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  v0 = HalpTimerCriticalClockSourceCount;
  for ( i = 0LL; (unsigned int)i < v0; i = (unsigned int)(i + 1) )
  {
    v11 = HalpTimerCriticalClockSource[i];
    HalpInterruptApplyOverrides((__int64)&v11, 0LL, 0LL);
    Lines = HalpInterruptFindLines((unsigned int *)&v11);
    if ( !Lines )
    {
      HalpInterruptSetProblemEx(0LL, 18, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x7E8u);
      goto LABEL_9;
    }
    v3 = HalpInterruptLookupController(*((_DWORD *)Lines + 4));
    if ( !v3 )
    {
      HalpInterruptSetProblemEx(0LL, 17, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x7F6u);
LABEL_9:
      v5 = -1073741810;
LABEL_10:
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 2uLL, v5);
    }
    v5 = HalpInterruptSetLineStateInternal((__int64)v3, (__int64)&v11, *(_QWORD *)(v4 + 40), v4);
    if ( v5 < 0 )
      goto LABEL_10;
  }
  InternalData = HalpTimerGetInternalData(HalpClockTimer);
  return guard_dispatch_icall_no_overrides(InternalData, v7, v8, v9);
}
