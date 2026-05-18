/*
 * XREFs of sub_18004A684 @ 0x18004A684
 * Callers:
 *     sub_18004A684 @ 0x18004A684 (sub_18004A684.c)
 *     sub_18004B68C @ 0x18004B68C (sub_18004B68C.c)
 *     sub_18004D088 @ 0x18004D088 (sub_18004D088.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18004A684 @ 0x18004A684 (sub_18004A684.c)
 *     sub_18004B83C @ 0x18004B83C (sub_18004B83C.c)
 */

__int64 __fastcall sub_18004A684(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010234(v6, 0x68uLL) )
  {
    sub_18004A684(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_18004B83C(v6 + 32);
  }
  return result;
}
