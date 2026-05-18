/*
 * XREFs of sub_180073F78 @ 0x180073F78
 * Callers:
 *     sub_180073D34 @ 0x180073D34 (sub_180073D34.c)
 * Callees:
 *     sub_18003682C @ 0x18003682C (sub_18003682C.c)
 */

__int64 __fastcall sub_180073F78(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18003682C(v1);
  return result;
}
