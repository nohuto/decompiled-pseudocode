/*
 * XREFs of ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1800E34EC
 * Callers:
 *     ?CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1800E1B18 (-CalculateInContactValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1800E3A18 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1800E3D10 (-GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1800E408C (-GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x1800E42A8 (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x1800E478C (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScrollAnimation::CalculateInContactDelta(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float *a4)
{
  struct CInteractionTracker *InteractionTracker; // rax
  _DWORD *v9; // rsi
  __int64 SourceModifierForActiveManipulation; // rax
  char *v11; // rdi
  int v12; // eax
  unsigned int v13; // ebx
  struct CInteractionTracker *v14; // rax
  struct CInteractionTracker *v15; // rbx
  float (__fastcall *v16)(CScrollAnimation *); // rbp
  char v18; // [rsp+80h] [rbp+8h] BYREF

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v9 = (_DWORD *)((char *)this + 324);
  SourceModifierForActiveManipulation = InteractionSourceManager::GetSourceModifierForActiveManipulation(
                                          (char *)InteractionTracker + 208,
                                          *((unsigned int *)this + 81));
  v18 = 0;
  v11 = (char *)this + 324;
  if ( !SourceModifierForActiveManipulation )
    goto LABEL_5;
  v12 = CConditionalExpression::ProcessConditionalExpression(
          SourceModifierForActiveManipulation,
          a2,
          a3,
          *v9 != 2,
          &v18,
          a4);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x25Bu, 0LL);
    return v13;
  }
  if ( !v18 )
  {
    v11 = (char *)this + 324;
LABEL_5:
    v14 = CScrollAnimation::GetInteractionTracker(this);
    v15 = v14;
    v16 = *(float (__fastcall **)(CScrollAnimation *))(*(_QWORD *)this + 336LL);
    if ( *v9 )
    {
      if ( *v9 == 1 )
      {
        v9 = v11;
      }
      else if ( *v9 == 2 )
      {
        v9 = v11;
      }
    }
    else
    {
      v9 = v11;
    }
    InteractionSourceManager::GetActiveManipulationDelta((char *)v14 + 208);
    CInteractionTracker::GetCurrentValue(v15, (unsigned int)*v9);
    *a4 = v16(this);
  }
  return 0;
}
