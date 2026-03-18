/*
 * XREFs of Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting @ 0x1404F278C
 * Callers:
 *     EtwTraceAutoBoostProcessLockEntry @ 0x1402E8C88 (EtwTraceAutoBoostProcessLockEntry.c)
 *     EtwTraceAutoBoostSetFloor @ 0x140311D9C (EtwTraceAutoBoostSetFloor.c)
 *     EtwTraceAutoBoostConvertWaiterToOwner @ 0x140311EA0 (EtwTraceAutoBoostConvertWaiterToOwner.c)
 * Callees:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline @ 0x1404F27C8 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunityNoInline @ 0x140642E9C (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsageNoInline @ 0x140642ED4 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting @ 0x140642F0C (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting.c)
 */

__int64 __fastcall Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting(__int64 a1)
{
  switch ( (_DWORD)a1 )
  {
    case 0:
      return Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline(a1, (unsigned __int8)a1);
    case 3:
      return Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsageNoInline();
    case 4:
      return Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunityNoInline();
  }
  return Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting();
}
