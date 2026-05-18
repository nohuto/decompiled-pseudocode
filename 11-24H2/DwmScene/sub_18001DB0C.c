/*
 * XREFs of sub_18001DB0C @ 0x18001DB0C
 * Callers:
 *     sub_18001E7A0 @ 0x18001E7A0 (sub_18001E7A0.c)
 * Callees:
 *     memcpy @ 0x18000CE31 (memcpy.c)
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_18001300C @ 0x18001300C (sub_18001300C.c)
 *     sub_1800130E0 @ 0x1800130E0 (sub_1800130E0.c)
 */

void **sub_18001DB0C(void **Src, unsigned __int64 a2, __int64 a3, ...)
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
    sub_180011BA0();
  v5 = (unsigned __int64)Src[3];
  v6 = (char *)v3 + a2;
  v16 = sub_18001300C((__int64)v3 + a2, v5, 0x7FFFFFFFFFFFFFFEuLL);
  v8 = (char *)sub_1800120D4(v7, (unsigned __int64 *)va);
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
    sub_1800130E0(v14, v13, v5);
  }
  *Src = v8;
  return Src;
}
