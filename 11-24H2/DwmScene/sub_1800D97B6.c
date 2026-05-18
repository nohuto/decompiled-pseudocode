/*
 * XREFs of sub_1800D97B6 @ 0x1800D97B6
 * Callers:
 *     <none>
 * Callees:
 *     sub_180030044 @ 0x180030044 (sub_180030044.c)
 */

__int64 __fastcall sub_1800D97B6(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180030044(*(_QWORD *)(a2 + 48));
  }
  return result;
}
