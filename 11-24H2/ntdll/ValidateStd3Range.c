/*
 * XREFs of ValidateStd3Range @ 0x1800B4E00
 * Callers:
 *     punycode_decode @ 0x1800B3650 (punycode_decode.c)
 *     punycode_encode @ 0x1800B5968 (punycode_encode.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateStd3Range(int a1)
{
  __int64 v1; // rdx

  if ( (unsigned __int16)(a1 - 45) > 0x2Du || (v1 = 0x3FFFFFF01FFBLL, !_bittest64(&v1, (unsigned int)(a1 - 45))) )
  {
    if ( (unsigned __int16)a1 < 0x61u )
      return 0;
  }
  if ( (unsigned __int16)a1 >= 0x7Bu )
    return (unsigned __int16)a1 > 0x7Fu;
  return 1;
}
