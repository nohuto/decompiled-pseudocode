/*
 * XREFs of MiInitializeLargePfnList @ 0x140428B20
 * Callers:
 *     MmCreateShadowMapping @ 0x1407F674C (MmCreateShadowMapping.c)
 *     MiAllocateFastAwePages @ 0x1407F833C (MiAllocateFastAwePages.c)
 *     MiCreatePagingFileMap @ 0x140942908 (MiCreatePagingFileMap.c)
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
