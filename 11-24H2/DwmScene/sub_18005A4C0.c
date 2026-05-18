/*
 * XREFs of sub_18005A4C0 @ 0x18005A4C0
 * Callers:
 *     sub_18005A4C0 @ 0x18005A4C0 (sub_18005A4C0.c)
 *     sub_18005AD3C @ 0x18005AD3C (sub_18005AD3C.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18005A4C0 @ 0x18005A4C0 (sub_18005A4C0.c)
 *     sub_18005AFC0 @ 0x18005AFC0 (sub_18005AFC0.c)
 */

__int64 __fastcall sub_18005A4C0(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010234(v6, 0x48uLL) )
  {
    sub_18005A4C0(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_18005AFC0(v6 + 40);
  }
  return result;
}
