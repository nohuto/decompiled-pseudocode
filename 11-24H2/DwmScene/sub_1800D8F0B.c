/*
 * XREFs of sub_1800D8F0B @ 0x1800D8F0B
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004DCB4 @ 0x18004DCB4 (sub_18004DCB4.c)
 */

__int64 __fastcall sub_1800D8F0B(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 68) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 68) &= ~1u;
    return sub_18004DCB4();
  }
  return result;
}
