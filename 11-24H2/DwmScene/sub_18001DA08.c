/*
 * XREFs of sub_18001DA08 @ 0x18001DA08
 * Callers:
 *     sub_18001E664 @ 0x18001E664 (sub_18001E664.c)
 * Callees:
 *     memcpy @ 0x18000CE31 (memcpy.c)
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_18001300C @ 0x18001300C (sub_18001300C.c)
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 */

void **__fastcall sub_18001DA08(void **Src, unsigned __int64 a2, __int64 a3, const void *a4, __int64 a5)
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
    sub_180011BA0();
  v8 = (unsigned __int64)Src[3];
  v9 = (char *)v5 + a2;
  v21 = sub_18001300C((__int64)v5 + a2, v8, 0x7FFFFFFFFFFFFFFEuLL);
  v11 = (char *)sub_1800120D4(v10, &v21);
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
    sub_1800130E0(v19, v18, v8);
  }
  *Src = v15;
  return Src;
}
