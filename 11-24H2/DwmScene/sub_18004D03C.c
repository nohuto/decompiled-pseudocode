/*
 * XREFs of sub_18004D03C @ 0x18004D03C
 * Callers:
 *     sub_18004C3C8 @ 0x18004C3C8 (sub_18004C3C8.c)
 * Callees:
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_18004D690 @ 0x18004D690 (sub_18004D690.c)
 */

bool __fastcall sub_18004D03C(__int64 a1, __int64 a2)
{
  bool v3; // bl
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)sub_18004D690(a1 + 18560, v5, a2) != *(_QWORD *)(a1 + 18560);
  sub_180011B5C(a2);
  return v3;
}
