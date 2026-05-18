/*
 * XREFs of sub_180026F70 @ 0x180026F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800523AC @ 0x1800523AC (sub_1800523AC.c)
 */

__int64 __fastcall sub_180026F70(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_1800523AC();
  return result;
}
