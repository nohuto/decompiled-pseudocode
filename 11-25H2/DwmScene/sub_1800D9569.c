/*
 * XREFs of sub_1800D9569 @ 0x1800D9569
 * Callers:
 *     <none>
 * Callees:
 *     sub_180036708 @ 0x180036708 (sub_180036708.c)
 */

__int64 __fastcall sub_1800D9569(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_180036708(*(_QWORD *)(a2 + 80));
  }
  return result;
}
