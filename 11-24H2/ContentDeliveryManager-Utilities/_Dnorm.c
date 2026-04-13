/*
 * XREFs of _Dnorm @ 0x1800216E8
 * Callers:
 *     _Dscale @ 0x18000D064 (_Dscale.c)
 *     _Dunscale @ 0x1800219F4 (_Dunscale.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Dnorm(unsigned __int16 *a1)
{
  __int16 v1; // di
  unsigned __int16 v2; // r9
  unsigned __int16 v4; // r11
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // r10
  unsigned __int16 v10; // bx
  int v11; // kr00_4
  unsigned __int16 v12; // r10
  unsigned __int16 v13; // dx
  __int16 v14; // cx
  __int64 result; // rax

  v1 = a1[3] & 0x8000;
  v2 = a1[3] & 0xF;
  a1[3] = v2;
  v4 = 1;
  if ( v2 || a1[2] || a1[1] || *a1 )
  {
    if ( !v2 )
    {
      v5 = a1[2];
      v6 = a1[1];
      do
      {
        v7 = v5;
        v2 = v5;
        v4 -= 16;
        v5 = v6;
        v6 = *a1;
        *a1 = 0;
      }
      while ( !v7 );
      a1[2] = v5;
      a1[1] = v6;
    }
    v8 = v2;
    if ( v2 < 0x10u )
    {
      v9 = a1[2];
      v10 = a1[1];
      do
      {
        v2 = (2 * v8) | (v9 >> 15);
        v11 = 2 * *a1;
        --v4;
        v9 = (v10 >> 15) | (2 * v9);
        *a1 = v11;
        v10 = (2 * v10) | HIWORD(v11);
        v8 = v2;
      }
      while ( v2 < 0x10u );
      a1[2] = v9;
      a1[1] = v10;
    }
    if ( v2 >= 0x20u )
    {
      v12 = a1[2];
      v13 = a1[1];
      do
      {
        ++v4;
        *a1 = (*a1 >> 1) | (v13 << 15);
        v13 = (v12 << 15) | (v13 >> 1);
        v14 = v2 << 15;
        v2 >>= 1;
        v12 = (v12 >> 1) | v14;
      }
      while ( v2 >= 0x20u );
      a1[2] = v12;
      a1[1] = v13;
    }
    v2 &= 0xFu;
    a1[3] = v2;
  }
  result = v4;
  a1[3] = v1 | v2;
  return result;
}
