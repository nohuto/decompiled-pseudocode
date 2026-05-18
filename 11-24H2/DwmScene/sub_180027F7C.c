/*
 * XREFs of sub_180027F7C @ 0x180027F7C
 * Callers:
 *     sub_1800285D8 @ 0x1800285D8 (sub_1800285D8.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180027F7C(__int64 a1, __int64 a2)
{
  return *(_QWORD *)a1 == *(_QWORD *)a2 && *(_BYTE *)(a1 + 8) == *(_BYTE *)(a2 + 8);
}
