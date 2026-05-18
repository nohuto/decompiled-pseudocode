/*
 * XREFs of sub_180049058 @ 0x180049058
 * Callers:
 *     sub_180048B78 @ 0x180048B78 (sub_180048B78.c)
 * Callees:
 *     _o__fdclass @ 0x18000BF2A (_o__fdclass.c)
 */

bool __fastcall sub_180049058(float *a1)
{
  float v1; // xmm0_4
  __int64 v2; // rax
  float *v3; // rcx

  v1 = *a1;
  v2 = 15LL;
  v3 = a1 + 1;
  do
  {
    v1 = v1 + *v3++;
    --v2;
  }
  while ( v2 );
  return (__int16)o__fdclass() <= 0;
}
