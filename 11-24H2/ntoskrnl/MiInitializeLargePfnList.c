/*
 * XREFs of MiInitializeLargePfnList @ 0x14041CC70
 * Callers:
 *     MmCreateShadowMapping @ 0x1407F6EC0 (MmCreateShadowMapping.c)
 *     MiAllocateFastAwePages @ 0x1407F8AAC (MiAllocateFastAwePages.c)
 *     MiCreatePagingFileMap @ 0x14098CB78 (MiCreatePagingFileMap.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiInitializeLargePfnList(_QWORD *a1)
{
  _QWORD *result; // rax

  a1[2] = 0LL;
  a1[1] = a1;
  *a1 = a1;
  a1[5] = 0LL;
  a1[4] = a1 + 3;
  a1[3] = a1 + 3;
  a1[8] = 0LL;
  a1[7] = a1 + 6;
  a1[6] = a1 + 6;
  result = a1 + 9;
  a1[11] = 0LL;
  a1[10] = a1 + 9;
  a1[9] = a1 + 9;
  return result;
}
