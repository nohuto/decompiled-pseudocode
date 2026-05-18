/*
 * XREFs of sub_18004CEDC @ 0x18004CEDC
 * Callers:
 *     sub_18004C268 @ 0x18004C268 (sub_18004C268.c)
 * Callees:
 *     sub_180011A5C @ 0x180011A5C (sub_180011A5C.c)
 *     sub_18004D530 @ 0x18004D530 (sub_18004D530.c)
 */

bool __fastcall sub_18004CEDC(__int64 a1, __int64 a2)
{
  bool v3; // bl
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)sub_18004D530(a1 + 18560, v5, a2) != *(_QWORD *)(a1 + 18560);
  sub_180011A5C(a2);
  return v3;
}
