/*
 * XREFs of WheapGetErrorSource @ 0x14042E7A8
 * Callers:
 *     WheaGetErrorSource @ 0x14042E2D0 (WheaGetErrorSource.c)
 *     WheaReportHwError @ 0x14042E300 (WheaReportHwError.c)
 *     HalpMcaReportError @ 0x1405400E4 (HalpMcaReportError.c)
 *     HalHandleNMI @ 0x140543B40 (HalHandleNMI.c)
 *     KiMcheckAlternateReturn @ 0x1405C9C80 (KiMcheckAlternateReturn.c)
 *     WheapReportBootError @ 0x14065BA34 (WheapReportBootError.c)
 *     WheaErrorSourceGetState @ 0x14065BB80 (WheaErrorSourceGetState.c)
 *     WheapAttemptArchitecturalErrorRecovery @ 0x14065BD00 (WheapAttemptArchitecturalErrorRecovery.c)
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x14065BFD0 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x14065C2B0 (WheaHwErrorReportSubmitDeviceDriver.c)
 *     WheapFreeDriverPacketBuffer @ 0x14065C718 (WheapFreeDriverPacketBuffer.c)
 *     WheapGetPreallocatedPacketBuffer @ 0x14065C794 (WheapGetPreallocatedPacketBuffer.c)
 *     WheapInitErrorReportDeviceDriver @ 0x14065C848 (WheapInitErrorReportDeviceDriver.c)
 *     WheapWmiExecuteErrorSourceMethod @ 0x14065EF30 (WheapWmiExecuteErrorSourceMethod.c)
 *     WheaRemoveErrorSource @ 0x1407C6C00 (WheaRemoveErrorSource.c)
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
