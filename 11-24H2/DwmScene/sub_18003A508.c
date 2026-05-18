/*
 * XREFs of sub_18003A508 @ 0x18003A508
 * Callers:
 *     sub_1800906F0 @ 0x1800906F0 (sub_1800906F0.c)
 * Callees:
 *     sub_18003A3E0 @ 0x18003A3E0 (sub_18003A3E0.c)
 *     sub_18003A600 @ 0x18003A600 (sub_18003A600.c)
 *     sub_18003BE3C @ 0x18003BE3C (sub_18003BE3C.c)
 */

__int64 __fastcall sub_18003A508(__int64 a1, __int64 a2)
{
  _OWORD v5[4]; // [rsp+20h] [rbp-48h] BYREF

  sub_18003BE3C(a1);
  sub_18003A3E0(a1, v5);
  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  sub_18003A600(v5, a2);
  return a2;
}
