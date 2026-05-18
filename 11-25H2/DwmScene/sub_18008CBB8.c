/*
 * XREFs of sub_18008CBB8 @ 0x18008CBB8
 * Callers:
 *     sub_1800696D0 @ 0x1800696D0 (sub_1800696D0.c)
 *     sub_18008C824 @ 0x18008C824 (sub_18008C824.c)
 *     sub_18008C8B4 @ 0x18008C8B4 (sub_18008C8B4.c)
 *     sub_18008CAD8 @ 0x18008CAD8 (sub_18008CAD8.c)
 *     sub_180091028 @ 0x180091028 (sub_180091028.c)
 *     sub_1800925E0 @ 0x1800925E0 (sub_1800925E0.c)
 * Callees:
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 */

__int64 __fastcall sub_18008CBB8(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = a1[1];
  if ( *a1 != v1 )
  {
    sub_180012040(*a1, v1);
    result = *a1;
    a1[1] = *a1;
  }
  return result;
}
