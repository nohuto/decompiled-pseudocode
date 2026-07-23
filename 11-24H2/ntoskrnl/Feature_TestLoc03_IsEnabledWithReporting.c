/*
 * XREFs of Feature_TestLoc03_IsEnabledWithReporting @ 0x1406689B0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_TestLoc03__private_IsEnabledDeviceOpportunityNoInline @ 0x1406689F8 (Feature_TestLoc03__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_TestLoc03__private_IsEnabledDeviceUsageNoInline @ 0x140668A30 (Feature_TestLoc03__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_TestLoc03__private_IsEnabledNoReportingNoInline @ 0x140668A84 (Feature_TestLoc03__private_IsEnabledNoReportingNoInline.c)
 *     Feature_TestLoc03__private_IsEnabledOtherReporting @ 0x140668ABC (Feature_TestLoc03__private_IsEnabledOtherReporting.c)
 */

__int64 __fastcall Feature_TestLoc03_IsEnabledWithReporting(__int64 a1)
{
  unsigned int v1; // ebx
  int IsEnabledDeviceUsageNoInline; // eax

  v1 = 0;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 3 )
    {
      IsEnabledDeviceUsageNoInline = Feature_TestLoc03__private_IsEnabledDeviceUsageNoInline();
    }
    else if ( (_DWORD)a1 == 4 )
    {
      IsEnabledDeviceUsageNoInline = Feature_TestLoc03__private_IsEnabledDeviceOpportunityNoInline();
    }
    else
    {
      IsEnabledDeviceUsageNoInline = Feature_TestLoc03__private_IsEnabledOtherReporting();
    }
  }
  else
  {
    IsEnabledDeviceUsageNoInline = Feature_TestLoc03__private_IsEnabledNoReportingNoInline(a1, (unsigned __int8)a1);
  }
  LOBYTE(v1) = IsEnabledDeviceUsageNoInline != 0;
  return v1;
}
