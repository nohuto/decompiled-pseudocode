/*
 * XREFs of sub_180073A90 @ 0x180073A90
 * Callers:
 *     sub_180075340 @ 0x180075340 (sub_180075340.c)
 *     sub_180077E60 @ 0x180077E60 (sub_180077E60.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_180013278 @ 0x180013278 (sub_180013278.c)
 *     sub_180073F38 @ 0x180073F38 (sub_180073F38.c)
 *     sub_18007587C @ 0x18007587C (sub_18007587C.c)
 */

__int64 *sub_180073A90(__int64 *a1, const void *a2, __int64 a3, ...)
{
  size_t v3; // rbp
  unsigned __int64 v4; // rdi
  __int64 v7; // rbx
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = a3 - (_QWORD)a2;
  a1[2] = 0LL;
  v4 = (a3 - (__int64)a2) >> 6;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFFFFFFFFFFLL )
      sub_180013278();
    sub_18007587C(a1, v4);
    v7 = *a1;
    memmove((void *)*a1, a2, v3);
    v9 = 0LL;
    a1[1] = v7 + (v4 << 6);
    sub_180073F38((__int64 *)va);
  }
  return a1;
}
