/*
 * XREFs of sub_180086C5C @ 0x180086C5C
 * Callers:
 *     sub_180086160 @ 0x180086160 (sub_180086160.c)
 *     sub_180086554 @ 0x180086554 (sub_180086554.c)
 * Callees:
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001DC94 @ 0x18001DC94 (sub_18001DC94.c)
 */

bool __fastcall sub_180086C5C(__int64 a1, __int64 a2)
{
  char *v4; // rax
  __int64 v5; // rdx
  char *v6; // r9
  bool v7; // bl

  sub_1800137F8(a2);
  v4 = (char *)sub_1800137F8(a1);
  v7 = sub_18001DC94(v4, *(_QWORD *)(a1 + 16), *(_QWORD *)(v5 + 16), v6, *(_QWORD *)(v5 + 16)) == 0;
  sub_180011A5C(a1);
  sub_180011A5C(a2);
  return v7;
}
