/*
 * XREFs of _soutput_s @ 0x18012CEC4
 * Callers:
 *     _vsnprintf_s @ 0x18012AFB0 (_vsnprintf_s.c)
 *     vsprintf_s @ 0x18012BAC0 (vsprintf_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18011E9A8 (_invalid_parameter.c)
 *     _output_s @ 0x18012C540 (_output_s.c)
 *     _flsbuf_s @ 0x18012F680 (_flsbuf_s.c)
 */

__int64 __fastcall soutput_s(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int16 *a4)
{
  __int64 result; // rax
  unsigned int v7; // esi
  int v8; // eax
  unsigned int v9; // ecx
  _BYTE *v10; // [rsp+30h] [rbp-30h] BYREF
  int v11; // [rsp+38h] [rbp-28h]
  int v12; // [rsp+3Ch] [rbp-24h]
  _BYTE *v13; // [rsp+40h] [rbp-20h]
  int v14; // [rsp+48h] [rbp-18h]
  __int128 v15; // [rsp+4Ch] [rbp-14h]
  int v16; // [rsp+5Ch] [rbp-4h]

  v12 = 0;
  v16 = 0;
  v15 = 0LL;
  if ( !a2 )
    goto LABEL_17;
  if ( a2 != -1LL )
  {
    if ( a2 <= 0x7FFFFFFF )
    {
      v11 = a2;
      goto LABEL_6;
    }
LABEL_17:
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  v11 = 0x7FFFFFFF;
LABEL_6:
  v13 = a1;
  v10 = a1;
  v14 = 66;
  LODWORD(result) = output_s((__int64)&v10, a3, a4);
  a1[a2 - 1] = 0;
  v7 = result;
  if ( (int)result < 0 )
  {
    if ( v11 < 0 )
      return 4294967294LL;
    if ( a1 )
      *a1 = 0;
    return (unsigned int)result;
  }
  if ( --v11 >= 0 )
  {
    *v10 = 0;
    return (unsigned int)result;
  }
  v8 = flsbuf_s(0LL, &v10);
  v9 = -2;
  if ( v8 != -1 )
    return v7;
  return v9;
}
