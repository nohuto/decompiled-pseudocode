/*
 * XREFs of sub_14091F7AC @ 0x14091F7AC
 * Callers:
 *     sub_14091BE98 @ 0x14091BE98 (sub_14091BE98.c)
 *     sub_14091D164 @ 0x14091D164 (sub_14091D164.c)
 *     sub_14091DF30 @ 0x14091DF30 (sub_14091DF30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14091F7AC(__int64 a1)
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
