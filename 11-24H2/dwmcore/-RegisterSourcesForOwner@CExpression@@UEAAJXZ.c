/*
 * XREFs of ?RegisterSourcesForOwner@CExpression@@UEAAJXZ @ 0x1800E86C0
 * Callers:
 *     ??$SetExpressionArray@UtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@V?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@CBaseExpression@@IEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@PEBXIPEAV?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@Z @ 0x1800E8324 (--$SetExpressionArray@UtagMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@V-$DynArrayIANoCtor@P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@@Z @ 0x18023D730 (-RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@.c)
 */

__int64 __fastcall CExpression::RegisterSourcesForOwner(CExpression *this)
{
  struct CBaseExpression *v1; // rbp
  unsigned int v3; // esi
  int v4; // eax
  unsigned int v5; // ebx

  v1 = (struct CBaseExpression *)*((_QWORD *)this + 40);
  if ( !v1 )
    v1 = this;
  v3 = 0;
  if ( *((_DWORD *)this + 93) )
  {
    while ( 1 )
    {
      v4 = CExpression::RegisterSourceForAnimation(
             this,
             v1,
             (const struct ExpressionReferenceInfo *)(*((_QWORD *)this + 44) + 28LL * v3));
      v5 = v4;
      if ( v4 < 0 )
        break;
      if ( ++v3 >= *((_DWORD *)this + 93) )
        return 0;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x13Du, 0LL);
  }
  else
  {
    return 0;
  }
  return v5;
}
