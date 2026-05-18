/*
 * XREFs of sub_18001D9AC @ 0x18001D9AC
 * Callers:
 *     sub_18001E640 @ 0x18001E640 (sub_18001E640.c)
 * Callees:
 *     memcpy @ 0x18000CD49 (memcpy.c)
 *     sub_180011AA0 @ 0x180011AA0 (sub_180011AA0.c)
 *     sub_180011FD4 @ 0x180011FD4 (sub_180011FD4.c)
 *     sub_180012F0C @ 0x180012F0C (sub_180012F0C.c)
 *     sub_180012FE0 @ 0x180012FE0 (sub_180012FE0.c)
 */

void **sub_18001D9AC(void **Src, unsigned __int64 a2, __int64 a3, ...)
{
  void *v3; // r14
  unsigned __int64 v5; // r15
  char *v6; // rbx
  __int64 v7; // rcx
  char *v8; // rsi
  size_t v9; // r14
  __int64 v10; // rcx
  size_t v11; // r8
  char *v12; // rbp
  void *v13; // rbx
  __int64 v14; // rcx
  unsigned __int64 v16; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  __int64 v18; // [rsp+60h] [rbp+28h]
  __int64 v19; // [rsp+68h] [rbp+30h]
  va_list va1; // [rsp+70h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v16 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, _QWORD);
  v3 = Src[2];
  if ( 0x7FFFFFFFFFFFFFFELL - (__int64)v3 < a2 )
    sub_180011AA0();
  v5 = (unsigned __int64)Src[3];
  v6 = (char *)v3 + a2;
  v16 = sub_180012F0C((__int64)v3 + a2, v5, 0x7FFFFFFFFFFFFFFEuLL);
  v8 = (char *)sub_180011FD4(v7, (unsigned __int64 *)va);
  Src[3] = (void *)v16;
  v9 = 2LL * (_QWORD)v3 + 2;
  v10 = v19;
  Src[2] = v6;
  v11 = 2 * v10;
  v12 = &v8[2 * v10];
  if ( v5 <= 7 )
  {
    memcpy(v8, L"FL_", v11);
    memcpy(v12, Src, v9);
  }
  else
  {
    v13 = *Src;
    memcpy(v8, L"FL_", v11);
    memcpy(v12, v13, v9);
    sub_180012FE0(v14, v13, v5);
  }
  *Src = v8;
  return Src;
}
