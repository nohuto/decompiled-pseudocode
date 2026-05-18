/*
 * XREFs of sub_180084D78 @ 0x180084D78
 * Callers:
 *     sub_180086A84 @ 0x180086A84 (sub_180086A84.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_180013178 @ 0x180013178 (sub_180013178.c)
 *     sub_180016664 @ 0x180016664 (sub_180016664.c)
 *     sub_18001E324 @ 0x18001E324 (sub_18001E324.c)
 */

__int64 __fastcall sub_180084D78(const void **a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  char *v8; // rdi
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    sub_180013178();
  v5 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  v10 = sub_18001E324(a1, a2);
  v6 = v10;
  v8 = (char *)sub_180016664(v7, &v10);
  memset(&v8[4 * v5], 0, 4 * (a2 - v5));
  memmove(v8, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
  return sub_18001E39C((__int64)a1, (__int64)v8, a2, v6);
}
