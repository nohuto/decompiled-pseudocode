/*
 * XREFs of sub_180092B80 @ 0x180092B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039344 @ 0x180039344 (sub_180039344.c)
 */

__int64 __fastcall sub_180092B80(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 68) = 1;
  sub_180039344((_QWORD *)(a1 + 8), (_QWORD *)(a1 + 40));
  result = *(unsigned int *)(a1 + 64);
  *(_DWORD *)(a1 + 56) = result;
  return result;
}
