/*
 * XREFs of AppendUlongAsHexadecimalW @ 0x140617DB4
 * Callers:
 *     CarInitializeTelemetryData @ 0x140615160 (CarInitializeTelemetryData.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall AppendUlongAsHexadecimalW(__int64 a1, int a2)
{
  char v2; // r8
  __int64 v4; // r9
  unsigned int v5; // r10d
  __int64 v6; // rax
  __int16 v7; // cx
  _DWORD v8[8]; // [rsp+0h] [rbp-30h]

  if ( a1 )
  {
    v2 = 0;
    v4 = 0LL;
    v5 = -268435456;
    do
    {
      v8[0] = 3211312;
      v8[1] = 3342386;
      v8[2] = 3473460;
      v6 = (a2 & v5) >> (4 * (7 - v2));
      v8[3] = 3604534;
      v8[4] = 3735608;
      v8[5] = 4325441;
      v8[6] = 4456515;
      v8[7] = 4587589;
      if ( (unsigned int)v6 > 0xF )
        v7 = 63;
      else
        v7 = *((_WORD *)v8 + v6);
      *(_WORD *)(a1 + 2 * v4) = v7;
      ++v2;
      ++v4;
      v5 >>= 4;
    }
    while ( v4 < 8 );
  }
}
