/*
 * XREFs of sub_180025A88 @ 0x180025A88
 * Callers:
 *     sub_180024714 @ 0x180024714 (sub_180024714.c)
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 * Callees:
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180025A88(_BYTE *a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002851C(a1 + 24, v3);
  if ( !a1[3641] )
  {
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 248LL))(a1);
    a1[3641] = 1;
  }
  return sub_180010F44((__int64)v3);
}
