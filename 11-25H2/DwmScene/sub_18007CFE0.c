/*
 * XREFs of sub_18007CFE0 @ 0x18007CFE0
 * Callers:
 *     sub_18005B398 @ 0x18005B398 (sub_18005B398.c)
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 * Callees:
 *     unknown_libname_94 @ 0x18007CEFC (unknown_libname_94.c)
 */

__int64 __fastcall sub_18007CFE0(__int64 a1, _OWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  unknown_libname_94(*(_OWORD **)(a1 + 8), a2);
  result = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 8) = result + 16;
  return result;
}
