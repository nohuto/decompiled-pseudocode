/*
 * XREFs of HalpInterruptFindLines @ 0x1403B97B4
 * Callers:
 *     HalpInterruptEnablePerformanceEvents @ 0x1403B90F8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptEnableNmi @ 0x1404A356C (HalpInterruptEnableNmi.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x140541328 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x1405422D0 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptIsCmciSupported @ 0x14054249C (HalpInterruptIsCmciSupported.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1405424E4 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpInterruptRestoreClock @ 0x1405428C0 (HalpInterruptRestoreClock.c)
 *     HalpConnectThermalInterrupt @ 0x140555ED0 (HalpConnectThermalInterrupt.c)
 *     HalpInitializeCmciVector @ 0x1405560D0 (HalpInitializeCmciVector.c)
 *     HalpInitializeDeferredErrorVector @ 0x140556180 (HalpInitializeDeferredErrorVector.c)
 *     HalpApicInitializeIoUnit @ 0x1405688F0 (HalpApicInitializeIoUnit.c)
 *     HalpInterruptUnmap @ 0x1406FDA28 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140B6C718 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x1403B9D14 (HalpInterruptLookupController.c)
 */

_QWORD *__fastcall HalpInterruptFindLines(unsigned int *a1)
{
  __int64 v1; // rax
  _DWORD *v2; // r10
  __int64 v3; // r11
  _QWORD *v4; // r9
  _QWORD *v5; // r8
  int v6; // ecx
  _QWORD *result; // rax
  int v8; // edx

  v1 = HalpInterruptLookupController(*a1);
  if ( v1 )
  {
    v4 = (_QWORD *)(v1 + 264);
    v5 = *(_QWORD **)(v1 + 264);
    while ( v5 != v4 )
    {
      v6 = *(_DWORD *)(v3 + 4);
      result = v5;
      v5 = (_QWORD *)*v5;
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
