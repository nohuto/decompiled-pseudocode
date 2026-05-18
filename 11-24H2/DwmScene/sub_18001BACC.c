/*
 * XREFs of sub_18001BACC @ 0x18001BACC
 * Callers:
 *     sub_18001CDAC @ 0x18001CDAC (sub_18001CDAC.c)
 * Callees:
 *     memcpy @ 0x18000CE31 (memcpy.c)
 *     sub_180010A18 @ 0x180010A18 (sub_180010A18.c)
 *     sub_1800118EC @ 0x1800118EC (sub_1800118EC.c)
 *     sub_1800119D8 @ 0x1800119D8 (sub_1800119D8.c)
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 */

void **__fastcall sub_18001BACC(void **Src, unsigned __int64 a2, __int64 a3, const void *a4, size_t Size)
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
    sub_180011BA0();
  v8 = (unsigned __int64)Src[3];
  v9 = v5 + a2;
  v17 = sub_1800118EC(v5 + a2, v8, 0x7FFFFFFFFFFFFFFFuLL);
  v11 = (char *)sub_180010A18(v10, &v17);
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
    sub_1800119D8(v15, v14, v8);
  }
  *Src = v11;
  return Src;
}
