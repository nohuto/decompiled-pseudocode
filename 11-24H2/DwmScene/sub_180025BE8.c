/*
 * XREFs of sub_180025BE8 @ 0x180025BE8
 * Callers:
 *     sub_180024874 @ 0x180024874 (sub_180024874.c)
 *     sub_1800318EC @ 0x1800318EC (sub_1800318EC.c)
 * Callees:
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180025BE8(_BYTE *a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002867C(a1 + 24, v3);
  if ( !a1[3641] )
  {
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 248LL))(a1);
    a1[3641] = 1;
  }
  return sub_180011044((__int64)v3);
}
