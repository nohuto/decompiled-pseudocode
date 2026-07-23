/*
 * XREFs of EtwpTrackRegBinaryInfo @ 0x1800F0F14
 * Callers:
 *     EtwpTrackProviderBinary @ 0x18011836C (EtwpTrackProviderBinary.c)
 * Callees:
 *     EtwpGetUmProcessImageInfo @ 0x18001EB6C (EtwpGetUmProcessImageInfo.c)
 */

__int64 __fastcall EtwpTrackRegBinaryInfo(__int64 a1)
{
  unsigned __int8 i; // bl
  unsigned int j; // ecx
  __int64 result; // rax

  if ( *(__int16 *)(a1 + 86) < 0 )
  {
    for ( i = 0; i < 0x40u; ++i )
    {
      for ( j = 0; j < 4; ++j )
      {
        result = j;
        if ( *(_BYTE *)(a1 + 24LL * j + 140) && *(_BYTE *)(a1 + 24LL * j + 142) == i )
        {
          result = a1 + 120 + 24LL * j;
          if ( result )
            result = EtwpGetUmProcessImageInfo(i, a1);
          break;
        }
      }
    }
  }
  return result;
}
