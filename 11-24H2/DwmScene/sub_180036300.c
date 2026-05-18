/*
 * XREFs of sub_180036300 @ 0x180036300
 * Callers:
 *     sub_18002C6BC @ 0x18002C6BC (sub_18002C6BC.c)
 *     sub_18002E0F8 @ 0x18002E0F8 (sub_18002E0F8.c)
 * Callees:
 *     sub_18001CD64 @ 0x18001CD64 (sub_18001CD64.c)
 */

__int64 __fastcall sub_180036300(__int64 a1)
{
  __int64 result; // rax

  result = 0x38E38E38E38E38ELL;
  if ( *(_QWORD *)(a1 + 8) == 0x38E38E38E38E38ELL )
    sub_18001CD64();
  return result;
}
