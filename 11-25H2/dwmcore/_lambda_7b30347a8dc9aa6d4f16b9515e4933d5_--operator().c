/*
 * XREFs of _lambda_7b30347a8dc9aa6d4f16b9515e4933d5_::operator() @ 0x180217954
 * Callers:
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x18003DDB8 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x1800F1D50 (-StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_7b30347a8dc9aa6d4f16b9515e4933d5_::operator()(__int64 a1, int a2)
{
  int v2; // r9d

  v2 = *(_DWORD *)(**(_QWORD **)a1 + 8LL * **(int **)(a1 + 8) + 472);
  if ( !v2 )
    return (a2 & 3) != 0;
  return v2 == 1 && a2;
}
