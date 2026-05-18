/*
 * XREFs of sub_18007D140 @ 0x18007D140
 * Callers:
 *     sub_18005B4F8 @ 0x18005B4F8 (sub_18005B4F8.c)
 *     sub_1800C0598 @ 0x1800C0598 (sub_1800C0598.c)
 * Callees:
 *     unknown_libname_94 @ 0x18007D05C (unknown_libname_94.c)
 */

__int64 __fastcall sub_18007D140(__int64 a1, _OWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  unknown_libname_94(*(_OWORD **)(a1 + 8), a2);
  result = *(_QWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 8) = result + 16;
  return result;
}
