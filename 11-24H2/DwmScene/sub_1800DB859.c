/*
 * XREFs of sub_1800DB859 @ 0x1800DB859
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005AE88 @ 0x18005AE88 (sub_18005AE88.c)
 */

__int64 __fastcall sub_1800DB859(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 40) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    return sub_18005AE88();
  }
  return result;
}
