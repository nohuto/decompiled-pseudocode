/*
 * XREFs of sub_1800739D4 @ 0x1800739D4
 * Callers:
 *     sub_1800751E0 @ 0x1800751E0 (sub_1800751E0.c)
 *     sub_180077D00 @ 0x180077D00 (sub_180077D00.c)
 * Callees:
 *     memmove @ 0x18000CD6D (memmove.c)
 *     sub_180013178 @ 0x180013178 (sub_180013178.c)
 *     sub_180073DF8 @ 0x180073DF8 (sub_180073DF8.c)
 *     sub_180075760 @ 0x180075760 (sub_180075760.c)
 */

__int64 *sub_1800739D4(__int64 *a1, const void *a2, __int64 a3, ...)
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
  v4 = (a3 - (__int64)a2) >> 4;
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      sub_180013178();
    sub_180075760(a1, v4);
    v7 = *a1;
    memmove((void *)*a1, a2, v3);
    v9 = 0LL;
    a1[1] = v7 + 16 * v4;
    sub_180073DF8((__int64 *)va);
  }
  return a1;
}
