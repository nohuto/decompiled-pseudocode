/*
 * XREFs of ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x180013310
 * Callers:
 *     ?UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z @ 0x180012630 (-UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x180013310 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAXAEBUExpressionWalkContext@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x180013570 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAXAEBUExpressionWalkContext@@PEAV-$CWe.c)
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x1800137C0 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?InsertDependenciesInOrder@CConditionalExpression@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x18021ED70 (-InsertDependenciesInOrder@CConditionalExpression@@UEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?InsertDependenciesInOrder@CExpression@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x18023D120 (-InsertDependenciesInOrder@CExpression@@UEAAXAEBUExpressionWalkContext@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x18000DD58 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x180013310 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x1800163B0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertDependenciesForProperty@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1800E0FF8 (-InsertDependenciesForProperty@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4Enum@Inter.c)
 *     ?ShouldAnimationBeSuspended@CExpressionManager@@AEAA_NPEAVCBaseExpression@@@Z @ 0x1801BA2C0 (-ShouldAnimationBeSuspended@CExpressionManager@@AEAA_NPEAVCBaseExpression@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBaseExpression::InsertInOrder(CBaseExpression *this, const struct ExpressionWalkContext *a2)
{
  char v2; // bp
  int v3; // eax
  char v6; // cl
  unsigned int v7; // ecx
  bool v8; // zf
  __int64 i; // rdi
  CBaseExpression *v10; // rcx
  __int64 TargetResource; // rax
  char v12; // cl
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdi
  unsigned int v16; // eax
  unsigned int v17; // edx
  int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CBaseExpression **v20; // [rsp+50h] [rbp+8h] BYREF
  CBaseExpression *v21; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v3 = *((_DWORD *)this + 41) + 1;
  *((_DWORD *)this + 41) = v3;
  if ( v3 <= 1 )
  {
    v6 = 0;
    if ( *((_BYTE *)a2 + 8) && *((_QWORD *)this + 26) != *(_QWORD *)a2 )
    {
      *((_QWORD *)this + 26) = *(_QWORD *)a2;
      v6 = 1;
    }
    if ( *((_QWORD *)this + 21) != *(_QWORD *)a2 || v6 )
    {
      v7 = CBaseExpression::s_recursionLevel;
      if ( CBaseExpression::s_recursionLevel > 0x10 )
        goto LABEL_28;
      v2 = 1;
      v8 = (*((_BYTE *)this + 224) & 8) == 0;
      ++CBaseExpression::s_recursionLevel;
      if ( v8 )
      {
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 66); i = (unsigned int)(i + 1) )
        {
          v10 = *(CBaseExpression **)(*((_QWORD *)this + 30) + 8 * i);
          if ( (*((_BYTE *)v10 + 224) & 0x10) != 0 )
            CBaseExpression::InsertInOrder(v10, a2);
        }
      }
      if ( *((_DWORD *)this + 55) == 90 )
      {
        TargetResource = CWeakReference<CGdiSpriteBitmap>::GetTargetResource(*((_QWORD *)this + 24));
        if ( TargetResource )
          CInteractionTracker::InsertDependenciesForProperty(TargetResource, a2, *((unsigned int *)this + 47));
      }
      (*(void (__fastcall **)(CBaseExpression *, const struct ExpressionWalkContext *))(*(_QWORD *)this + 200LL))(
        this,
        a2);
      v12 = *((_BYTE *)this + 224);
      if ( (v12 & 2) != 0 )
      {
        v13 = *((_QWORD *)this + 3);
        v21 = this;
        if ( (v12 & 0x10) == 0 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x104,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionmanager.cpp",
            *(const char **)(v13 + 824));
        if ( CExpressionManager::ShouldAnimationBeSuspended(*(CExpressionManager **)(v13 + 824), this) )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x107,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionmanager.cpp",
            (const char *)v14);
        v15 = v14 + 32 * ((unsigned int)(1 - *(_DWORD *)(v14 + 156)) + 5LL);
        v16 = *(_DWORD *)(v15 + 24);
        v17 = v16 + 1;
        if ( v16 + 1 >= v16 )
        {
          if ( v17 > *(_DWORD *)(v15 + 20) )
          {
            v20 = &v21;
            v18 = DynArrayImpl<1>::Grow(v15, 8u, 1, v14, (unsigned __int64 *)&v20);
            if ( v18 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xC0u, 0LL);
            else
              *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(v15 + 24))++) + *(_QWORD *)v15) = *v20;
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)v15 + 8LL * *(unsigned int *)(v15 + 24)) = this;
            *(_DWORD *)(v15 + 24) = v17;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, 0LL);
        }
        v7 = CBaseExpression::s_recursionLevel;
        *((_QWORD *)this + 21) = *(_QWORD *)a2;
        goto LABEL_29;
      }
    }
  }
  v7 = CBaseExpression::s_recursionLevel;
LABEL_28:
  *((_QWORD *)this + 21) = *(_QWORD *)a2;
  if ( v2 )
LABEL_29:
    CBaseExpression::s_recursionLevel = v7 - 1;
  --*((_DWORD *)this + 41);
}
