/*
 * XREFs of sub_1800D6459 @ 0x1800D6459
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 */

__int64 __fastcall sub_1800D6459(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_180010F44(*(_QWORD *)(a2 + 72));
  }
  return result;
}
