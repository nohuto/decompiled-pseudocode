/*
 * XREFs of sub_180027E1C @ 0x180027E1C
 * Callers:
 *     sub_180028478 @ 0x180028478 (sub_180028478.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180027E1C(__int64 a1, __int64 a2)
{
  return *(_QWORD *)a1 == *(_QWORD *)a2 && *(_BYTE *)(a1 + 8) == *(_BYTE *)(a2 + 8);
}
