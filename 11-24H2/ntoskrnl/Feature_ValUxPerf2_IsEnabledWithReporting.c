/*
 * XREFs of Feature_ValUxPerf2_IsEnabledWithReporting @ 0x140669A20
 * Callers:
 *     <none>
 * Callees:
 *     Feature_ValUxPerf2__private_IsEnabledDeviceOpportunityNoInline @ 0x140669A68 (Feature_ValUxPerf2__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_ValUxPerf2__private_IsEnabledDeviceUsageNoInline @ 0x140669AA0 (Feature_ValUxPerf2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ValUxPerf2__private_IsEnabledNoReportingNoInline @ 0x140669AF4 (Feature_ValUxPerf2__private_IsEnabledNoReportingNoInline.c)
 *     Feature_ValUxPerf2__private_IsEnabledOtherReporting @ 0x140669B2C (Feature_ValUxPerf2__private_IsEnabledOtherReporting.c)
 */

__int64 __fastcall Feature_ValUxPerf2_IsEnabledWithReporting(__int64 a1)
{
  unsigned int v1; // ebx
  int IsEnabledDeviceUsageNoInline; // eax

  v1 = 0;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 3 )
    {
      IsEnabledDeviceUsageNoInline = Feature_ValUxPerf2__private_IsEnabledDeviceUsageNoInline();
    }
    else if ( (_DWORD)a1 == 4 )
    {
      IsEnabledDeviceUsageNoInline = Feature_ValUxPerf2__private_IsEnabledDeviceOpportunityNoInline();
    }
    else
    {
      IsEnabledDeviceUsageNoInline = Feature_ValUxPerf2__private_IsEnabledOtherReporting();
    }
  }
  else
  {
    IsEnabledDeviceUsageNoInline = Feature_ValUxPerf2__private_IsEnabledNoReportingNoInline(a1, (unsigned __int8)a1);
  }
  LOBYTE(v1) = IsEnabledDeviceUsageNoInline != 0;
  return v1;
}
