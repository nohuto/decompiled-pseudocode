/*
 * XREFs of sub_1800D9656 @ 0x1800D9656
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002FEE4 @ 0x18002FEE4 (sub_18002FEE4.c)
 */

__int64 __fastcall sub_1800D9656(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_18002FEE4(*(_QWORD *)(a2 + 48));
  }
  return result;
}
