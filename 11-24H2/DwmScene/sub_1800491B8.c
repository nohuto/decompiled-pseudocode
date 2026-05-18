/*
 * XREFs of sub_1800491B8 @ 0x1800491B8
 * Callers:
 *     sub_180048CD8 @ 0x180048CD8 (sub_180048CD8.c)
 * Callees:
 *     _o__fdclass @ 0x18000C38A (_o__fdclass.c)
 */

bool __fastcall sub_1800491B8(float *a1)
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
