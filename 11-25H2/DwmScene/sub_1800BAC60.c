/*
 * XREFs of sub_1800BAC60 @ 0x1800BAC60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B0F8 @ 0x18001B0F8 (sub_18001B0F8.c)
 */

__int64 __fastcall sub_1800BAC60(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_18001B0F8(*(LPVOID *)a2);
  result = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  return result;
}
