/*
 * XREFs of sub_180050F0C @ 0x180050F0C
 * Callers:
 *     sub_180051A28 @ 0x180051A28 (sub_180051A28.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_1800510B0 @ 0x1800510B0 (sub_1800510B0.c)
 */

__int64 *__fastcall sub_180050F0C(__int64 *a1, __int64 a2, __int64 *a3, unsigned int *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v8 = sub_18001B098(64LL);
  v9 = 0LL;
  if ( v8 )
  {
    v10 = *a4;
    v12 = *a3;
    *a3 = 0LL;
    v9 = sub_1800510B0(v8, a2, &v12, v10);
  }
  *a1 = v9;
  return a1;
}
