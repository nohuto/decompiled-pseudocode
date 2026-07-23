/*
 * XREFs of WheapGetErrorSource @ 0x1404204D8
 * Callers:
 *     WheaGetErrorSource @ 0x140420000 (WheaGetErrorSource.c)
 *     WheaReportHwError @ 0x140420030 (WheaReportHwError.c)
 *     HalpMcaReportError @ 0x14053D9E4 (HalpMcaReportError.c)
 *     HalHandleNMI @ 0x140541490 (HalHandleNMI.c)
 *     KiMcheckAlternateReturn @ 0x1405C73B0 (KiMcheckAlternateReturn.c)
 *     WheapReportBootError @ 0x14065A154 (WheapReportBootError.c)
 *     WheaErrorSourceGetState @ 0x14065A2A0 (WheaErrorSourceGetState.c)
 *     WheapAttemptArchitecturalErrorRecovery @ 0x14065A420 (WheapAttemptArchitecturalErrorRecovery.c)
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x14065A6F0 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x14065A9D0 (WheaHwErrorReportSubmitDeviceDriver.c)
 *     WheapFreeDriverPacketBuffer @ 0x14065AE38 (WheapFreeDriverPacketBuffer.c)
 *     WheapGetPreallocatedPacketBuffer @ 0x14065AEB4 (WheapGetPreallocatedPacketBuffer.c)
 *     WheapInitErrorReportDeviceDriver @ 0x14065AF68 (WheapInitErrorReportDeviceDriver.c)
 *     WheapWmiExecuteErrorSourceMethod @ 0x14065D700 (WheapWmiExecuteErrorSourceMethod.c)
 *     WheaRemoveErrorSource @ 0x1407C7080 (WheaRemoveErrorSource.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall WheapGetErrorSource(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r8
  int i; // r9d

  if ( *(_DWORD *)a1 == 1279410516 && a2 && a2 < *(_DWORD *)(a1 + 8) )
  {
    v2 = *(__int64 **)(a1 + 16);
    for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
    {
      if ( *((_DWORD *)v2 + 31) == a2 && !*((_BYTE *)v2 + 88) && (unsigned int)(*((_DWORD *)v2 + 27) - 1) <= 1 )
        return v2;
      v2 = (__int64 *)*v2;
    }
  }
  return 0LL;
}
