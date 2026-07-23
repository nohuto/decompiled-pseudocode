/*
 * XREFs of ZwAlpcDeletePortSection @ 0x1406A83F0
 * Callers:
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x1404BCE2C (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     CmFcpCreateAlpcSectionView @ 0x140ABC10C (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDeletePortSection(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE SectionHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
