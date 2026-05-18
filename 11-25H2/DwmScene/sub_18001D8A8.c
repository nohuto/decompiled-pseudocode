/*
 * XREFs of sub_18001D8A8 @ 0x18001D8A8
 * Callers:
 *     sub_18001E504 @ 0x18001E504 (sub_18001E504.c)
 * Callees:
 *     memcpy @ 0x18000CD49 (memcpy.c)
 *     sub_180011AA0 @ 0x180011AA0 (sub_180011AA0.c)
 *     sub_180011FD4 @ 0x180011FD4 (sub_180011FD4.c)
 *     sub_180012F0C @ 0x180012F0C (sub_180012F0C.c)
 *     sub_180012FE0 @ 0x180012FE0 (sub_180012FE0.c)
 */

void **__fastcall sub_18001D8A8(void **Src, unsigned __int64 a2, __int64 a3, const void *a4, __int64 a5)
{
  void *v5; // r14
  unsigned __int64 v8; // r13
  char *v9; // rbx
  __int64 v10; // rcx
  char *v11; // rax
  __int64 v12; // rdx
  size_t v13; // r8
  __int64 v14; // r14
  char *v15; // rsi
  char *v16; // r12
  size_t v17; // r15
  void *v18; // rbx
  __int64 v19; // rcx
  unsigned __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  v5 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v5 < a2 )
    sub_180011AA0();
  v8 = (unsigned __int64)Src[3];
  v9 = (char *)v5 + a2;
  v21 = sub_180012F0C((__int64)v5 + a2, v8, 0x7FFFFFFFFFFFFFFEuLL);
  v11 = (char *)sub_180011FD4(v10, &v21);
  v12 = a5;
  v13 = 2LL * (_QWORD)v5;
  v14 = (__int64)v5 + a5;
  Src[3] = (void *)v21;
  v15 = v11;
  Src[2] = v9;
  v16 = &v11[v13];
  v17 = 2 * v12;
  if ( v8 <= 7 )
  {
    memcpy(v11, Src, v13);
    memcpy(v16, a4, v17);
    *(_WORD *)&v15[2 * v14] = 0;
  }
  else
  {
    v18 = *Src;
    memcpy(v11, *Src, v13);
    memcpy(v16, a4, v17);
    *(_WORD *)&v15[2 * v14] = 0;
    sub_180012FE0(v19, v18, v8);
  }
  *Src = v15;
  return Src;
}
