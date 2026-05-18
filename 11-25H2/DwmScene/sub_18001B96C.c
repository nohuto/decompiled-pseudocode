/*
 * XREFs of sub_18001B96C @ 0x18001B96C
 * Callers:
 *     sub_18001CC4C @ 0x18001CC4C (sub_18001CC4C.c)
 * Callees:
 *     memcpy @ 0x18000CD49 (memcpy.c)
 *     sub_180010918 @ 0x180010918 (sub_180010918.c)
 *     sub_1800117EC @ 0x1800117EC (sub_1800117EC.c)
 *     sub_1800118D8 @ 0x1800118D8 (sub_1800118D8.c)
 *     sub_180011AA0 @ 0x180011AA0 (sub_180011AA0.c)
 */

void **__fastcall sub_18001B96C(void **Src, unsigned __int64 a2, __int64 a3, const void *a4, size_t Size)
{
  size_t v5; // rsi
  unsigned __int64 v8; // r13
  size_t v9; // rbx
  __int64 v10; // rcx
  char *v11; // r14
  size_t v12; // rbp
  char *v13; // r15
  void *v14; // rbx
  __int64 v15; // rcx
  unsigned __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v5 = (size_t)Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - v5 < a2 )
    sub_180011AA0();
  v8 = (unsigned __int64)Src[3];
  v9 = v5 + a2;
  v17 = sub_1800117EC(v5 + a2, v8, 0x7FFFFFFFFFFFFFFFuLL);
  v11 = (char *)sub_180010918(v10, &v17);
  v12 = Size;
  Src[3] = (void *)v17;
  Src[2] = (void *)v9;
  v13 = &v11[v5];
  if ( v8 <= 0xF )
  {
    memcpy(v11, Src, v5);
    memcpy(v13, a4, v12);
    v13[v12] = 0;
  }
  else
  {
    v14 = *Src;
    memcpy(v11, *Src, v5);
    memcpy(v13, a4, v12);
    v13[v12] = 0;
    sub_1800118D8(v15, v14, v8);
  }
  *Src = v11;
  return Src;
}
