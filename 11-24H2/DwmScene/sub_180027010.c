/*
 * XREFs of sub_180027010 @ 0x180027010
 * Callers:
 *     <none>
 * Callees:
 *     sub_180052580 @ 0x180052580 (sub_180052580.c)
 */

__int64 __fastcall sub_180027010(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_180052580();
  return result;
}
