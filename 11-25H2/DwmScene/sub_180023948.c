/*
 * XREFs of sub_180023948 @ 0x180023948
 * Callers:
 *     sub_180023948 @ 0x180023948 (sub_180023948.c)
 *     sub_180024448 @ 0x180024448 (sub_180024448.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 *     sub_180023948 @ 0x180023948 (sub_180023948.c)
 */

__int64 __fastcall sub_180023948(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rbx
  __int64 *v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*(_BYTE *)(i + 25); result = sub_180010134(v6, 0x40uLL) )
  {
    sub_180023948(a1, a2, *(_QWORD *)(i + 16));
    v6 = (__int64 *)i;
    i = *(_QWORD *)i;
    v7 = v6[5];
    if ( v7 )
    {
      sub_180012040(v7, v6[6]);
      sub_180010134((void *)v6[5], (v6[7] - v6[5]) & 0xFFFFFFFFFFFFFFF0uLL);
      v6[5] = 0LL;
      v6[6] = 0LL;
      v6[7] = 0LL;
    }
  }
  return result;
}
