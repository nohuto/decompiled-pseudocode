/*
 * XREFs of PopIsInputSuppressionEngaged @ 0x140A3AD68
 * Callers:
 *     PopPowerAggregatorHandleActiveIntent @ 0x140A3ABE0 (PopPowerAggregatorHandleActiveIntent.c)
 *     PopMonitorInvocation @ 0x140AC7244 (PopMonitorInvocation.c)
 * Callees:
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x1405CA3E4 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall PopIsInputSuppressionEngaged(int a1)
{
  char v1; // bl
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  char v8; // di
  bool v9; // si
  bool v10; // bp

  v1 = 0;
  if ( a1 > 36 )
  {
    v5 = a1 - 37;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 != 15 )
            return v1;
        }
      }
    }
  }
  else if ( a1 != 36 )
  {
    v2 = a1 - 31;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( (unsigned int)(v4 - 1) >= 2 )
            return v1;
        }
      }
    }
  }
  if ( PopEnableInputSuppression )
  {
    v8 = PopConsoleExternalDisplayConnected;
    v9 = PopLidOpened == 0;
    v10 = dword_140F0B38C == 1;
    if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v8 || (v8 = 0, PopUsb4DisplayPresent) )
        v8 = 1;
    }
    if ( !PopErrataReportingIncorrectLidState && v9 && (PopInputSuppressionIgnorePowerSource || v10) && !v8 )
      return PopConsoleDisplayState == 0;
  }
  return v1;
}
