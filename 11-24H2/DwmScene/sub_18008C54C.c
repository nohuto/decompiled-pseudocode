/*
 * XREFs of sub_18008C54C @ 0x18008C54C
 * Callers:
 *     sub_18008C910 @ 0x18008C910 (sub_18008C910.c)
 * Callees:
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 *     sub_1800123C8 @ 0x1800123C8 (sub_1800123C8.c)
 *     sub_180013278 @ 0x180013278 (sub_180013278.c)
 *     sub_18002FBFC @ 0x18002FBFC (sub_18002FBFC.c)
 *     sub_1800758C0 @ 0x1800758C0 (sub_1800758C0.c)
 */

__int64 *sub_18008C54C(__int64 *a1, char *a2, char *a3, ...)
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
      sub_180013278();
    sub_1800758C0(a1, v4);
    v8 = (_QWORD *)*a1;
    while ( v3 != a3 )
    {
      sub_1800123C8(v7, v8, v3);
      v8 += 2;
      v3 += 16;
    }
    sub_180012140((__int64)v8, (__int64)v8);
    v10 = 0LL;
    a1[1] = (__int64)v8;
    sub_18002FBFC((__int64 *)va);
  }
  return a1;
}
