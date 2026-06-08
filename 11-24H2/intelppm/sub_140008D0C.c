/*
 * XREFs of sub_140008D0C @ 0x140008D0C
 * Callers:
 *     sub_14004599C @ 0x14004599C (sub_14004599C.c)
 *     sub_140045D48 @ 0x140045D48 (sub_140045D48.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140008D0C(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)(a2 + 16) = a1;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_BYTE *)(a2 + 24) = 0;
  return result;
}
