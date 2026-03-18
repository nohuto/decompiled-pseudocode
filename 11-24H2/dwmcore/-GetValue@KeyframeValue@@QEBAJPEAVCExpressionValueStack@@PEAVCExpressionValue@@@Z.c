/*
 * XREFs of ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1800E6D90
 * Callers:
 *     ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1800DE4DC (-EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ.c)
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1800E69A0 (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCKeyframeAnimation@@W4CustomAnimationTarget@@@Z @ 0x18029DC6C (-SetCustomAnimationFinalValue@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@P.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x1802AB818 (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18000F990 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z @ 0x1800E6EC4 (-GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall KeyframeValue::GetValue(
        KeyframeValue *this,
        struct CExpressionValueStack *a2,
        struct CExpressionValue *a3)
{
  int v3; // eax
  const struct CExpressionValue *v5; // rdx
  unsigned int v6; // ebx
  int v8; // eax
  __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  CBaseExpression *v14; // rsi
  int v15; // ebp
  int SampledStartingValue; // eax
  unsigned int v17; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  bool v19; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 5);
  if ( v3 != 1 )
  {
    v8 = v3 - 2;
    if ( v8 )
    {
      if ( v8 != 1 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      SampledStartingValue = CKeyframeAnimation::GetSampledStartingValue(*((CKeyframeAnimation **)this + 3), a3);
      v6 = SampledStartingValue;
      if ( SampledStartingValue < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, SampledStartingValue, 0x50u, 0LL);
        return v6;
      }
      return 0;
    }
    v9 = *((_QWORD *)this + 3);
    v10 = *((_DWORD *)this + 8);
    if ( v10 >= *(_DWORD *)(v9 + 384) )
    {
      v6 = -2147467259;
      v17 = 1745;
      v15 = -2147467259;
    }
    else
    {
      v11 = v10;
      v12 = *(_QWORD *)(v9 + 360);
      v13 = *(_QWORD *)(v9 + 176);
      v14 = *(CBaseExpression **)(v12 + 8 * v11);
      v19 = 0;
      v15 = CBaseExpression::CalculateValue(v14, a2, v13, &v19);
      v6 = v15;
      if ( v15 >= 0 )
      {
        v5 = (CBaseExpression *)((char *)v14 + 80);
        goto LABEL_3;
      }
      v17 = 1752;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v17, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x4Au, 0LL);
    return v6;
  }
  v5 = (KeyframeValue *)((char *)this + 24);
LABEL_3:
  CExpressionValue::CopyFrom(a3, v5);
  return 0;
}
