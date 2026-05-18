/*
 * XREFs of sub_18004F338 @ 0x18004F338
 * Callers:
 *     sub_18004F18C @ 0x18004F18C (sub_18004F18C.c)
 *     sub_1800CF594 @ 0x1800CF594 (sub_1800CF594.c)
 *     sub_1800D18D4 @ 0x1800D18D4 (sub_1800D18D4.c)
 * Callees:
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 */

__int64 __fastcall sub_18004F338(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    sub_180012508(v3 + 40, a2);
  return sub_18001C2E4(a1);
}
