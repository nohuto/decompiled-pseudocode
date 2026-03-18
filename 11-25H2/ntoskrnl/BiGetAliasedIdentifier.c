/*
 * XREFs of BiGetAliasedIdentifier @ 0x140802710
 * Callers:
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14080278C (BiGetDefaultBootEntryIdentifier.c)
 */

__int64 __fastcall BiGetAliasedIdentifier(__int64 a1, int a2, _OWORD *a3)
{
  int v4; // edx
  __int64 result; // rax
  _OWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
      return BiGetDefaultBootEntryIdentifier(a1, a3);
    else
      return 3221225485LL;
  }
  else
  {
    memset(v6, 0, sizeof(v6));
    result = ZwQuerySystemInformation(90LL, (__int64)v6);
    if ( (int)result >= 0 )
      *a3 = v6[0];
  }
  return result;
}
