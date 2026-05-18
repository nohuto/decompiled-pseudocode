/*
 * XREFs of sub_18008DE6C @ 0x18008DE6C
 * Callers:
 *     sub_180090AFC @ 0x180090AFC (sub_180090AFC.c)
 * Callees:
 *     sub_18003D460 @ 0x18003D460 (sub_18003D460.c)
 *     sub_18008D988 @ 0x18008D988 (sub_18008D988.c)
 */

unsigned __int64 __fastcall sub_18008DE6C(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 *v4; // rdx
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)*a1;
  if ( *a1 && v1[2] )
  {
    v2 = (_QWORD *)v1[1];
    if ( v1[7] >> 3 <= v1[2] )
    {
      sub_18008D988((__int64)a1, (__int64)v2);
      *(_QWORD *)v1[1] = v1[1];
      *(_QWORD *)(v1[1] + 8LL) = v1[1];
      v1[2] = 0LL;
      v4 = (unsigned __int64 *)v1[4];
      v5 = (unsigned __int64 *)v1[3];
      v6 = v1[1];
      return sub_18003D460(v5, v4, &v6);
    }
    else
    {
      return sub_180090D40(*a1, *v2, v1[1]);
    }
  }
  return result;
}
