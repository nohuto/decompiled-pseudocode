/*
 * XREFs of sub_18007F410 @ 0x18007F410
 * Callers:
 *     sub_18007F278 @ 0x18007F278 (sub_18007F278.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007F410(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return o__aligned_free(*(_QWORD *)a1);
  return result;
}
