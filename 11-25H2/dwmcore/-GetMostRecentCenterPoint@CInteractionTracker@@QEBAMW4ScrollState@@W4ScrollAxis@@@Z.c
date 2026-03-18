/*
 * XREFs of ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x1800F4090
 * Callers:
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x1800F1660 (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollStat.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1800F35B0 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

float __fastcall CInteractionTracker::GetMostRecentCenterPoint(__int64 a1, int a2, int a3)
{
  int v4; // edx
  __int64 v5; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v5 = 172LL;
  }
  else
  {
    v5 = 164LL;
  }
  if ( !a3 )
    return *(float *)(a1 + v5);
  if ( a3 != 1 )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  return *(float *)(a1 + v5 + 4);
}
