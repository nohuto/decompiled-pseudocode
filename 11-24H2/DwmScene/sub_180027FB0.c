/*
 * XREFs of sub_180027FB0 @ 0x180027FB0
 * Callers:
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800281EC @ 0x1800281EC (sub_1800281EC.c)
 * Callees:
 *     sub_180027F9C @ 0x180027F9C (sub_180027F9C.c)
 */

__int64 __fastcall sub_180027FB0(__int64 a1, _QWORD *a2, char *a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  sub_180027F9C(*(_QWORD *)(a1 + 8), a2, a3);
  result = *(_QWORD *)(v3 + 8);
  *(_QWORD *)(v3 + 8) = result + 16;
  return result;
}
