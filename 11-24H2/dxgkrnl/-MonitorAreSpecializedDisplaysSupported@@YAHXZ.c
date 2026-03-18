/*
 * XREFs of ?MonitorAreSpecializedDisplaysSupported@@YAHXZ @ 0x140053544
 * Callers:
 *     ?GetPseudoSpecializedState@MonitorUsageState@DxgMonitor@@QEBAXPEA_N00@Z @ 0x1403DD678 (-GetPseudoSpecializedState@MonitorUsageState@DxgMonitor@@QEBAXPEA_N00@Z.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x140414B04 (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 MonitorAreSpecializedDisplaysSupported(void)
{
  unsigned int v0; // ebx
  int v1; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  int v4; // [rsp+50h] [rbp+10h] BYREF
  int v5; // [rsp+58h] [rbp+18h] BYREF
  int v6; // [rsp+60h] [rbp+20h] BYREF

  v4 = 4;
  v0 = 0;
  v5 = 4;
  v6 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Display-Specialized-Displays-Enabled");
  if ( (int)ZwQueryLicenseValue(&DestinationString, &v5, &v6, 4LL, &v4) < 0 || v4 != 4 || (v1 = v6, v5 != 4) )
    v1 = 0;
  LOBYTE(v0) = v1 != 0;
  return v0;
}
