/*
 * XREFs of Feature_TestUxGate_IsEnabledWithReporting @ 0x140668ED0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_TestUxGate__private_IsEnabledDeviceOpportunityNoInline @ 0x140668F18 (Feature_TestUxGate__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_TestUxGate__private_IsEnabledDeviceUsageNoInline @ 0x140668F50 (Feature_TestUxGate__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_TestUxGate__private_IsEnabledNoReportingNoInline @ 0x140668FA4 (Feature_TestUxGate__private_IsEnabledNoReportingNoInline.c)
 *     Feature_TestUxGate__private_IsEnabledOtherReporting @ 0x140668FDC (Feature_TestUxGate__private_IsEnabledOtherReporting.c)
 */

__int64 __fastcall Feature_TestUxGate_IsEnabledWithReporting(__int64 a1)
{
  unsigned int v1; // ebx
  int IsEnabledDeviceUsageNoInline; // eax

  v1 = 0;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 3 )
    {
      IsEnabledDeviceUsageNoInline = Feature_TestUxGate__private_IsEnabledDeviceUsageNoInline();
    }
    else if ( (_DWORD)a1 == 4 )
    {
      IsEnabledDeviceUsageNoInline = Feature_TestUxGate__private_IsEnabledDeviceOpportunityNoInline();
    }
    else
    {
      IsEnabledDeviceUsageNoInline = Feature_TestUxGate__private_IsEnabledOtherReporting();
    }
  }
  else
  {
    IsEnabledDeviceUsageNoInline = Feature_TestUxGate__private_IsEnabledNoReportingNoInline(a1, (unsigned __int8)a1);
  }
  LOBYTE(v1) = IsEnabledDeviceUsageNoInline != 0;
  return v1;
}
