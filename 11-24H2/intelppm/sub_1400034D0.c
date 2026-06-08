/*
 * XREFs of sub_1400034D0 @ 0x1400034D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000E6D0 @ 0x14000E6D0 (sub_14000E6D0.c)
 */

__int64 __fastcall sub_1400034D0(ULONG_PTR a1, unsigned int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  if ( a3 != -1 )
    return sub_14000E6D0(a1, a5);
  result = a2;
  if ( !*(_BYTE *)(88LL * a2 + a1 + 129) )
    return sub_14000E6D0(a1, a5);
  return result;
}
