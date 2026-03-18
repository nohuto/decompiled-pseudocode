/*
 * XREFs of MiInitializePageHeatList @ 0x14043F8A0
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020A480 (MiBackgroundZeroLocalPages.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiMakeTransitionHeatBatch @ 0x140402D04 (MiMakeTransitionHeatBatch.c)
 *     MiChangePageHeatImmediate @ 0x14043F808 (MiChangePageHeatImmediate.c)
 *     MiGetTransitionPageHeatList @ 0x140685724 (MiGetTransitionPageHeatList.c)
 *     MiZeroPageMakeHot @ 0x1406903F8 (MiZeroPageMakeHot.c)
 *     MmPrefetchPagesEx @ 0x140955430 (MmPrefetchPagesEx.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePageHeatList(__int64 a1, char a2, int a3, int a4)
{
  __int64 result; // rax

  result = (unsigned int)(4 * a4);
  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)a1 = a2 & 1 | (2 * (result | a3 & 3));
  if ( a3 )
  {
    result = qword_140E2EBF8;
    *(_QWORD *)(a1 + 8) = qword_140E2EBF8;
  }
  return result;
}
