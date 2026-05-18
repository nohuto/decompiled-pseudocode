/*
 * XREFs of sub_18005106C @ 0x18005106C
 * Callers:
 *     sub_180051B88 @ 0x180051B88 (sub_180051B88.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180051210 @ 0x180051210 (sub_180051210.c)
 */

__int64 *__fastcall sub_18005106C(__int64 *a1, __int64 a2, __int64 *a3, unsigned int *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v8 = sub_18001B1F8(64LL);
  v9 = 0LL;
  if ( v8 )
  {
    v10 = *a4;
    v12 = *a3;
    *a3 = 0LL;
    v9 = sub_180051210(v8, a2, &v12, v10);
  }
  *a1 = v9;
  return a1;
}
