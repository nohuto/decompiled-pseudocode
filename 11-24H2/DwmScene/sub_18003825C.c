/*
 * XREFs of sub_18003825C @ 0x18003825C
 * Callers:
 *     sub_1800389AC @ 0x1800389AC (sub_1800389AC.c)
 *     sub_180038A44 @ 0x180038A44 (sub_180038A44.c)
 * Callees:
 *     sub_180010B74 @ 0x180010B74 (sub_180010B74.c)
 */

__int64 __fastcall sub_18003825C(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // r9

  result = sub_180010B74(*(_QWORD **)(a1 + 8), a2);
  *(_QWORD *)(v3 + 8) += 16LL;
  return result;
}
