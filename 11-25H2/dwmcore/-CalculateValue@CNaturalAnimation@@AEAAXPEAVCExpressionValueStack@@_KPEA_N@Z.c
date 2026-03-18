/*
 * XREFs of ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801CC5C0
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800387D0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801CC500 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180004594 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemp.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800331B0 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18003D5A4 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18017B8F8 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     _tlgKeywordOn @ 0x1801CAD80 (_tlgKeywordOn.c)
 *     ??$emplace@AEBQEAVCBaseExpression@@@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@@std@@_N@1@AEBQEAVCBaseExpression@@@Z @ 0x1801CB9D0 (--$emplace@AEBQEAVCBaseExpression@@@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compa.c)
 *     ?Update@CVector3Force@@QEAA?AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z @ 0x1801CC97C (-Update@CVector3Force@@QEAA-AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z.c)
 *     ?CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ @ 0x1801CCA74 (-CalculateAnimationElapsedTimeInSeconds@CNaturalAnimation@@AEAAMXZ.c)
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1801CCB10 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?IsInMotion@CScalarForceEvaluator@@QEBA_NXZ @ 0x1801CCB94 (-IsInMotion@CScalarForceEvaluator@@QEBA_NXZ.c)
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x1801CCBD4 (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?GetStopValue@CNaturalAnimation@@AEAA?ATInternalValue@1@XZ @ 0x1801CCC30 (-GetStopValue@CNaturalAnimation@@AEAA-ATInternalValue@1@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?PeekStackValue@CNaturalAnimation@@AEAA?ATInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x1802AA428 (-PeekStackValue@CNaturalAnimation@@AEAA-ATInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z @ 0x1802B9710 (-ChangeBasis@CVector3ForceEvaluator@@QEAAXAEBUD2DMatrix@@@Z.c)
 */

void __fastcall CNaturalAnimation::CalculateValue(
        CNaturalAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  bool v4; // di
  _BYTE *v5; // rsi
  int v9; // eax
  char v10; // dl
  __int64 v11; // r8
  float v12; // xmm6_4
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // xmm0_8
  int v19; // eax
  __int64 StopValue; // rax
  CNaturalAnimation *v21; // xmm0_8
  __int64 v22; // rax
  int *v23; // r8
  int v24; // ecx
  __int64 v25; // rcx
  CNaturalAnimation *v26; // [rsp+88h] [rbp-39h] BYREF
  int v27; // [rsp+90h] [rbp-31h]
  __int64 v28; // [rsp+98h] [rbp-29h] BYREF
  int v29; // [rsp+A0h] [rbp-21h]
  int v30; // [rsp+A8h] [rbp-19h]
  int v31; // [rsp+ACh] [rbp-15h]
  int v32; // [rsp+B0h] [rbp-11h]
  int v33; // [rsp+B4h] [rbp-Dh]
  int v34; // [rsp+B8h] [rbp-9h]
  int v35; // [rsp+BCh] [rbp-5h]
  float v36; // [rsp+C0h] [rbp-1h]
  _BYTE v37[16]; // [rsp+C8h] [rbp+7h] BYREF

  v4 = 0;
  v5 = (char *)this + 572;
  *a4 = 0;
  if ( a3 != *((_QWORD *)this + 52) && (*v5 & 8) == 0 )
  {
    v9 = *((_DWORD *)this + 40);
    if ( v9 != 52 && v9 != 18 && v9 != 35 )
    {
LABEL_14:
      if ( (*((_BYTE *)this + 572) & 8) != 0 )
      {
        v22 = *((_QWORD *)this + 3);
        v26 = this;
        std::_Hash<std::_Uset_traits<CBaseExpression *,std::_Uhash_compare<CBaseExpression *,std::hash<CBaseExpression *>,std::equal_to<CBaseExpression *>>,std::allocator<CBaseExpression *>,0>>::emplace<CBaseExpression * const &>(
          (_QWORD *)(*(_QWORD *)(v22 + 824) + 648LL),
          (__int64)v37,
          &v26);
      }
      return;
    }
    if ( CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(*((_QWORD *)this + 53) + 16LL))
      || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v11 + 84)) )
    {
      *v5 = v10 | 4;
    }
    if ( CNaturalAnimation::GenerateVector3Basis(this) )
      CVector3ForceEvaluator::ChangeBasis(
        (CVector3ForceEvaluator *)(*((_QWORD *)this + 53) + 16LL),
        (CNaturalAnimation *)((char *)this + 444));
    v12 = CNaturalAnimation::CalculateAnimationElapsedTimeInSeconds(this);
    CVector3Force::Update(*((_QWORD *)this + 53), &v28);
    if ( CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(*((_QWORD *)this + 53) + 16LL))
      || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v13 + 84))
      || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v14 + 152)) )
    {
      *a4 = 1;
      if ( (*v5 & 8) == 0 )
      {
        v26 = 0LL;
        v27 = 0;
        D3DXVec3TransformCoord(
          (struct D2DVector3 *)&v26,
          (const struct D2DVector3 *)&v28,
          (CNaturalAnimation *)((char *)this + 508));
        v15 = v27;
        *(_QWORD *)((char *)this + 332) = v26;
        *((_DWORD *)this + 85) = v15;
        *((float *)this + 83) = *((float *)this + 86) + *((float *)this + 83);
        *((float *)this + 84) = *((float *)this + 87) + *((float *)this + 84);
        *((float *)this + 85) = *((float *)this + 88) + *((float *)this + 85);
        v16 = *((_DWORD *)this + 85);
        v26 = *(CNaturalAnimation **)((char *)this + 332);
        v27 = v16;
        CNaturalAnimation::PushValueToStack(this, &v26, a2);
LABEL_13:
        if ( (*(_DWORD *)(*((_QWORD *)this + 39) + 4LL) & 0x40000000) != 0 )
        {
          CNaturalAnimation::PeekStackValue(this, v37, a2);
          if ( (unsigned int)dword_180404D18 > 4 && tlgKeywordOn((__int64)&dword_180404D18, 4LL) )
          {
            v31 = v23[1];
            v32 = *v23;
            v33 = v29;
            v24 = v23[2];
            v34 = HIDWORD(v28);
            v30 = v24;
            v35 = v28;
            v36 = v12;
            LODWORD(v26) = CBaseExpression::GetTracingCookie(this);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
              v25,
              (__int64)&unk_1803D95E2);
          }
        }
        goto LABEL_14;
      }
    }
    else
    {
      *a4 = 0;
    }
    v18 = *((_QWORD *)this + 43);
    v19 = *((_DWORD *)this + 88);
    *((_BYTE *)this + 572) |= 8u;
    *(_QWORD *)((char *)this + 332) = v18;
    *((_DWORD *)this + 85) = v19;
    StopValue = CNaturalAnimation::GetStopValue(this, v37);
    v21 = *(CNaturalAnimation **)StopValue;
    LODWORD(StopValue) = *(_DWORD *)(StopValue + 8);
    v26 = v21;
    v27 = StopValue;
    CNaturalAnimation::PushValueToStack(this, &v26, a2);
    if ( (*((_BYTE *)this + 224) & 2) != 0 )
      CBaseExpression::NotifyAnimationCompleted(this);
    *((_BYTE *)this + 224) &= ~1u;
    goto LABEL_13;
  }
  if ( (*v5 & 8) == 0 )
    v4 = (*v5 & 0x40) != 0;
  *a4 = v4;
  v17 = *((_DWORD *)this + 85);
  v28 = *(_QWORD *)((char *)this + 332);
  v29 = v17;
  CNaturalAnimation::PushValueToStack(this, &v28, a2);
}
