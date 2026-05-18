/*
 * XREFs of sub_18001D4D8 @ 0x18001D4D8
 * Callers:
 *     sub_180086554 @ 0x180086554 (sub_180086554.c)
 * Callees:
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001C9D8 @ 0x18001C9D8 (sub_18001C9D8.c)
 */

__int64 __fastcall sub_18001D4D8(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rbx
  char *v6; // rax
  unsigned __int64 v7; // rbx

  sub_18001C9D8(a1, 0LL);
  v5 = *(_QWORD *)(a1 + 16);
  if ( v5 < a3 )
    a3 = *(_QWORD *)(a1 + 16);
  v6 = (char *)sub_1800137F8(a1);
  v7 = v5 - a3;
  memmove(v6, &v6[a3], v7 + 1);
  *(_QWORD *)(a1 + 16) = v7;
  return a1;
}
