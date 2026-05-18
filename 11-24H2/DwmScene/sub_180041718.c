/*
 * XREFs of sub_180041718 @ 0x180041718
 * Callers:
 *     sub_1800413CC @ 0x1800413CC (sub_1800413CC.c)
 *     sub_18007D9F4 @ 0x18007D9F4 (sub_18007D9F4.c)
 * Callees:
 *     sub_180040AFC @ 0x180040AFC (sub_180040AFC.c)
 */

bool __fastcall sub_180041718(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  return sub_180040AFC(a1 + 128, (__int64)&v3) != *(_QWORD *)(a1 + 128);
}
