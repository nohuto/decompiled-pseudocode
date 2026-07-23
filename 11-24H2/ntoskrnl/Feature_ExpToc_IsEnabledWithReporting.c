/*
 * XREFs of Feature_ExpToc_IsEnabledWithReporting @ 0x1406679C0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_ExpToc__private_IsEnabledDeviceOpportunityNoInline @ 0x140667A08 (Feature_ExpToc__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_ExpToc__private_IsEnabledDeviceUsageNoInline @ 0x140667A40 (Feature_ExpToc__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ExpToc__private_IsEnabledNoReportingNoInline @ 0x140667A94 (Feature_ExpToc__private_IsEnabledNoReportingNoInline.c)
 *     Feature_ExpToc__private_IsEnabledOtherReporting @ 0x140667ACC (Feature_ExpToc__private_IsEnabledOtherReporting.c)
 */

__int64 __fastcall Feature_ExpToc_IsEnabledWithReporting(__int64 a1)
{
  unsigned int v1; // ebx
  int IsEnabledDeviceUsageNoInline; // eax

  v1 = 0;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 3 )
    {
      IsEnabledDeviceUsageNoInline = Feature_ExpToc__private_IsEnabledDeviceUsageNoInline();
    }
    else if ( (_DWORD)a1 == 4 )
    {
      IsEnabledDeviceUsageNoInline = Feature_ExpToc__private_IsEnabledDeviceOpportunityNoInline();
    }
    else
    {
      IsEnabledDeviceUsageNoInline = Feature_ExpToc__private_IsEnabledOtherReporting();
    }
  }
  else
  {
    IsEnabledDeviceUsageNoInline = Feature_ExpToc__private_IsEnabledNoReportingNoInline(a1, (unsigned __int8)a1);
  }
  LOBYTE(v1) = IsEnabledDeviceUsageNoInline != 0;
  return v1;
}
