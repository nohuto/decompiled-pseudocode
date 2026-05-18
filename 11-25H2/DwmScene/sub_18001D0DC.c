/*
 * XREFs of sub_18001D0DC @ 0x18001D0DC
 * Callers:
 *     sub_18001D54C @ 0x18001D54C (sub_18001D54C.c)
 * Callees:
 *     memcpy @ 0x18000CD49 (memcpy.c)
 *     sub_180010918 @ 0x180010918 (sub_180010918.c)
 *     sub_1800117EC @ 0x1800117EC (sub_1800117EC.c)
 *     sub_1800118D8 @ 0x1800118D8 (sub_1800118D8.c)
 *     sub_180011AA0 @ 0x180011AA0 (sub_180011AA0.c)
 */

void **__fastcall sub_18001D0DC(void **Src, unsigned __int64 a2, __int64 a3, char a4)
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
    sub_180011AA0();
  v7 = (unsigned __int64)Src[3];
  v13 = sub_1800117EC(v4 + 1, v7, 0x7FFFFFFFFFFFFFFFuLL);
  v9 = (void *)sub_180010918(v8, &v13);
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
    sub_1800118D8(v11, v10, v7);
  }
  *Src = v9;
  return Src;
}
