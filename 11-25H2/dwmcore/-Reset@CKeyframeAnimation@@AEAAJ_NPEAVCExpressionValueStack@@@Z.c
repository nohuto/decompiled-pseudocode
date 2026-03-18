/*
 * XREFs of ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18003CE98
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18003CBE0 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180068960 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x1802A8C20 (-StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ.c)
 * Callees:
 *     ?AddAndSet@?$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z @ 0x180032BD0 (-AddAndSet@-$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180035860 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?Stop@KeyframeSequence@@QEAAXXZ @ 0x18003AC78 (-Stop@KeyframeSequence@@QEAAXXZ.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x18003ACE0 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x18003AD20 (-PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x18003AE20 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?NotifyAnimationStopped@CBaseExpression@@IEAAJXZ @ 0x18003D4D4 (-NotifyAnimationStopped@CBaseExpression@@IEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x1800D18A0 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResetTime@KeyframeSequence@@QEAAXI@Z @ 0x1801D67DC (-ResetTime@KeyframeSequence@@QEAAXI@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

__int64 __fastcall CKeyframeAnimation::Reset(CKeyframeAnimation *this, char a2, struct CExpressionValueStack *a3)
{
  int v5; // eax
  const struct CExpressionValue *v6; // r14
  __int64 v7; // rcx
  KeyframeSequence *v8; // rcx
  int v9; // ebp
  char v10; // dl
  char v11; // dl
  int v12; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // r9d
  int v17; // eax
  int v18; // edi
  int v19; // ecx
  int v20; // edx
  unsigned int v21; // r11d
  _BYTE v22[64]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v23; // [rsp+70h] [rbp-28h] BYREF
  int v24; // [rsp+78h] [rbp-20h]

  if ( (*((_BYTE *)this + 537) & 1) != 0 )
  {
    if ( !a2 )
      goto LABEL_8;
    v5 = *((_DWORD *)this + 133);
    if ( v5 == 1 )
    {
      *((_DWORD *)this + 111) = *((_DWORD *)this + 110);
      CKeyframeAnimation::PrepareSequenceForIteration(this, 0);
      KeyframeSequence::ConfigureTimer(*((KeyframeSequence **)this + 44));
      *(_DWORD *)(v14 + 92) = 0;
    }
    else if ( v5 == 2 )
    {
      *((_DWORD *)this + 111) = *((_DWORD *)this + 110);
      CKeyframeAnimation::GetAnimationTimeLength(this);
      v19 = *((_DWORD *)this + 125);
      v20 = 0;
      if ( v19 >= 1 )
        v20 = v19 - 1;
      CKeyframeAnimation::PrepareSequenceForIteration(this, v20);
      KeyframeSequence::ResetTime(*((KeyframeSequence **)this + 44), v21);
    }
    KeyframeSequence::Calculate(*((KeyframeSequence **)this + 44), a3);
    v6 = (const struct CExpressionValue *)*((_QWORD *)this + 44);
    if ( (unsigned int)~*((_DWORD *)a3 + 2) < 5 )
    {
      v18 = -2147418113;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147418113,
        0x54u,
        0LL);
      v9 = -2147418113;
    }
    else
    {
      if ( *((_DWORD *)a3 + 10) != *((_DWORD *)a3 + 2) )
      {
LABEL_7:
        v7 = *((unsigned int *)a3 + 2);
        *((_DWORD *)a3 + 2) = v7 + 1;
        CExpressionValue::CopyFrom((CExpressionValue *)(*((_QWORD *)a3 + 2) + 80 * v7), v6);
LABEL_8:
        v8 = (KeyframeSequence *)*((_QWORD *)this + 44);
        if ( (*((_BYTE *)v8 + 140) & 1) != 0 )
          KeyframeSequence::Stop(v8);
        goto LABEL_10;
      }
      memset_0(v22, 0, sizeof(v22));
      v23 = 0LL;
      v24 = 0;
      v17 = DynArray<CExpressionValue,1>::AddAndSet((__int64)a3 + 16, v15, (__int64)v22, v16);
      v18 = v17;
      v9 = v17;
      if ( v17 >= 0 )
      {
        Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v23);
        goto LABEL_7;
      }
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        v17,
        0x5Du,
        0LL);
      Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v23);
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v18,
      0x16Fu,
      0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x981u, 0LL);
    goto LABEL_11;
  }
LABEL_10:
  v9 = 0;
LABEL_11:
  v10 = *((_BYTE *)this + 536);
  *((_BYTE *)this + 537) &= 0xF8u;
  v11 = v10 & 0x7F;
  *((_DWORD *)this + 111) = 0;
  *((_BYTE *)this + 536) = v11;
  if ( v9 >= 0 && (v11 & 0x20) == 0 )
  {
    v12 = CBaseExpression::NotifyAnimationStopped(this);
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x732u, 0LL);
  }
  return (unsigned int)v9;
}
