/*
 * XREFs of sub_1800D5216 @ 0x1800D5216
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 */

__int64 __fastcall sub_1800D5216(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180012440();
  }
  return result;
}
