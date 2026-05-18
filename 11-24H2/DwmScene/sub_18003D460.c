/*
 * XREFs of sub_18003D460 @ 0x18003D460
 * Callers:
 *     sub_18003DB68 @ 0x18003DB68 (sub_18003DB68.c)
 *     sub_18003FEE0 @ 0x18003FEE0 (sub_18003FEE0.c)
 *     sub_1800685F4 @ 0x1800685F4 (sub_1800685F4.c)
 *     sub_18008DE6C @ 0x18008DE6C (sub_18008DE6C.c)
 *     sub_18009A1A4 @ 0x18009A1A4 (sub_18009A1A4.c)
 *     sub_1800CFFF0 @ 0x1800CFFF0 (sub_1800CFFF0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18003D460(unsigned __int64 *a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  result = 0LL;
  v5 = a1;
  v6 = (unsigned __int64)((char *)a2 - (char *)a1 + 7) >> 3;
  if ( a1 > a2 )
    v6 = 0LL;
  if ( v6 >= 2 )
  {
    result = *a3;
    v7 = (unsigned __int64)&a1[v6 - 1];
    if ( v5 > a3 || v7 < (unsigned __int64)a3 )
    {
      v8 = 8 * (v6 & 0xFFFFFFFFFFFFFFFEuLL);
      memset64(v5, result, v8 >> 3);
      v5 = (unsigned __int64 *)((char *)v5 + v8);
    }
  }
  while ( v5 != a2 )
  {
    result = *a3;
    *v5++ = *a3;
  }
  return result;
}
