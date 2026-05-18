/*
 * XREFs of sub_1800DA84F @ 0x1800DA84F
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800172F0 @ 0x1800172F0 (sub_1800172F0.c)
 */

__int64 __fastcall sub_1800DA84F(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    return sub_1800172F0();
  }
  return result;
}
