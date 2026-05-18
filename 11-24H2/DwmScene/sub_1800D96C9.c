/*
 * XREFs of sub_1800D96C9 @ 0x1800D96C9
 * Callers:
 *     <none>
 * Callees:
 *     sub_180036868 @ 0x180036868 (sub_180036868.c)
 */

__int64 __fastcall sub_1800D96C9(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_180036868(*(_QWORD *)(a2 + 80));
  }
  return result;
}
