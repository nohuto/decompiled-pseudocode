/*
 * XREFs of sub_1800E2117 @ 0x1800E2117
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D530 @ 0x18000D530 (sub_18000D530.c)
 */

__int64 __fastcall sub_1800E2117(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_18000D530();
  }
  return result;
}
