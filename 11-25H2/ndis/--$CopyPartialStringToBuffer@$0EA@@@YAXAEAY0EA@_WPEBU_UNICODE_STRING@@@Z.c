/*
 * XREFs of ??$CopyPartialStringToBuffer@$0EA@@@YAXAEAY0EA@_WPEBU_UNICODE_STRING@@@Z @ 0x14015D650
 * Callers:
 *     ndisMiniportDeviceReadyNotification @ 0x14015D490 (ndisMiniportDeviceReadyNotification.c)
 * Callees:
 *     memmove @ 0x1400EE080 (memmove.c)
 */

__int128 *__fastcall CopyPartialStringToBuffer<64>(__int64 a1, const void **a2)
{
  __int128 *result; // rax

  if ( *(_WORD *)a2 < 0x80u )
  {
    xmmword_140126ED0 = 0LL;
    xmmword_140126EE0 = 0LL;
    xmmword_140126EF0 = 0LL;
    xmmword_140126F00 = 0LL;
    xmmword_140126F10 = 0LL;
    xmmword_140126F20 = 0LL;
    xmmword_140126F30 = 0LL;
    xmmword_140126F40 = 0LL;
    return (__int128 *)memmove(&xmmword_140126ED0, a2[1], *(unsigned __int16 *)a2);
  }
  else
  {
    result = (__int128 *)a2[1];
    xmmword_140126ED0 = *result;
    xmmword_140126EE0 = result[1];
    xmmword_140126EF0 = result[2];
    xmmword_140126F00 = result[3];
    xmmword_140126F10 = result[4];
    xmmword_140126F20 = result[5];
    xmmword_140126F30 = result[6];
    xmmword_140126F40 = result[7];
  }
  return result;
}
