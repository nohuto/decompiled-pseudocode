/*
 * XREFs of HalpInterruptFindLines @ 0x140373298
 * Callers:
 *     HalpInterruptEnablePerformanceEvents @ 0x140373A20 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptEnableNmi @ 0x14049E4CC (HalpInterruptEnableNmi.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14053EC28 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x14053FC20 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptIsCmciSupported @ 0x14053FDEC (HalpInterruptIsCmciSupported.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x14053FE34 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpInterruptRestoreClock @ 0x140540210 (HalpInterruptRestoreClock.c)
 *     HalpConnectThermalInterrupt @ 0x140553810 (HalpConnectThermalInterrupt.c)
 *     HalpInitializeCmciVector @ 0x140553A10 (HalpInitializeCmciVector.c)
 *     HalpInitializeDeferredErrorVector @ 0x140553AC0 (HalpInitializeDeferredErrorVector.c)
 *     HalpApicInitializeIoUnit @ 0x1405663E0 (HalpApicInitializeIoUnit.c)
 *     HalpInterruptUnmap @ 0x1406FB668 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140B6DFB8 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x1403726E4 (HalpInterruptLookupController.c)
 */

ULONG_PTR *__fastcall HalpInterruptFindLines(int *a1)
{
  ULONG_PTR *v1; // rax
  _DWORD *v2; // r10
  __int64 v3; // r11
  ULONG_PTR *v4; // r9
  ULONG_PTR *v5; // r8
  int v6; // ecx
  ULONG_PTR *result; // rax
  int v8; // edx

  v1 = HalpInterruptLookupController(*a1);
  if ( v1 )
  {
    v4 = v1 + 33;
    v5 = (ULONG_PTR *)v1[33];
    while ( v5 != v4 )
    {
      v6 = *(_DWORD *)(v3 + 4);
      result = v5;
      v5 = (ULONG_PTR *)*v5;
      v8 = *((_DWORD *)result + 5);
      if ( v8 <= v6 && *((_DWORD *)result + 6) > v6 )
      {
        if ( v2 )
          *v2 = v6 - v8;
        return result;
      }
    }
  }
  return 0LL;
}
