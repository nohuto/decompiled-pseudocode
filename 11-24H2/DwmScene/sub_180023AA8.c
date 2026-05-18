/*
 * XREFs of sub_180023AA8 @ 0x180023AA8
 * Callers:
 *     sub_180023AA8 @ 0x180023AA8 (sub_180023AA8.c)
 *     sub_1800245A8 @ 0x1800245A8 (sub_1800245A8.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 *     sub_180023AA8 @ 0x180023AA8 (sub_180023AA8.c)
 */

__int64 __fastcall sub_180023AA8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rbx
  __int64 *v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*(_BYTE *)(i + 25); result = sub_180010234(v6, 0x40uLL) )
  {
    sub_180023AA8(a1, a2, *(_QWORD *)(i + 16));
    v6 = (__int64 *)i;
    i = *(_QWORD *)i;
    v7 = v6[5];
    if ( v7 )
    {
      sub_180012140(v7, v6[6]);
      sub_180010234((void *)v6[5], (v6[7] - v6[5]) & 0xFFFFFFFFFFFFFFF0uLL);
      v6[5] = 0LL;
      v6[6] = 0LL;
      v6[7] = 0LL;
    }
  }
  return result;
}
