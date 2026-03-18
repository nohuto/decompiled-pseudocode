/*
 * XREFs of HalpInterruptFindLines @ 0x140445644
 * Callers:
 *     HalpInterruptEnableNmi @ 0x140443DC4 (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x140444F88 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14053EAF8 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x14053FAA0 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptIsCmciSupported @ 0x14053FC6C (HalpInterruptIsCmciSupported.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x14053FCB4 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpInterruptRestoreClock @ 0x140540090 (HalpInterruptRestoreClock.c)
 *     HalpConnectThermalInterrupt @ 0x1405535D0 (HalpConnectThermalInterrupt.c)
 *     HalpInitializeCmciVector @ 0x1405537D0 (HalpInitializeCmciVector.c)
 *     HalpInitializeDeferredErrorVector @ 0x140553880 (HalpInitializeDeferredErrorVector.c)
 *     HalpApicInitializeIoUnit @ 0x140565D20 (HalpApicInitializeIoUnit.c)
 *     HalpInterruptUnmap @ 0x1406F1C38 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140B5D638 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x140445B74 (HalpInterruptLookupController.c)
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
