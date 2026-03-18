/*
 * XREFs of ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1802AA4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180034A90 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x18003C798 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetStopValue@CNaturalAnimation@@AEAA?ATInternalValue@1@XZ @ 0x1801CCC30 (-GetStopValue@CNaturalAnimation@@AEAA-ATInternalValue@1@XZ.c)
 *     ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@@@Z @ 0x180216360 (-ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

__int64 __fastcall CNaturalAnimation::ProcessSetBindingBroken(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  int v7; // eax
  __int64 StopValue; // rax
  __int64 v9; // xmm0_8
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-88h] BYREF
  int v13; // [rsp+38h] [rbp-80h]
  _BYTE v14[16]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v15[64]; // [rsp+50h] [rbp-68h] BYREF
  CPathData *v16; // [rsp+90h] [rbp-28h] BYREF
  int v17; // [rsp+98h] [rbp-20h]

  v4 = 0;
  if ( (*((_BYTE *)this + 224) & 2) != 0 )
  {
    v7 = CBaseExpression::NotifyAnimationDisconnected(this, (__int64)a2, (__int64)a3, a4);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x216u, 0LL);
    }
    else if ( *((_BYTE *)a3 + 8) )
    {
      memset_0(v15, 0, sizeof(v15));
      v16 = 0LL;
      v17 = 0;
      StopValue = CNaturalAnimation::GetStopValue((__int64)this, (__int64)v14);
      v9 = *(_QWORD *)StopValue;
      LODWORD(StopValue) = *(_DWORD *)(StopValue + 8);
      v12 = v9;
      v13 = StopValue;
      CNaturalAnimation::ExpressionValueFromInternalValue((__int64)this, (unsigned int *)&v12, (__int64)v15);
      v10 = CBaseExpression::SetOutputValue(this, (const struct CExpressionValue *)v15);
      v4 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x21Cu, 0LL);
      Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v16);
    }
  }
  return v4;
}
