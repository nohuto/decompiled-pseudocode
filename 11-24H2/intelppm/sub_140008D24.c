/*
 * XREFs of sub_140008D24 @ 0x140008D24
 * Callers:
 *     sub_14002D368 @ 0x14002D368 (sub_14002D368.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140008D24(__int64 a1)
{
  __int64 v2; // rax

  v2 = MmMapIoSpaceEx(*(_QWORD *)(a1 + 4), (unsigned __int64)*(unsigned __int8 *)(a1 + 3) >> 3, 516LL);
  *(_QWORD *)(a1 + 16) = v2;
  return v2 == 0 ? 0xC0000001 : 0;
}
