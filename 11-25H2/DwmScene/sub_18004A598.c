/*
 * XREFs of sub_18004A598 @ 0x18004A598
 * Callers:
 *     sub_18004A598 @ 0x18004A598 (sub_18004A598.c)
 *     sub_18004B55C @ 0x18004B55C (sub_18004B55C.c)
 *     sub_18004CF28 @ 0x18004CF28 (sub_18004CF28.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_18004A598 @ 0x18004A598 (sub_18004A598.c)
 *     sub_18004B704 @ 0x18004B704 (sub_18004B704.c)
 */

__int64 __fastcall sub_18004A598(__int64 a1, __int64 a2, char *a3)
{
  char *i; // rdi
  char *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !i[25]; result = sub_180010134(v6, 0x50uLL) )
  {
    sub_18004A598(a1, a2, *((_QWORD *)i + 2));
    v6 = i;
    i = *(char **)i;
    sub_18004B704(v6 + 32);
  }
  return result;
}
