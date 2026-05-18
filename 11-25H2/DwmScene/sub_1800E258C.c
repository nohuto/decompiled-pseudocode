/*
 * XREFs of sub_1800E258C @ 0x1800E258C
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010F20 @ 0x180010F20 (sub_180010F20.c)
 */

__int64 __fastcall sub_1800E258C(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180010F20();
  }
  return result;
}
