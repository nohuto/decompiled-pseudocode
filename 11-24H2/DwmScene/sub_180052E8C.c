/*
 * XREFs of sub_180052E8C @ 0x180052E8C
 * Callers:
 *     sub_180052CE0 @ 0x180052CE0 (sub_180052CE0.c)
 *     sub_180062390 @ 0x180062390 (sub_180062390.c)
 * Callees:
 *     sub_180036868 @ 0x180036868 (sub_180036868.c)
 */

__int64 __fastcall sub_180052E8C(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180036868(v1);
  return result;
}
