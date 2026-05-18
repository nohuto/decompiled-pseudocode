/*
 * XREFs of sub_180068010 @ 0x180068010
 * Callers:
 *     sub_18005E200 @ 0x18005E200 (sub_18005E200.c)
 *     sub_18005E324 @ 0x18005E324 (sub_18005E324.c)
 *     sub_1800CF78C @ 0x1800CF78C (sub_1800CF78C.c)
 *     sub_1800CFAC4 @ 0x1800CFAC4 (sub_1800CFAC4.c)
 *     sub_1800D14F4 @ 0x1800D14F4 (sub_1800D14F4.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180068010(__int64 a1)
{
  __int64 v2; // rdx
  float v3; // xmm0_4
  __int64 v4; // rcx
  float v5; // xmm1_4

  v2 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v2 < 0 )
    v3 = (float)(v2 & 1 | (unsigned int)((unsigned __int64)v2 >> 1))
       + (float)(v2 & 1 | (unsigned int)((unsigned __int64)v2 >> 1));
  else
    v3 = (float)(int)v2;
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 < 0 )
    v5 = (float)(v4 & 1 | (unsigned int)((unsigned __int64)v4 >> 1))
       + (float)(v4 & 1 | (unsigned int)((unsigned __int64)v4 >> 1));
  else
    v5 = (float)(int)v4;
  return (float)(v3 / v5) > *(float *)a1;
}
