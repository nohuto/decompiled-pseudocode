/*
 * XREFs of Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledWithReporting @ 0x1404790D0
 * Callers:
 *     EtwTraceAutoBoostProcessLockEntry @ 0x140250910 (EtwTraceAutoBoostProcessLockEntry.c)
 *     EtwTraceAutoBoostConvertWaiterToOwner @ 0x140478F1C (EtwTraceAutoBoostConvertWaiterToOwner.c)
 *     EtwTraceAutoBoostSetFloor @ 0x140478FC8 (EtwTraceAutoBoostSetFloor.c)
 * Callees:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline @ 0x1404F5CFC (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunityNoInline @ 0x14064EE5C (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsageNoInline @ 0x14064EE94 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting @ 0x14064EECC (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting.c)
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
