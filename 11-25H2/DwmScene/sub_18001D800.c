/*
 * XREFs of sub_18001D800 @ 0x18001D800
 * Callers:
 *     sub_18001E574 @ 0x18001E574 (sub_18001E574.c)
 * Callees:
 *     memcpy @ 0x18000CD49 (memcpy.c)
 *     sub_180011AA0 @ 0x180011AA0 (sub_180011AA0.c)
 *     sub_180011FD4 @ 0x180011FD4 (sub_180011FD4.c)
 *     sub_180012F0C @ 0x180012F0C (sub_180012F0C.c)
 *     sub_180012FE0 @ 0x180012FE0 (sub_180012FE0.c)
 */

__int64 __fastcall sub_18001D800(__int64 a1, unsigned __int64 a2, __int64 a3, const void *a4)
{
  unsigned __int64 v7; // rbp
  __int64 v8; // rcx
  char *v9; // rax
  unsigned __int64 v10; // rcx
  char *v11; // rsi
  size_t v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    sub_180011AA0();
  v7 = *(_QWORD *)(a1 + 24);
  v15 = sub_180012F0C(a2, v7, 0x7FFFFFFFFFFFFFFEuLL);
  v9 = (char *)sub_180011FD4(v8, &v15);
  v10 = v15;
  *(_QWORD *)(a1 + 16) = a2;
  v11 = v9;
  *(_QWORD *)(a1 + 24) = v10;
  v12 = 2 * a2;
  memcpy(v9, a4, v12);
  *(_WORD *)&v11[v12] = 0;
  if ( v7 > 7 )
    sub_180012FE0(v13, *(void **)a1, v7);
  *(_QWORD *)a1 = v11;
  return a1;
}
