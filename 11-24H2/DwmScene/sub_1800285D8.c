/*
 * XREFs of sub_1800285D8 @ 0x1800285D8
 * Callers:
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     sub_18002838C @ 0x18002838C (sub_18002838C.c)
 *     sub_180028A64 @ 0x180028A64 (sub_180028A64.c)
 * Callees:
 *     sub_180027F7C @ 0x180027F7C (sub_180027F7C.c)
 *     sub_180028774 @ 0x180028774 (sub_180028774.c)
 */

__int64 *__fastcall sub_1800285D8(__int64 a1, __int64 *a2, char a3)
{
  __int64 *v6; // rax
  __int64 v7; // r8
  __int64 i; // rcx
  __int64 *result; // rax
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v6 = (__int64 *)sub_180028774();
  v10 = a1;
  v11 = a3;
  v7 = v6[1];
  for ( i = *v6; i != v7 && !sub_180027F7C(i, (__int64)&v10); i += 16LL )
    ;
  result = a2;
  *a2 = i;
  return result;
}
