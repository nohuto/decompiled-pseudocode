/*
 * XREFs of sub_18002B7E8 @ 0x18002B7E8
 * Callers:
 *     sub_18002C088 @ 0x18002C088 (sub_18002C088.c)
 * Callees:
 *     sub_18002E5E0 @ 0x18002E5E0 (sub_18002E5E0.c)
 */

_DWORD *__fastcall sub_18002B7E8(__int64 a1, __int64 a2)
{
  int v2; // edx
  _DWORD *v3; // r8
  _DWORD *result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)sub_18002E5E0(&v5, a2, a1);
  result = v3;
  *v3 = v2;
  return result;
}
