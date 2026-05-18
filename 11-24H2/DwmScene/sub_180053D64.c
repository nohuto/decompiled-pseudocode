/*
 * XREFs of sub_180053D64 @ 0x180053D64
 * Callers:
 *     sub_180018E90 @ 0x180018E90 (sub_180018E90.c)
 * Callees:
 *     sub_180029840 @ 0x180029840 (sub_180029840.c)
 *     sub_180029CE0 @ 0x180029CE0 (sub_180029CE0.c)
 *     sub_180053474 @ 0x180053474 (sub_180053474.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_180053D64(__int64 a1)
{
  _Mtx_t v3[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_180029840((__int64)v3, a1 + 128);
  if ( *(_DWORD *)(a1 + 36) )
  {
    *(_DWORD *)(a1 + 36) = 0;
    sub_180053474(a1, v3);
  }
  return sub_180029CE0((__int64)v3);
}
