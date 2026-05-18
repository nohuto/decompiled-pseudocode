/*
 * XREFs of sub_180072ECC @ 0x180072ECC
 * Callers:
 *     sub_180072E1C @ 0x180072E1C (sub_180072E1C.c)
 *     sub_18007332C @ 0x18007332C (sub_18007332C.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 */

__int64 sub_180072ECC()
{
  __int64 result; // rax

  result = sub_18001B098(96LL);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
