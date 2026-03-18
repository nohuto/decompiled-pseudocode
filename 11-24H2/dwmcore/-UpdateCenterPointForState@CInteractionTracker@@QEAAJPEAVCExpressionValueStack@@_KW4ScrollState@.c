/*
 * XREFs of ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z @ 0x18021E4EC
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1800E1630 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180223720 (-CalculateInertiaValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x18021E5FC (-CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollStat.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CInteractionTracker::UpdateCenterPointForState(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v6; // r15
  _QWORD *v7; // r14
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( a4 == 1 )
  {
    v7 = (_QWORD *)(a1 + 164);
    v6 = (_QWORD *)(a1 + 172);
  }
  else
  {
    if ( a4 != 2 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v6 = (_QWORD *)(a1 + 172);
    v7 = (_QWORD *)(a1 + 164);
  }
  v8 = CInteractionTracker::CalculateCenterPointForAxis(a1);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x1722u, 0LL);
  }
  else
  {
    v10 = CInteractionTracker::CalculateCenterPointForAxis(a1);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1724u, 0LL);
    }
    else if ( a4 == 1 )
    {
      *v6 = *v7;
    }
  }
  return v9;
}
