/*
 * XREFs of sub_180026FC0 @ 0x180026FC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800524B0 @ 0x1800524B0 (sub_1800524B0.c)
 */

__int64 __fastcall sub_180026FC0(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_1800524B0();
  return result;
}
