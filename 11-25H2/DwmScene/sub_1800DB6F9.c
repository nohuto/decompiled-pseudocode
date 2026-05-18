/*
 * XREFs of sub_1800DB6F9 @ 0x1800DB6F9
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005AD28 @ 0x18005AD28 (sub_18005AD28.c)
 */

__int64 __fastcall sub_1800DB6F9(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 40) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    return sub_18005AD28();
  }
  return result;
}
