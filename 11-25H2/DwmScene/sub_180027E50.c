/*
 * XREFs of sub_180027E50 @ 0x180027E50
 * Callers:
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002808C @ 0x18002808C (sub_18002808C.c)
 * Callees:
 *     sub_180027E3C @ 0x180027E3C (sub_180027E3C.c)
 */

__int64 __fastcall sub_180027E50(__int64 a1, _QWORD *a2, char *a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  sub_180027E3C(*(_QWORD *)(a1 + 8), a2, a3);
  result = *(_QWORD *)(v3 + 8);
  *(_QWORD *)(v3 + 8) = result + 16;
  return result;
}
