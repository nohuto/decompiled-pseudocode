/*
 * XREFs of sub_180037768 @ 0x180037768
 * Callers:
 *     sub_180045DDC @ 0x180045DDC (sub_180045DDC.c)
 * Callees:
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 */

__int64 *__fastcall sub_180037768(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 *result; // rax

  v2 = *(_QWORD *)(a1 + 96);
  result = sub_18001254C((__int64 *)(v2 + 9712), a2);
  *(_DWORD *)(v2 + 9760) = 0;
  return result;
}
