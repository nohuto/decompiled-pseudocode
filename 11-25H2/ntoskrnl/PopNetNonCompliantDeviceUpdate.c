/*
 * XREFs of PopNetNonCompliantDeviceUpdate @ 0x140750060
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x140A84B78 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x140750188 (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x140ABD87C (PopNetClearConnectivityConstraint.c)
 */

void __fastcall PopNetNonCompliantDeviceUpdate(char a1, int a2)
{
  int v2; // eax

  if ( a2 || !PopIgnoreCsComplianceCheck )
  {
    v2 = PopNetNonCompliantDeviceCount;
    if ( a1 )
    {
      ++PopNetNonCompliantDeviceCount;
      if ( !v2 )
        PopNetSetConnectivityConstraint(3LL);
    }
    else if ( PopNetNonCompliantDeviceCount )
    {
      --PopNetNonCompliantDeviceCount;
      if ( v2 == 1 )
        PopNetClearConnectivityConstraint(3LL);
    }
  }
}
