/*
 * XREFs of Feature_UxAccOptimization_IsEnabledWithReporting @ 0x140669220
 * Callers:
 *     <none>
 * Callees:
 *     Feature_UxAccOptimization__private_IsEnabledDeviceOpportunityNoInline @ 0x140669268 (Feature_UxAccOptimization__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_UxAccOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1406692A0 (Feature_UxAccOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UxAccOptimization__private_IsEnabledNoReportingNoInline @ 0x1406692F4 (Feature_UxAccOptimization__private_IsEnabledNoReportingNoInline.c)
 *     Feature_UxAccOptimization__private_IsEnabledOtherReporting @ 0x14066932C (Feature_UxAccOptimization__private_IsEnabledOtherReporting.c)
 */

__int64 __fastcall Feature_UxAccOptimization_IsEnabledWithReporting(__int64 a1)
{
  unsigned int v1; // ebx
  int IsEnabledDeviceUsageNoInline; // eax

  v1 = 0;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 3 )
    {
      IsEnabledDeviceUsageNoInline = Feature_UxAccOptimization__private_IsEnabledDeviceUsageNoInline();
    }
    else if ( (_DWORD)a1 == 4 )
    {
      IsEnabledDeviceUsageNoInline = Feature_UxAccOptimization__private_IsEnabledDeviceOpportunityNoInline();
    }
    else
    {
      IsEnabledDeviceUsageNoInline = Feature_UxAccOptimization__private_IsEnabledOtherReporting();
    }
  }
  else
  {
    IsEnabledDeviceUsageNoInline = Feature_UxAccOptimization__private_IsEnabledNoReportingNoInline(
                                     a1,
                                     (unsigned __int8)a1);
  }
  LOBYTE(v1) = IsEnabledDeviceUsageNoInline != 0;
  return v1;
}
