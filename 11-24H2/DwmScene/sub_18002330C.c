/*
 * XREFs of sub_18002330C @ 0x18002330C
 * Callers:
 *     sub_1800238EC @ 0x1800238EC (sub_1800238EC.c)
 * Callees:
 *     sub_180023DE4 @ 0x180023DE4 (sub_180023DE4.c)
 */

_DWORD *__fastcall sub_18002330C(__int64 a1, __int64 a2)
{
  int v2; // edx
  _DWORD *v3; // r8
  _DWORD *result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)sub_180023DE4(&v5, a2, a1);
  result = v3;
  *v3 = v2;
  return result;
}
