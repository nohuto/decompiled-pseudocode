/*
 * XREFs of ?CalculateCenterPointForAxis@CInteractionTracker@@AEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@W4ScrollAxis@@PEAM@Z @ 0x18021E5FC
 * Callers:
 *     ?UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@@@Z @ 0x18021E4EC (-UpdateCenterPointForState@CInteractionTracker@@QEAAJPEAVCExpressionValueStack@@_KW4ScrollState@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1800E3F48 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x1800E478C (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 *     ?GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z @ 0x1800E53AC (-GetMostRecentCenterPoint@CInteractionTracker@@QEBAMW4ScrollState@@W4ScrollAxis@@@Z.c)
 *     ?GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x18021E774 (-GetSourceCenterpointModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditiona.c)
 *     ?GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA?AUD2DVector3@@XZ @ 0x180227528 (-GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA-AUD2DVector3@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ?WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z @ 0x18029DB48 (-WasInertiaStartedByImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::CalculateCenterPointForAxis(
        float *a1,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5,
        void *a6)
{
  float *v6; // rdi
  int v8; // ebx
  CConditionalExpression *SourceCenterpointModifierForActiveManipulation; // r10
  unsigned __int64 v11; // r11
  int v13; // eax
  unsigned int v14; // ebp
  float MostRecentCenterPoint; // xmm0_4
  __int64 v16; // rcx
  _DWORD v18[10]; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  bool v20; // [rsp+78h] [rbp+20h] BYREF

  v6 = (float *)a6;
  v8 = a5;
  SourceCenterpointModifierForActiveManipulation = 0LL;
  v11 = a3;
  if ( a4 == 1 )
  {
    SourceCenterpointModifierForActiveManipulation = (CConditionalExpression *)InteractionSourceManager::GetSourceCenterpointModifierForActiveManipulation(
                                                                                 a1 + 52,
                                                                                 a5);
  }
  else if ( a4 == 2 )
  {
    SourceCenterpointModifierForActiveManipulation = *(CConditionalExpression **)&a1[2 * a5 + 92];
  }
  v20 = 0;
  if ( !SourceCenterpointModifierForActiveManipulation )
    goto LABEL_9;
  v13 = CConditionalExpression::ProcessConditionalExpression(
          SourceCenterpointModifierForActiveManipulation,
          a2,
          v11,
          v8 != 2,
          &v20,
          v6);
  v14 = v13;
  if ( v13 >= 0 )
  {
    if ( v20 )
      return 0;
LABEL_9:
    if ( a4 == 2 )
    {
      if ( (unsigned __int8)CInteractionTracker::WasInertiaStartedByImpulse(a1) )
      {
        if ( v8 )
        {
          if ( v8 != 1 )
            ModuleFailFastForHRESULT(-2147467259, retaddr);
          MostRecentCenterPoint = a1[134];
        }
        else
        {
          MostRecentCenterPoint = a1[133];
        }
        goto LABEL_24;
      }
    }
    else if ( a4 == 1 && InteractionSourceManager::HasActiveManipulation((InteractionSourceManager *)(a1 + 52)) )
    {
      InteractionSourceManager::GetActiveManipulationCenterpoint(v16, v18);
      if ( v8 )
      {
        if ( v8 != 1 )
          ModuleFailFastForHRESULT(-2147467259, retaddr);
        MostRecentCenterPoint = *(float *)&v18[1];
      }
      else
      {
        MostRecentCenterPoint = *(float *)v18;
      }
      goto LABEL_24;
    }
    MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint((__int64)a1, a4, v8);
LABEL_24:
    *v6 = MostRecentCenterPoint;
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x176Bu, 0LL);
  return v14;
}
