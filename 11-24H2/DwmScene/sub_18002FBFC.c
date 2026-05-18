/*
 * XREFs of sub_18002FBFC @ 0x18002FBFC
 * Callers:
 *     sub_18002C4D8 @ 0x18002C4D8 (sub_18002C4D8.c)
 *     sub_18008C54C @ 0x18008C54C (sub_18008C54C.c)
 *     sub_18008C888 @ 0x18008C888 (sub_18008C888.c)
 *     sub_180098C10 @ 0x180098C10 (sub_180098C10.c)
 * Callees:
 *     sub_1800131E0 @ 0x1800131E0 (sub_1800131E0.c)
 */

__int64 __fastcall sub_18002FBFC(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_1800131E0(v1);
  return result;
}
