/*
 * XREFs of sub_1800DA9AF @ 0x1800DA9AF
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800173F0 @ 0x1800173F0 (sub_1800173F0.c)
 */

__int64 __fastcall sub_1800DA9AF(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    return sub_1800173F0();
  }
  return result;
}
