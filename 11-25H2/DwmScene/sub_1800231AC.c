/*
 * XREFs of sub_1800231AC @ 0x1800231AC
 * Callers:
 *     sub_18002378C @ 0x18002378C (sub_18002378C.c)
 * Callees:
 *     sub_180023C84 @ 0x180023C84 (sub_180023C84.c)
 */

_DWORD *__fastcall sub_1800231AC(__int64 a1, __int64 a2)
{
  int v2; // edx
  _DWORD *v3; // r8
  _DWORD *result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)sub_180023C84(&v5, a2, a1);
  result = v3;
  *v3 = v2;
  return result;
}
