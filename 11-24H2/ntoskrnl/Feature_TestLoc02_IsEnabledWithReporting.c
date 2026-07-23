/*
 * XREFs of Feature_TestLoc02_IsEnabledWithReporting @ 0x140668840
 * Callers:
 *     <none>
 * Callees:
 *     Feature_TestLoc02__private_IsEnabledDeviceOpportunityNoInline @ 0x140668888 (Feature_TestLoc02__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_TestLoc02__private_IsEnabledDeviceUsageNoInline @ 0x1406688C0 (Feature_TestLoc02__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_TestLoc02__private_IsEnabledNoReportingNoInline @ 0x140668914 (Feature_TestLoc02__private_IsEnabledNoReportingNoInline.c)
 *     Feature_TestLoc02__private_IsEnabledOtherReporting @ 0x14066894C (Feature_TestLoc02__private_IsEnabledOtherReporting.c)
 */

__int64 __fastcall Feature_TestLoc02_IsEnabledWithReporting(__int64 a1)
{
  unsigned int v1; // ebx
  int IsEnabledDeviceUsageNoInline; // eax

  v1 = 0;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 3 )
    {
      IsEnabledDeviceUsageNoInline = Feature_TestLoc02__private_IsEnabledDeviceUsageNoInline();
    }
    else if ( (_DWORD)a1 == 4 )
    {
      IsEnabledDeviceUsageNoInline = Feature_TestLoc02__private_IsEnabledDeviceOpportunityNoInline();
    }
    else
    {
      IsEnabledDeviceUsageNoInline = Feature_TestLoc02__private_IsEnabledOtherReporting();
    }
  }
  else
  {
    IsEnabledDeviceUsageNoInline = Feature_TestLoc02__private_IsEnabledNoReportingNoInline(a1, (unsigned __int8)a1);
  }
  LOBYTE(v1) = IsEnabledDeviceUsageNoInline != 0;
  return v1;
}
