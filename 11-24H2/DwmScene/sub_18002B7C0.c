/*
 * XREFs of sub_18002B7C0 @ 0x18002B7C0
 * Callers:
 *     sub_1800876C8 @ 0x1800876C8 (sub_1800876C8.c)
 * Callees:
 *     sub_18002E600 @ 0x18002E600 (sub_18002E600.c)
 */

_QWORD *__fastcall sub_18002B7C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // r8
  _QWORD *result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)sub_18002E600(&v5, a2, a1);
  result = v3;
  *v3 = v2;
  return result;
}
