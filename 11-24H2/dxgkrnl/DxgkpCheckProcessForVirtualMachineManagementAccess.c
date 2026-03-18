/*
 * XREFs of DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1402118C4
 * Callers:
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x14020D384 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiFdoDispatchIoctl @ 0x14023DB30 (DpiFdoDispatchIoctl.c)
 *     DpiFlexIovMitigationUpdate @ 0x140248DF4 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1402493B8 (DpiSriovAttach.c)
 * Callees:
 *     DxgkpIsDrtEnabled @ 0x14018AED8 (DxgkpIsDrtEnabled.c)
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
