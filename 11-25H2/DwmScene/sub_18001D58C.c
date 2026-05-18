/*
 * XREFs of sub_18001D58C @ 0x18001D58C
 * Callers:
 *     sub_180085F18 @ 0x180085F18 (sub_180085F18.c)
 *     sub_180086554 @ 0x180086554 (sub_180086554.c)
 * Callees:
 *     sub_180010984 @ 0x180010984 (sub_180010984.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001C9D8 @ 0x18001C9D8 (sub_18001C9D8.c)
 */

_QWORD *__fastcall sub_18001D58C(__int64 a1, _QWORD *a2, unsigned __int64 a3, size_t a4)
{
  __int64 v8; // rax

  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001C9D8(a1, a3);
  if ( *(_QWORD *)(a1 + 16) - a3 < a4 )
    a4 = *(_QWORD *)(a1 + 16) - a3;
  v8 = sub_1800137F8(a1);
  sub_180010984(a2, (const void *)(a3 + v8), a4);
  return a2;
}
