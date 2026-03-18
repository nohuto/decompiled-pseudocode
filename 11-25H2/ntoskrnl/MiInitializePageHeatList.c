/*
 * XREFs of MiInitializePageHeatList @ 0x140440440
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020F1F0 (MiBackgroundZeroLocalPages.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiChangePageHeatImmediate @ 0x14044039C (MiChangePageHeatImmediate.c)
 *     MiMakeTransitionHeatBatch @ 0x1404F4FB0 (MiMakeTransitionHeatBatch.c)
 *     MiGetTransitionPageHeatList @ 0x140679E94 (MiGetTransitionPageHeatList.c)
 *     MiZeroPageMakeHot @ 0x140684F98 (MiZeroPageMakeHot.c)
 *     MmPrefetchPagesEx @ 0x1409C8D00 (MmPrefetchPagesEx.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
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
    result = qword_140E2E9B8;
    *(_QWORD *)(a1 + 8) = qword_140E2E9B8;
  }
  return result;
}
