/*
 * XREFs of _FDnorm @ 0x180021414
 * Callers:
 *     _FDscale @ 0x18000C3EC (_FDscale.c)
 *     _FDunscale @ 0x180021658 (_FDunscale.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FDnorm(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // r8
  __int16 v3; // r11
  unsigned __int16 v4; // r10
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // cx
  __int64 result; // rax

  v1 = a1 + 1;
  v3 = a1[1] & 0x8000;
  v4 = 1;
  v5 = a1[1] & 0x7F;
  a1[1] = v5;
  if ( !v5 )
  {
    if ( !*a1 )
      goto LABEL_11;
    v5 = *a1;
    v4 = -15;
    *v1 = *a1;
    v1 = a1 + 1;
    *a1 = 0;
  }
  v6 = v5;
  if ( v5 < 0x80u )
  {
    do
    {
      --v4;
      v5 = (2 * v6) | (*a1 >> 15);
      *a1 *= 2;
      v6 = v5;
    }
    while ( v5 < 0x80u );
    *v1 = v5;
    v1 = a1 + 1;
  }
  if ( v5 >= 0x100u )
  {
    do
    {
      ++v4;
      v7 = (v5 << 15) | (*a1 >> 1);
      v5 >>= 1;
      *a1 = v7;
    }
    while ( v5 >= 0x100u );
    *v1 = v5;
    v1 = a1 + 1;
  }
  v5 &= 0x7Fu;
LABEL_11:
  result = v4;
  *v1 = v3 | v5;
  return result;
}
