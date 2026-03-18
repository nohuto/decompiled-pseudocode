/*
 * XREFs of PopNetCompliantNicUpdate @ 0x14075C6B4
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x140A89968 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x14075CAB8 (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x140AC166C (PopNetClearConnectivityConstraint.c)
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
