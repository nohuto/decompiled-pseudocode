/*
 * XREFs of sub_180052D2C @ 0x180052D2C
 * Callers:
 *     sub_180052B80 @ 0x180052B80 (sub_180052B80.c)
 *     sub_180062230 @ 0x180062230 (sub_180062230.c)
 * Callees:
 *     sub_180036708 @ 0x180036708 (sub_180036708.c)
 */

__int64 __fastcall sub_180052D2C(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180036708(v1);
  return result;
}
