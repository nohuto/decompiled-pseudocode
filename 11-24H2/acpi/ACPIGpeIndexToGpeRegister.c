/*
 * XREFs of ACPIGpeIndexToGpeRegister @ 0x14001A728
 * Callers:
 *     ACPIEcUnmaskInterrupt @ 0x140019270 (ACPIEcUnmaskInterrupt.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x140019370 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIVectorEnable @ 0x140019900 (ACPIVectorEnable.c)
 *     ACPIEcMaskInterrupt @ 0x1400199D0 (ACPIEcMaskInterrupt.c)
 *     ACPIVectorDisable @ 0x140019AD0 (ACPIVectorDisable.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1400335A0 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 *     ACPIGpeBuildWakeMasks @ 0x140051C08 (ACPIGpeBuildWakeMasks.c)
 *     ACPIGpeInstallRemoveIndex @ 0x140060F98 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIVectorClear @ 0x140069600 (ACPIVectorClear.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIGpeIndexToGpeRegister(ULONG_PTR BugCheckParameter2)
{
  int v1; // r9d
  unsigned int v2; // edx
  unsigned int v3; // eax

  v1 = *((unsigned __int16 *)AcpiInformation + 43);
  if ( (unsigned int)BugCheckParameter2 >= 8 * v1 )
  {
    v2 = *((unsigned __int16 *)AcpiInformation + 50);
    if ( (unsigned int)BugCheckParameter2 < v2
      || (unsigned int)BugCheckParameter2 >= v2 + 8 * *((unsigned __int16 *)AcpiInformation + 49) )
    {
      KeBugCheckEx(0xA5u, 0x17uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
    }
  }
  v3 = *((unsigned __int16 *)AcpiInformation + 50);
  if ( (unsigned int)BugCheckParameter2 >= v3 )
    return v1 + (((unsigned int)BugCheckParameter2 - v3) >> 3);
  else
    return (unsigned int)BugCheckParameter2 >> 3;
}
