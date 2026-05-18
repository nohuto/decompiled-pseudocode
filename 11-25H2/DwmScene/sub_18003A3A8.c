/*
 * XREFs of sub_18003A3A8 @ 0x18003A3A8
 * Callers:
 *     sub_180090590 @ 0x180090590 (sub_180090590.c)
 * Callees:
 *     sub_18003A280 @ 0x18003A280 (sub_18003A280.c)
 *     sub_18003A4A0 @ 0x18003A4A0 (sub_18003A4A0.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 */

__int64 __fastcall sub_18003A3A8(__int64 a1, __int64 a2)
{
  _OWORD v5[4]; // [rsp+20h] [rbp-48h] BYREF

  sub_18003BCDC(a1);
  sub_18003A280(a1, v5);
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
  sub_18003A4A0(v5, a2);
  return a2;
}
