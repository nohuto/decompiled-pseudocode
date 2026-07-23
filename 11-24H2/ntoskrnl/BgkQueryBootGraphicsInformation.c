/*
 * XREFs of BgkQueryBootGraphicsInformation @ 0x140BB2064
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     BgQueryBootGraphicsInformation @ 0x140698E3C (BgQueryBootGraphicsInformation.c)
 */

__int64 __fastcall BgkQueryBootGraphicsInformation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( byte_140E65EE0 )
    return BgQueryBootGraphicsInformation(a1, a2, a3, a4);
  else
    return 3221225473LL;
}
