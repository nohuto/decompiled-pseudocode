/*
 * XREFs of sub_1800D65B9 @ 0x1800D65B9
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 */

__int64 __fastcall sub_1800D65B9(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_180011044(*(_QWORD *)(a2 + 72));
  }
  return result;
}
