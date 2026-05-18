/*
 * XREFs of sub_180037608 @ 0x180037608
 * Callers:
 *     sub_180045C7C @ 0x180045C7C (sub_180045C7C.c)
 * Callees:
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 */

__int64 *__fastcall sub_180037608(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 *result; // rax

  v2 = *(_QWORD *)(a1 + 96);
  result = sub_18001244C((__int64 *)(v2 + 9712), a2);
  *(_DWORD *)(v2 + 9760) = 0;
  return result;
}
