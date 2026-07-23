/*
 * XREFs of Feature_TestUex12_IsEnabledWithReporting @ 0x140668C70
 * Callers:
 *     <none>
 * Callees:
 *     Feature_TestUex12__private_IsEnabledDeviceOpportunityNoInline @ 0x140668CB8 (Feature_TestUex12__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_TestUex12__private_IsEnabledDeviceUsageNoInline @ 0x140668CF0 (Feature_TestUex12__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_TestUex12__private_IsEnabledNoReportingNoInline @ 0x140668D44 (Feature_TestUex12__private_IsEnabledNoReportingNoInline.c)
 *     Feature_TestUex12__private_IsEnabledOtherReporting @ 0x140668D7C (Feature_TestUex12__private_IsEnabledOtherReporting.c)
 */

__int64 __fastcall Feature_TestUex12_IsEnabledWithReporting(__int64 a1)
{
  unsigned int v1; // ebx
  int IsEnabledDeviceUsageNoInline; // eax

  v1 = 0;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 3 )
    {
      IsEnabledDeviceUsageNoInline = Feature_TestUex12__private_IsEnabledDeviceUsageNoInline();
    }
    else if ( (_DWORD)a1 == 4 )
    {
      IsEnabledDeviceUsageNoInline = Feature_TestUex12__private_IsEnabledDeviceOpportunityNoInline();
    }
    else
    {
      IsEnabledDeviceUsageNoInline = Feature_TestUex12__private_IsEnabledOtherReporting();
    }
  }
  else
  {
    IsEnabledDeviceUsageNoInline = Feature_TestUex12__private_IsEnabledNoReportingNoInline(a1, (unsigned __int8)a1);
  }
  LOBYTE(v1) = IsEnabledDeviceUsageNoInline != 0;
  return v1;
}
