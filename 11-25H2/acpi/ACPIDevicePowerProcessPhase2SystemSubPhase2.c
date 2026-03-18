/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x140022970
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x14001D4D0 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qD @ 0x140023190 (WPP_RECORDER_SF_qD.c)
 *     LinkNodeRestoreHardwareState @ 0x140023E3C (LinkNodeRestoreHardwareState.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase2(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = 0;
  v3 = 5LL;
  *(_DWORD *)(a1 + 212) = 5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      10,
      64,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      5);
  if ( *(_DWORD *)(a1 + 104) != 1 || (v2 = LinkNodeRestoreHardwareState(v3, a1), result = 259LL, v2 != 259) )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v2, 0LL, a1);
    return 0LL;
  }
  return result;
}
