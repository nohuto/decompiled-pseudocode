/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x140BB0064
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     BgQueryBootGraphicsInformation @ 0x140697DBC (BgQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(int a1, __int64 a2)
{
  if ( byte_140E65DA8 )
    return BgQueryBootGraphicsInformation(a1, a2);
  else
    return 3221225473LL;
}
