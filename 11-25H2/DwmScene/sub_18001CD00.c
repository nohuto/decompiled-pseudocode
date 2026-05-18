/*
 * XREFs of sub_18001CD00 @ 0x18001CD00
 * Callers:
 *     sub_18001B518 @ 0x18001B518 (sub_18001B518.c)
 * Callees:
 *     memcpy @ 0x18000CD49 (memcpy.c)
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_1800137F8 @ 0x1800137F8 (sub_1800137F8.c)
 *     sub_18001BA64 @ 0x18001BA64 (sub_18001BA64.c)
 *     sub_18001C9D8 @ 0x18001C9D8 (sub_18001C9D8.c)
 */

void **__fastcall sub_18001CD00(void **Src, __int64 a2, char *a3, unsigned __int64 a4)
{
  __int64 v7; // r8
  char *v8; // rax
  __int64 v9; // r8
  char *v10; // r14
  size_t v11; // rbx

  sub_18001C9D8((__int64)Src, 0LL);
  v7 = (__int64)Src[2];
  if ( (char *)a4 > (char *)Src[3] - v7 )
    return sub_18001BA64(Src, a4, v7);
  Src[2] = (void *)(v7 + a4);
  v8 = (char *)sub_1800137F8((__int64)Src);
  v10 = v8;
  if ( &a3[a4] <= v8 || a3 > &v8[v9] )
  {
    v11 = a4;
  }
  else if ( v8 > a3 )
  {
    v11 = v8 - a3;
  }
  else
  {
    v11 = 0LL;
  }
  memmove(&v8[a4], v8, v9 + 1);
  memcpy(v10, a3, v11);
  memcpy(&v10[v11], &a3[v11 + a4], a4 - v11);
  return Src;
}
