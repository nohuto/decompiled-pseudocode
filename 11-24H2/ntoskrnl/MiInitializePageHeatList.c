/*
 * XREFs of MiInitializePageHeatList @ 0x140435B60
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiMakeTransitionHeatBatch @ 0x1403FD304 (MiMakeTransitionHeatBatch.c)
 *     MiChangePageHeatImmediate @ 0x140435AC8 (MiChangePageHeatImmediate.c)
 *     MiGetTransitionPageHeatList @ 0x140686854 (MiGetTransitionPageHeatList.c)
 *     MiZeroPageMakeHot @ 0x1406914C8 (MiZeroPageMakeHot.c)
 *     MmPrefetchPagesEx @ 0x140938DE0 (MmPrefetchPagesEx.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
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
    result = qword_140E2ED38;
    *(_QWORD *)(a1 + 8) = qword_140E2ED38;
  }
  return result;
}
