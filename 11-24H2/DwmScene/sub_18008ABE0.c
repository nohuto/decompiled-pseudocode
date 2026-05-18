/*
 * XREFs of sub_18008ABE0 @ 0x18008ABE0
 * Callers:
 *     sub_18008A278 @ 0x18008A278 (sub_18008A278.c)
 *     sub_18008A2A8 @ 0x18008A2A8 (sub_18008A2A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008ABE0(__int64 a1, __int64 a2, unsigned int *a3, _QWORD *a4)
{
  __int64 result; // rax

  result = *a3;
  *(_QWORD *)(a2 + 8) = *a4;
  *(_DWORD *)a2 = result;
  return result;
}
