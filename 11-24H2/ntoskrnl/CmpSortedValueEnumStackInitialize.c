/*
 * XREFs of CmpSortedValueEnumStackInitialize @ 0x140A66118
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140457F40 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall CmpSortedValueEnumStackInitialize(__int64 a1)
{
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 10) = 0;
  *(_WORD *)(a1 + 14) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_WORD *)(a1 + 8) = -1;
  return memset_0((void *)(a1 + 16), 0, 0x40uLL);
}
