/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x140BA0064
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     BgQueryBootGraphicsInformation @ 0x14068CA6C (BgQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_140E65B48 )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}
