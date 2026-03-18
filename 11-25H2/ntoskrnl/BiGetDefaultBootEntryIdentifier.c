/*
 * XREFs of BiGetDefaultBootEntryIdentifier @ 0x14080278C
 * Callers:
 *     BiGetAliasedIdentifier @ 0x140802710 (BiGetAliasedIdentifier.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 *     BcdGetElementData @ 0x140A25774 (BcdGetElementData.c)
 *     BcdCloseObject @ 0x140A27BE8 (BcdCloseObject.c)
 */

__int64 __fastcall BiGetDefaultBootEntryIdentifier(__int64 a1, _OWORD *a2)
{
  int ElementData; // ebx
  int v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  ElementData = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR, &v6);
  if ( ElementData >= 0 )
  {
    v5 = 16;
    ElementData = BcdGetElementData(v6, 587202563LL, &v7, &v5);
    if ( ElementData >= 0 )
      *a2 = v7;
  }
  if ( v6 )
    BcdCloseObject(v6);
  return (unsigned int)ElementData;
}
