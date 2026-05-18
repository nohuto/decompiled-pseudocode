/*
 * XREFs of sub_18007F2B0 @ 0x18007F2B0
 * Callers:
 *     sub_18007F118 @ 0x18007F118 (sub_18007F118.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007F2B0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return o__aligned_free(*(_QWORD *)a1);
  return result;
}
