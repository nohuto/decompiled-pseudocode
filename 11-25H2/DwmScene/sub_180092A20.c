/*
 * XREFs of sub_180092A20 @ 0x180092A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800391E4 @ 0x1800391E4 (sub_1800391E4.c)
 */

__int64 __fastcall sub_180092A20(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 68) = 1;
  sub_1800391E4((_QWORD *)(a1 + 8), (_QWORD *)(a1 + 40));
  result = *(unsigned int *)(a1 + 64);
  *(_DWORD *)(a1 + 56) = result;
  return result;
}
