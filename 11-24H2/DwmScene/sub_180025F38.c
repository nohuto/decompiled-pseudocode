/*
 * XREFs of sub_180025F38 @ 0x180025F38
 * Callers:
 *     sub_180023C3C @ 0x180023C3C (sub_180023C3C.c)
 *     sub_18004A390 @ 0x18004A390 (sub_18004A390.c)
 *     sub_18004A458 @ 0x18004A458 (sub_18004A458.c)
 *     sub_18005DC9C @ 0x18005DC9C (sub_18005DC9C.c)
 * Callees:
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 */

__int64 __fastcall sub_180025F38(__int64 a1)
{
  __int64 result; // rax

  result = 0x3FFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)(a1 + 8) == 0x3FFFFFFFFFFFFFFLL )
    sub_18001CD64();
  return result;
}
