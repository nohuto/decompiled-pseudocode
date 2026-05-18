/*
 * XREFs of sub_180053C04 @ 0x180053C04
 * Callers:
 *     sub_180018DD0 @ 0x180018DD0 (sub_180018DD0.c)
 * Callees:
 *     sub_1800296E0 @ 0x1800296E0 (sub_1800296E0.c)
 *     sub_180029B80 @ 0x180029B80 (sub_180029B80.c)
 *     sub_180053314 @ 0x180053314 (sub_180053314.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_180053C04(__int64 a1)
{
  _Mtx_t v3[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_1800296E0((__int64)v3, a1 + 128);
  if ( *(_DWORD *)(a1 + 36) )
  {
    *(_DWORD *)(a1 + 36) = 0;
    sub_180053314(a1, v3);
  }
  return sub_180029B80((__int64)v3);
}
