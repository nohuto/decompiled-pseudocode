/*
 * XREFs of sub_18001D23C @ 0x18001D23C
 * Callers:
 *     sub_18001D6AC @ 0x18001D6AC (sub_18001D6AC.c)
 * Callees:
 *     memcpy @ 0x18000CE31 (memcpy.c)
 *     sub_180010A18 @ 0x180010A18 (sub_180010A18.c)
 *     sub_1800118EC @ 0x1800118EC (sub_1800118EC.c)
 *     sub_1800119D8 @ 0x1800119D8 (sub_1800119D8.c)
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 */

void **__fastcall sub_18001D23C(void **Src, unsigned __int64 a2, __int64 a3, char a4)
{
  size_t v4; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  void *v9; // r14
  void *v10; // rbx
  __int64 v11; // rcx
  unsigned __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v4 = (size_t)Src[2];
  if ( v4 == 0x7FFFFFFFFFFFFFFFLL )
    sub_180011BA0();
  v7 = (unsigned __int64)Src[3];
  v13 = sub_1800118EC(v4 + 1, v7, 0x7FFFFFFFFFFFFFFFuLL);
  v9 = (void *)sub_180010A18(v8, &v13);
  Src[3] = (void *)v13;
  Src[2] = (void *)(v4 + 1);
  if ( v7 <= 0xF )
  {
    memcpy(v9, Src, v4);
    *((_BYTE *)v9 + v4) = a4;
    *((_BYTE *)v9 + v4 + 1) = 0;
  }
  else
  {
    v10 = *Src;
    memcpy(v9, *Src, v4);
    *((_BYTE *)v9 + v4) = a4;
    *((_BYTE *)v9 + v4 + 1) = 0;
    sub_1800119D8(v11, v10, v7);
  }
  *Src = v9;
  return Src;
}
