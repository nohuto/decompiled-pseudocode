/*
 * XREFs of sub_18001DCC8 @ 0x18001DCC8
 * Callers:
 *     sub_18001E890 @ 0x18001E890 (sub_18001E890.c)
 * Callees:
 *     memset @ 0x18000C4E8 (memset.c)
 *     memcpy @ 0x18000CE31 (memcpy.c)
 *     sub_180010A18 @ 0x180010A18 (sub_180010A18.c)
 *     sub_1800118EC @ 0x1800118EC (sub_1800118EC.c)
 *     sub_1800119D8 @ 0x1800119D8 (sub_1800119D8.c)
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 */

void **__fastcall sub_18001DCC8(void **Src, unsigned __int64 a2, __int64 a3, size_t a4)
{
  size_t v4; // rsi
  unsigned __int64 v7; // r12
  size_t v8; // rbx
  __int64 v9; // rcx
  char *v10; // r14
  char *v11; // r15
  void *v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = (size_t)Src[2];
  if ( 0x7FFFFFFFFFFFFFFFLL - v4 < a2 )
    sub_180011BA0();
  v7 = (unsigned __int64)Src[3];
  v8 = v4 + a2;
  v15 = sub_1800118EC(v4 + a2, v7, 0x7FFFFFFFFFFFFFFFuLL);
  v10 = (char *)sub_180010A18(v9, &v15);
  Src[3] = (void *)v15;
  Src[2] = (void *)v8;
  v11 = &v10[v4];
  if ( v7 <= 0xF )
  {
    memcpy(v10, Src, v4);
    memset(v11, 0, a4);
    v11[a4] = 0;
  }
  else
  {
    v12 = *Src;
    memcpy(v10, *Src, v4);
    memset(v11, 0, a4);
    v11[a4] = 0;
    sub_1800119D8(v13, v12, v7);
  }
  *Src = v10;
  return Src;
}
