/*
 * XREFs of sub_1800E26EC @ 0x1800E26EC
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 */

__int64 __fastcall sub_1800E26EC(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180011020();
  }
  return result;
}
