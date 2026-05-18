/*
 * XREFs of sub_18002B938 @ 0x18002B938
 * Callers:
 *     sub_18003279C @ 0x18003279C (sub_18003279C.c)
 * Callees:
 *     sub_1800130AC @ 0x1800130AC (sub_1800130AC.c)
 */

__int64 __fastcall sub_18002B938(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r9

  v2 = sub_1800130AC(a2);
  return sub_18002D77C(v4, v2, *(_QWORD *)(v3 + 16));
}
