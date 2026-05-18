/*
 * XREFs of sub_180086DBC @ 0x180086DBC
 * Callers:
 *     sub_1800862C0 @ 0x1800862C0 (sub_1800862C0.c)
 *     sub_1800866B4 @ 0x1800866B4 (sub_1800866B4.c)
 * Callees:
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001DDF4 @ 0x18001DDF4 (sub_18001DDF4.c)
 */

bool __fastcall sub_180086DBC(__int64 a1, __int64 a2)
{
  char *v4; // rax
  __int64 v5; // rdx
  char *v6; // r9
  bool v7; // bl

  sub_1800138F8(a2);
  v4 = (char *)sub_1800138F8(a1);
  v7 = sub_18001DDF4(v4, *(_QWORD *)(a1 + 16), *(_QWORD *)(v5 + 16), v6, *(_QWORD *)(v5 + 16)) == 0;
  sub_180011B5C(a1);
  sub_180011B5C(a2);
  return v7;
}
