/*
 * XREFs of PopNetCompliantNicUpdate @ 0x14074FDEC
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x140A84B78 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x140750188 (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x140ABD87C (PopNetClearConnectivityConstraint.c)
 */

__int64 __fastcall PopNetCompliantNicUpdate(char a1)
{
  __int64 result; // rax
  bool v2; // zf

  result = (unsigned int)PopNetCompliantNicCount;
  if ( a1 )
  {
    result = (unsigned int)(PopNetCompliantNicCount + 1);
    PopNetCompliantNicCount = result;
    if ( (_DWORD)result == 1 )
      return PopNetClearConnectivityConstraint(6LL);
  }
  else if ( PopNetCompliantNicCount )
  {
    v2 = PopNetCompliantNicCount == 1;
    result = (unsigned int)--PopNetCompliantNicCount;
    if ( v2 )
      return PopNetSetConnectivityConstraint(6LL);
  }
  return result;
}
