/*
 * XREFs of sub_18001E484 @ 0x18001E484
 * Callers:
 *     sub_18001D7F8 @ 0x18001D7F8 (sub_18001D7F8.c)
 *     sub_180078B14 @ 0x180078B14 (sub_180078B14.c)
 *     sub_18007ACC8 @ 0x18007ACC8 (sub_18007ACC8.c)
 *     sub_180084ED8 @ 0x180084ED8 (sub_180084ED8.c)
 *     sub_180094E48 @ 0x180094E48 (sub_180094E48.c)
 *     sub_1800CCE8C @ 0x1800CCE8C (sub_1800CCE8C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001E484(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x3FFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 2;
  v4 = v3 >> 1;
  if ( v3 <= 0x3FFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
