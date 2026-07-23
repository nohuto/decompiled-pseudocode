/*
 * XREFs of BiGetAliasedIdentifier @ 0x140802710
 * Callers:
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14080278C (BiGetDefaultBootEntryIdentifier.c)
 */

NTSTATUS __fastcall BiGetAliasedIdentifier(__int64 a1, int a2, _OWORD *a3)
{
  int v4; // edx
  NTSTATUS result; // eax
  _OWORD SystemInformation[2]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
      return BiGetDefaultBootEntryIdentifier(a1, a3);
    else
      return -1073741811;
  }
  else
  {
    memset(SystemInformation, 0, sizeof(SystemInformation));
    result = ZwQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0LL);
    if ( result >= 0 )
      *a3 = SystemInformation[0];
  }
  return result;
}
