/*
 * XREFs of sub_1800969CC @ 0x1800969CC
 * Callers:
 *     sub_180097304 @ 0x180097304 (sub_180097304.c)
 *     sub_180097544 @ 0x180097544 (sub_180097544.c)
 *     sub_18009784C @ 0x18009784C (sub_18009784C.c)
 *     sub_18009791C @ 0x18009791C (sub_18009791C.c)
 *     sub_180097A40 @ 0x180097A40 (sub_180097A40.c)
 *     sub_180097BD0 @ 0x180097BD0 (sub_180097BD0.c)
 *     sub_180098454 @ 0x180098454 (sub_180098454.c)
 *     sub_1800984C8 @ 0x1800984C8 (sub_1800984C8.c)
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

bool __fastcall sub_1800969CC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    *(_DWORD *)(a1 + 36) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
  return *(_DWORD *)(a1 + 36) != 4;
}
