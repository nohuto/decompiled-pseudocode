/*
 * XREFs of BiGetAliasedIdentifier @ 0x1408129C8
 * Callers:
 *     BcdOpenObject @ 0x1409A4724 (BcdOpenObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1406A7A70 (ZwQuerySystemInformation.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140812A44 (BiGetDefaultBootEntryIdentifier.c)
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
