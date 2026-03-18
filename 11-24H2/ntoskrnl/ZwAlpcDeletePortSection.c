/*
 * XREFs of ZwAlpcDeletePortSection @ 0x1406A7450
 * Callers:
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x1404C183C (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     CmFcpCreateAlpcSectionView @ 0x140AC0FAC (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcDeletePortSection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
