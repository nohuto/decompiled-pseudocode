/*
 * XREFs of sub_18008C3EC @ 0x18008C3EC
 * Callers:
 *     sub_18008C7B0 @ 0x18008C7B0 (sub_18008C7B0.c)
 * Callees:
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 *     sub_1800122C8 @ 0x1800122C8 (sub_1800122C8.c)
 *     sub_180013178 @ 0x180013178 (sub_180013178.c)
 *     sub_18002FA9C @ 0x18002FA9C (sub_18002FA9C.c)
 *     sub_180075760 @ 0x180075760 (sub_180075760.c)
 */

__int64 *sub_18008C3EC(__int64 *a1, char *a2, char *a3, ...)
{
  char *v3; // rbp
  unsigned __int64 v4; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  *a1 = 0LL;
  v3 = a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = (a3 - a2) >> 4;
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFFFFFFFFFFLL )
      sub_180013178();
    sub_180075760(a1, v4);
    v8 = (_QWORD *)*a1;
    while ( v3 != a3 )
    {
      sub_1800122C8(v7, v8, v3);
      v8 += 2;
      v3 += 16;
    }
    sub_180012040((__int64)v8, (__int64)v8);
    v10 = 0LL;
    a1[1] = (__int64)v8;
    sub_18002FA9C((__int64 *)va);
  }
  return a1;
}
