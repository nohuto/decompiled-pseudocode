/*
 * XREFs of ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x1800159A0
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180013DC0 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180015570 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ??1CBaseExpression@@MEAA@XZ @ 0x18001615C (--1CBaseExpression@@MEAA@XZ.c)
 *     ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180153340 (-ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1801534F0 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x1801E118C (-Stop@CScrollAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1801547D0 (-EnsureAutoCompleteOnOccludedAnimationRemoved@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1801869D0 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV?$CWeakReference@VCResource@@@@IPEAVSubchannelMaskInfo@@_N@Z @ 0x180186C30 (-UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV-$CWeakReference@V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBaseExpression::EnsureExpressionIsUnregistered(CBaseExpression *this)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  CExpressionManager *v4; // rsi
  __int64 v5; // rax
  int v6; // [rsp+20h] [rbp-18h]

  v2 = *((_QWORD *)this + 37);
  v3 = *((_QWORD *)this + 36);
  v4 = *(CExpressionManager **)(*((_QWORD *)this + 3) + 824LL);
  while ( v3 != v2 )
  {
    CExpressionManager::UnregisterExpressionWorker((_DWORD)v4, (_DWORD)this, *(_QWORD *)v3, *(_DWORD *)(v3 + 8), v6, 1);
    v3 += 16LL;
  }
  v5 = *((_QWORD *)this + 36);
  if ( v5 != *((_QWORD *)this + 37) )
    *((_QWORD *)this + 37) = v5;
  if ( (*((_BYTE *)this + 224) & 0x10) != 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 240LL))(this) )
      CExpressionManager::EnsureAutoCompleteOnOccludedAnimationRemoved(v4, this);
    CExpressionManager::UnregisterExpression(v4, this);
    *((_BYTE *)this + 224) &= ~0x10u;
  }
}
