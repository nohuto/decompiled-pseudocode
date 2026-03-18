/*
 * XREFs of ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1800F2FB8
 * Callers:
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1800F2EEC (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18003D85C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1800F3174 (-GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1800F32D4 (-GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression.c)
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x1800F330C (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800F3D68 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScrollAnimation::CalculateInContactDelta(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float *a4)
{
  struct CInteractionTracker *InteractionTracker; // rax
  int *v9; // rsi
  __int64 SourceModifierForActiveManipulation; // rax
  int *v11; // rdi
  int v12; // eax
  unsigned int v13; // ebx
  struct CInteractionTracker *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  float (__fastcall *v17)(CScrollAnimation *); // rbp
  char v19; // [rsp+80h] [rbp+8h] BYREF

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v9 = (int *)((char *)this + 324);
  SourceModifierForActiveManipulation = InteractionSourceManager::GetSourceModifierForActiveManipulation(
                                          (char *)InteractionTracker + 208,
                                          *((unsigned int *)this + 81));
  v19 = 0;
  v11 = (int *)((char *)this + 324);
  if ( !SourceModifierForActiveManipulation )
    goto LABEL_5;
  v12 = CConditionalExpression::ProcessConditionalExpression(
          SourceModifierForActiveManipulation,
          a2,
          a3,
          *v9 != 2,
          &v19,
          a4);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x25Bu, 0LL);
    return v13;
  }
  if ( !v19 )
  {
    v11 = (int *)((char *)this + 324);
LABEL_5:
    v14 = CScrollAnimation::GetInteractionTracker(this);
    v15 = (unsigned int)*v9;
    v16 = (__int64)v14;
    v17 = *(float (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 336LL);
    if ( (_DWORD)v15 )
    {
      if ( (_DWORD)v15 == 1 )
      {
        v9 = v11;
      }
      else if ( (_DWORD)v15 == 2 )
      {
        v9 = v11;
      }
    }
    else
    {
      v9 = v11;
    }
    InteractionSourceManager::GetActiveManipulationDelta((char *)v14 + 208, v15);
    CInteractionTracker::GetCurrentValue(v16, *v9);
    *a4 = v17(this);
  }
  return 0;
}
