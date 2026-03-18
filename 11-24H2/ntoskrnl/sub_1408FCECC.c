/*
 * XREFs of sub_1408FCECC @ 0x1408FCECC
 * Callers:
 *     sub_1408F95BC @ 0x1408F95BC (sub_1408F95BC.c)
 *     sub_1408FA884 @ 0x1408FA884 (sub_1408FA884.c)
 *     sub_1408FB650 @ 0x1408FB650 (sub_1408FB650.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1408FCECC(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( !_InterlockedAdd64((volatile signed __int64 *)(a1 + 80), 1uLL) )
      return 3221225701LL;
  }
  return result;
}
