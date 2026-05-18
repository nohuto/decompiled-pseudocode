/*
 * XREFs of sub_18002B688 @ 0x18002B688
 * Callers:
 *     sub_18002BF28 @ 0x18002BF28 (sub_18002BF28.c)
 * Callees:
 *     sub_18002E480 @ 0x18002E480 (sub_18002E480.c)
 */

_DWORD *__fastcall sub_18002B688(__int64 a1, __int64 a2)
{
  int v2; // edx
  _DWORD *v3; // r8
  _DWORD *result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)sub_18002E480(&v5, a2, a1);
  result = v3;
  *v3 = v2;
  return result;
}
