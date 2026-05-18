/*
 * XREFs of sub_180026E60 @ 0x180026E60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180052350 @ 0x180052350 (sub_180052350.c)
 */

__int64 __fastcall sub_180026E60(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return sub_180052350();
  return result;
}
