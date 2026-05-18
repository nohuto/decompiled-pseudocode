/*
 * XREFs of sub_1800B8688 @ 0x1800B8688
 * Callers:
 *     sub_1800B8D50 @ 0x1800B8D50 (sub_1800B8D50.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 */

__int64 __fastcall sub_1800B8688(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = a1[16];
  if ( v2 )
    sub_18001050C(v2);
  v3 = a1[14];
  if ( v3 )
    sub_18001050C(v3);
  sub_18000E854(a1 + 12);
  *a1 = &Spectre::Engine::GpuQuery::`vftable';
  return sub_18002655C((__int64)a1);
}
