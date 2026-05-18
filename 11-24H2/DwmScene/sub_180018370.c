/*
 * XREFs of sub_180018370 @ 0x180018370
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_18002863C @ 0x18002863C (sub_18002863C.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180018370(__int64 a1)
{
  __int64 v1; // rbx
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  sub_18002863C(v1 + 8, v3);
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v1 + 8LL))(v1, v3);
  return sub_180011044((__int64)v3);
}
