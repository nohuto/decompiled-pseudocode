/*
 * XREFs of sub_1800131FC @ 0x1800131FC
 * Callers:
 *     sub_180013198 @ 0x180013198 (sub_180013198.c)
 *     sub_18001B4B0 @ 0x18001B4B0 (sub_18001B4B0.c)
 *     sub_18001B57C @ 0x18001B57C (sub_18001B57C.c)
 * Callees:
 *     memcpy @ 0x18000CD49 (memcpy.c)
 *     sub_180010918 @ 0x180010918 (sub_180010918.c)
 *     sub_1800117EC @ 0x1800117EC (sub_1800117EC.c)
 */

__int64 *__fastcall sub_1800131FC(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        const void *a4,
        size_t Size,
        void *Src,
        size_t a7)
{
  size_t v7; // r14
  size_t v8; // rbp
  __int64 v9; // rdx
  size_t v12; // rsi
  char *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 *result; // rax
  unsigned __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  v17 = a3;
  v7 = Size;
  v8 = a7;
  v9 = 15LL;
  *(_OWORD *)a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v12 = v7 + v8;
  v13 = (char *)a1;
  if ( v7 + v8 > 0xF )
  {
    v17 = sub_1800117EC(v7 + v8, 0xFuLL, 0x7FFFFFFFFFFFFFFFuLL);
    v15 = sub_180010918(v14, &v17);
    v9 = v17;
    v13 = (char *)v15;
    *a1 = v15;
  }
  a1[3] = v9;
  a1[2] = v12;
  memcpy(v13, a4, v7);
  memcpy(&v13[v7], Src, v8);
  result = a1;
  v13[v12] = 0;
  return result;
}
