/*
 * XREFs of sub_1800C61F4 @ 0x1800C61F4
 * Callers:
 *     sub_1800C6A94 @ 0x1800C6A94 (sub_1800C6A94.c)
 * Callees:
 *     unknown_libname_96 @ 0x1800C61DC (unknown_libname_96.c)
 */

__int64 __fastcall sub_1800C61F4(__int64 a1, _OWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  unknown_libname_96(*(_OWORD **)(a1 + 8), a2);
  result = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 8) = result + 32;
  return result;
}
