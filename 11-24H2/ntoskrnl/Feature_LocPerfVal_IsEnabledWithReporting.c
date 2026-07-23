/*
 * XREFs of Feature_LocPerfVal_IsEnabledWithReporting @ 0x140667D10
 * Callers:
 *     <none>
 * Callees:
 *     Feature_LocPerfVal__private_IsEnabledDeviceOpportunityNoInline @ 0x140667D58 (Feature_LocPerfVal__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_LocPerfVal__private_IsEnabledDeviceUsageNoInline @ 0x140667D90 (Feature_LocPerfVal__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_LocPerfVal__private_IsEnabledNoReportingNoInline @ 0x140667DE4 (Feature_LocPerfVal__private_IsEnabledNoReportingNoInline.c)
 *     Feature_LocPerfVal__private_IsEnabledOtherReporting @ 0x140667E1C (Feature_LocPerfVal__private_IsEnabledOtherReporting.c)
 */

__int64 __fastcall Feature_LocPerfVal_IsEnabledWithReporting(__int64 a1)
{
  unsigned int v1; // ebx
  int IsEnabledDeviceUsageNoInline; // eax

  v1 = 0;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 3 )
    {
      IsEnabledDeviceUsageNoInline = Feature_LocPerfVal__private_IsEnabledDeviceUsageNoInline();
    }
    else if ( (_DWORD)a1 == 4 )
    {
      IsEnabledDeviceUsageNoInline = Feature_LocPerfVal__private_IsEnabledDeviceOpportunityNoInline();
    }
    else
    {
      IsEnabledDeviceUsageNoInline = Feature_LocPerfVal__private_IsEnabledOtherReporting();
    }
  }
  else
  {
    IsEnabledDeviceUsageNoInline = Feature_LocPerfVal__private_IsEnabledNoReportingNoInline(a1, (unsigned __int8)a1);
  }
  LOBYTE(v1) = IsEnabledDeviceUsageNoInline != 0;
  return v1;
}
