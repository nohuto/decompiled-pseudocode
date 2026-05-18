/*
 * XREFs of sub_1800CF330 @ 0x1800CF330
 * Callers:
 *     sub_1800CF330 @ 0x1800CF330 (sub_1800CF330.c)
 *     sub_1800CFEC8 @ 0x1800CFEC8 (sub_1800CFEC8.c)
 *     sub_1800D02B0 @ 0x1800D02B0 (sub_1800D02B0.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_1800CF330 @ 0x1800CF330 (sub_1800CF330.c)
 *     sub_1800CFF6C @ 0x1800CFF6C (sub_1800CFF6C.c)
 */

__int64 __fastcall sub_1800CF330(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010234(v6, 0xC0uLL) )
  {
    sub_1800CF330(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_1800CFF6C(v6 + 32);
  }
  return result;
}
