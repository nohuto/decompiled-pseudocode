/*
 * XREFs of sub_1800D32FC @ 0x1800D32FC
 * Callers:
 *     sub_1800D3878 @ 0x1800D3878 (sub_1800D3878.c)
 *     sub_1800D3B6C @ 0x1800D3B6C (sub_1800D3B6C.c)
 *     sub_1800D3FE0 @ 0x1800D3FE0 (sub_1800D3FE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D32FC(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return o__aligned_free(*(_QWORD *)a1);
  return result;
}
