/*
 * XREFs of HalpInterruptRestoreClock @ 0x140540090
 * Callers:
 *     HalpPostSleepMP @ 0x140B58A3C (HalpPostSleepMP.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14027A960 (HalpTimerGetInternalData.c)
 *     HalpInterruptSetProblemEx @ 0x1404443B8 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptApplyOverrides @ 0x140445554 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptFindLines @ 0x140445644 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x140445B74 (HalpInterruptLookupController.c)
 *     HalpInterruptSetLineStateInternal @ 0x140445BA4 (HalpInterruptSetLineStateInternal.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  v0 = HalpTimerCriticalClockSourceCount;
  for ( i = 0LL; (unsigned int)i < v0; i = (unsigned int)(i + 1) )
  {
    v8 = HalpTimerCriticalClockSource[i];
    HalpInterruptApplyOverrides((__int64)&v8, 0LL, 0LL);
    Lines = HalpInterruptFindLines((unsigned int *)&v8);
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
    v5 = HalpInterruptSetLineStateInternal((__int64)v3, (__int64)&v8, *(_QWORD *)(v4 + 40));
    if ( v5 < 0 )
      goto LABEL_10;
  }
  InternalData = HalpTimerGetInternalData(HalpClockTimer);
  return guard_dispatch_icall_no_overrides(InternalData);
}
