/*
 * XREFs of sub_1800CCFA8 @ 0x1800CCFA8
 * Callers:
 *     sub_1800CCF78 @ 0x1800CCF78 (sub_1800CCF78.c)
 *     sub_1800CCFA8 @ 0x1800CCFA8 (sub_1800CCFA8.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_1800CCFA8 @ 0x1800CCFA8 (sub_1800CCFA8.c)
 */

__int64 __fastcall sub_1800CCFA8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*(_BYTE *)(i + 25); result = sub_180010234(v6, 0x30uLL) )
  {
    sub_1800CCFA8(a1, a2, *(_QWORD *)(i + 16));
    v6 = (__int64 *)i;
    i = *(_QWORD *)i;
    sub_18000E954(v6 + 5);
  }
  return result;
}
