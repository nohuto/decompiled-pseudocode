/*
 * XREFs of DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x14020B200
 * Callers:
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x140206CBC (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiFdoDispatchIoctl @ 0x140237020 (DpiFdoDispatchIoctl.c)
 *     DpiFlexIovMitigationUpdate @ 0x140241FF4 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1402425B8 (DpiSriovAttach.c)
 * Callees:
 *     DxgkpIsDrtEnabled @ 0x140188BF0 (DxgkpIsDrtEnabled.c)
 */

bool DxgkpCheckProcessForVirtualMachineManagementAccess()
{
  char v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( (int)RtlCheckTokenMembership(0LL, SeExports->SeLocalSystemSid, &v1) >= 0 && v1 )
    return 1;
  if ( DxgkpIsDrtEnabled() && (int)RtlCheckTokenMembership(0LL, SeExports->SeAliasAdminsSid, &v1) >= 0 )
    return v1 != 0;
  return 0;
}
