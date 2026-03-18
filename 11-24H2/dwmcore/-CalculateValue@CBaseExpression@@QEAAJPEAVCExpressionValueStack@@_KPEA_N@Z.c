/*
 * XREFs of ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18000F9B0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z @ 0x180012630 (-UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x180013630 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x18004EE50 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1800E6D90 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800E700C (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1801532D8 (-ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801E05CC (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18000C5A0 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?AddAndSet@?$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z @ 0x18000D670 (-AddAndSet@-$DynArray@VCExpressionValue@@$00@@QEAAJIAEBVCExpressionValue@@@Z.c)
 *     ?GetProperty@CPropertySet@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18000DA20 (-GetProperty@CPropertySet@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18000F570 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18000F990 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18000F9B0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?HasValue@CExpressionValue@@QEBA_NXZ @ 0x180012614 (-HasValue@CExpressionValue@@QEBA_NXZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsDirtyForFrame@CBaseExpression@@QEBA_NXZ @ 0x1800132F0 (-IsDirtyForFrame@CBaseExpression@@QEBA_NXZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x1800159A0 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?GetProperty@CColorBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180080E40 (-GetProperty@CColorBrush@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z @ 0x180101380 (-IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180154180 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18015B3A0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x1801AEBE0 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z @ 0x1801B55F0 (-AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z.c)
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801BAEE0 (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsPastDelay@CNaturalAnimation@@AEAA_NXZ @ 0x1801BB1E8 (-IsPastDelay@CNaturalAnimation@@AEAA_NXZ.c)
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801BB26C (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 *     ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x1801BB4F4 (-PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x18021BE64 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ @ 0x18028CAFC (-ResolveTargetNoRef@CBaseExpression@@IEBAPEAVCResource@@XZ.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z @ 0x18028DFA0 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEBVSubchannelMaskInfo@@@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x180298BB4 (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetPerformanceCounter@CBaseExpression@@QEBAPEAVCExpressionPerformanceCounter@@XZ @ 0x1802A11E8 (-GetPerformanceCounter@CBaseExpression@@QEBAPEAVCExpressionPerformanceCounter@@XZ.c)
 *     ?ShouldLogPerfStats@CBaseExpression@@IEBA_NXZ @ 0x1802A12C0 (-ShouldLogPerfStats@CBaseExpression@@IEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::CalculateValue(
        CBaseExpression *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        bool *a4)
{
  double v4; // xmm2_8
  __int64 v5; // rbx
  __int64 v6; // rdi
  struct CExpressionPerformanceCounter *PerformanceCounter; // r13
  CBaseExpression *v11; // rcx
  unsigned __int64 v12; // r8
  bool ShouldLogPerfStats; // r15
  __int64 v14; // rax
  void (__fastcall *v15)(CExpression *__hidden, bool *); // rax
  bool v16; // dl
  char v17; // dl
  int v18; // r15d
  __int64 v19; // rax
  unsigned __int64 v21; // rcx
  __int64 (__fastcall *v22)(CKeyframeAnimation *, unsigned __int64, double, bool *); // rax
  int v23; // eax
  CBaseExpression *v24; // rcx
  __int64 Elapsed; // rax
  int v26; // eax
  __int64 v27; // rax
  const struct CExpressionValue *v28; // r12
  struct CExpressionValue *v29; // rdx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rax
  struct CResource *v33; // rax
  CPropertySet *v34; // rcx
  __int64 (__fastcall *v35)(CVisual *, int, struct CExpressionValue *); // rax
  __int64 v36; // rdx
  int Property; // eax
  unsigned int v38; // ecx
  __int64 v39; // rdx
  __int64 i; // rax
  unsigned __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  CExpressionValue *v47; // rax
  CPathData *v48; // rcx
  int v49; // eax
  CPathData *v50; // rcx
  __int64 v51; // rdx
  int v52; // r9d
  int v53; // eax
  int v54; // edi
  __int64 v55; // rdx
  int v56; // ecx
  bool v57; // cf
  int v58; // eax
  unsigned int v59; // [rsp+20h] [rbp-E0h]
  bool v60; // [rsp+30h] [rbp-D0h] BYREF
  bool v61; // [rsp+31h] [rbp-CFh] BYREF
  int v62; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v63; // [rsp+38h] [rbp-C8h]
  __int64 v64; // [rsp+40h] [rbp-C0h] BYREF
  int v65; // [rsp+48h] [rbp-B8h]
  unsigned int v66; // [rsp+4Ch] [rbp-B4h]
  _QWORD v67[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v68; // [rsp+60h] [rbp-A0h] BYREF
  int v69; // [rsp+68h] [rbp-98h]
  _BYTE v70[64]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v71; // [rsp+B0h] [rbp-50h] BYREF
  int v72; // [rsp+B8h] [rbp-48h]
  _BYTE v73[64]; // [rsp+C0h] [rbp-40h] BYREF
  CPathData *v74; // [rsp+100h] [rbp+0h] BYREF
  int v75; // [rsp+108h] [rbp+8h]

  v5 = 0LL;
  v63 = a3;
  v6 = 0LL;
  v67[0] = 0LL;
  v64 = 0LL;
  *a4 = 0;
  PerformanceCounter = 0LL;
  ShouldLogPerfStats = CBaseExpression::ShouldLogPerfStats(this);
  if ( ShouldLogPerfStats )
  {
    PerformanceCounter = CBaseExpression::GetPerformanceCounter(v11);
    QpcStopwatch::Start((QpcStopwatch *)v67);
    v12 = v63;
    v5 = v67[0];
  }
  v66 = *((_DWORD *)a2 + 2);
  v62 = *((_DWORD *)this + 57);
  if ( !*((_QWORD *)this + 29) )
    *((_QWORD *)this + 29) = v12;
  v14 = *(_QWORD *)this;
  v60 = 0;
  v15 = *(void (__fastcall **)(CExpression *__hidden, bool *))(v14 + 272);
  if ( v15 == CExpression::PrepareForCalculation )
  {
    v16 = !CCommonRegistryData::OptimizeForDirtyExpressions
       || *((_QWORD *)this + 40)
       || CBaseExpression::IsDirtyForFrame(this);
    v60 = v16;
  }
  else
  {
    v15(this, &v60);
  }
  if ( CExpressionValue::HasValue((CBaseExpression *)((char *)this + 80)) && !v17 )
  {
    v18 = 0;
    goto LABEL_13;
  }
  v21 = v63;
  *((_QWORD *)this + 22) = v63;
  if ( ShouldLogPerfStats && (*((_BYTE *)this + 224) & 2) != 0 )
  {
    v55 = *(_QWORD *)(*((_QWORD *)this + 3) + 824LL);
    v56 = *(_DWORD *)(*((_QWORD *)this + 39) + 4LL);
    ++*(_DWORD *)(v55 + 444);
    v57 = (v56 & 0x40000000) != 0;
    v21 = v63;
    if ( v57 )
      ++*(_DWORD *)(v55 + 448);
  }
  if ( PerformanceCounter )
  {
    QpcStopwatch::Start((QpcStopwatch *)&v64);
    v21 = v63;
    v6 = v64;
  }
  if ( (*((_BYTE *)this + 224) & 8) == 0 )
  {
    for ( i = 0LL; ; i = (unsigned int)(v65 + 1) )
    {
      v65 = i;
      if ( (unsigned int)i >= *((_DWORD *)this + 66) )
      {
        *((_BYTE *)this + 224) |= 8u;
        v21 = v63;
        goto LABEL_20;
      }
      v41 = *((_QWORD *)this + 22);
      v42 = 8 * i;
      v43 = *((_QWORD *)this + 30);
      v61 = 0;
      v68 = v42;
      v44 = CBaseExpression::CalculateValue(*(CBaseExpression **)(v42 + v43), a2, v41, &v61);
      v18 = v44;
      if ( v44 < 0 )
        break;
      CBaseExpression::EnsureExpressionIsUnregistered(*(CBaseExpression **)(v68 + *((_QWORD *)this + 30)));
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x2FEu, 0LL);
    v59 = 1123;
    goto LABEL_55;
  }
LABEL_20:
  if ( !v62 )
    *((_DWORD *)this + 57) = 4;
  v22 = *(__int64 (__fastcall **)(CKeyframeAnimation *, unsigned __int64, double, bool *))(*(_QWORD *)this + 248LL);
  if ( v22 == CKeyframeAnimation::CalculateValueWorker )
  {
    v23 = CKeyframeAnimation::CalculateValueWorker(this, (unsigned __int64)a2, v4, a4);
    goto LABEL_26;
  }
  if ( (char *)v22 == (char *)CExpression::CalculateValueWorker )
  {
    v23 = CExpression::CalculateValueWorker(this, a2, v21, a4);
LABEL_26:
    v18 = v23;
    goto LABEL_27;
  }
  if ( (char *)v22 != (char *)CNaturalAnimation::CalculateValueWorker )
  {
    v23 = ((__int64 (__fastcall *)(CBaseExpression *, struct CExpressionValueStack *, unsigned __int64, bool *))v22)(
            this,
            a2,
            v21,
            a4);
    goto LABEL_26;
  }
  *a4 = 1;
  v18 = 0;
  CNaturalAnimation::SetupAnimationIfNecessary(this);
  if ( CNaturalAnimation::IsPastDelay(this) )
  {
    CNaturalAnimation::CalculateValue(this, a2, v63, a4);
  }
  else if ( *((_DWORD *)this + 99) == 1 )
  {
    v58 = *((_DWORD *)this + 82);
    v68 = *((_QWORD *)this + 40);
    v69 = v58;
    CNaturalAnimation::PushValueToStack(this, &v68, a2);
  }
  else
  {
    v18 = 1;
  }
  v24 = (CBaseExpression *)*a4;
  LOBYTE(v24) = *((_BYTE *)this + 572) ^ (*((_BYTE *)this + 572) ^ ((_BYTE)v24 << 6)) & 0x40;
  *((_BYTE *)this + 572) = (_BYTE)v24;
LABEL_27:
  v62 = v18;
  if ( v18 < 0 )
  {
    v59 = 1130;
LABEL_55:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1803BC5C0, 2u, v18, v59, 0LL);
    goto LABEL_56;
  }
  if ( v6 )
  {
    Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v64);
    CExpressionPerformanceCounter::AddDurationSample(PerformanceCounter, 1LL, Elapsed);
    v6 = 0LL;
    v64 = 0LL;
  }
  if ( v18 == 1 )
  {
    v28 = (const struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
    goto LABEL_45;
  }
  v26 = *((_DWORD *)a2 + 2);
  if ( !v26 )
  {
    CBaseExpression::EnsureExpressionIsUnregistered(this);
    v18 = -2147467259;
    v59 = 1155;
    goto LABEL_55;
  }
  v27 = (unsigned int)(v26 - 1);
  v28 = (const struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
  if ( (unsigned int)v27 >= *((_DWORD *)a2 + 10) )
  {
    memset_0(v70, 0, sizeof(v70));
    v71 = 0LL;
    v72 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v70);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v71);
    v29 = (struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
  }
  else
  {
    v29 = (struct CExpressionValue *)(*((_QWORD *)a2 + 2) + 80 * v27);
  }
  if ( CBaseExpression::IsExpressionValueValid(v24, v29) )
    goto LABEL_35;
LABEL_45:
  memset_0(v73, 0, sizeof(v73));
  v74 = 0LL;
  v75 = 0;
  v33 = CBaseExpression::ResolveTargetNoRef(this);
  v34 = v33;
  if ( !v33 )
  {
    v18 = -2147024782;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1803BC5C0, 2u, -2147024782, 0x490u, 0LL);
    goto LABEL_83;
  }
  v35 = *(__int64 (__fastcall **)(CVisual *, int, struct CExpressionValue *))(*(_QWORD *)v33 + 136LL);
  if ( (char *)v35 == (char *)CPropertySet::GetProperty )
  {
    Property = CPropertySet::GetProperty(v34, *((_DWORD *)this + 47), (struct CExpressionValue *)v73);
  }
  else if ( v35 == CVisual::GetProperty )
  {
    Property = CVisual::GetProperty(v34, *((_DWORD *)this + 47), (struct CExpressionValue *)v73);
  }
  else
  {
    v36 = *((unsigned int *)this + 47);
    if ( (char *)v35 == (char *)CColorBrush::GetProperty )
      Property = CColorBrush::GetProperty(v34, v36, (struct CExpressionValue *)v73);
    else
      Property = v35(v34, v36, (struct CExpressionValue *)v73);
  }
  v18 = Property;
  if ( Property < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1803BC5C0, 2u, Property, 0x493u, 0LL);
    v50 = v74;
    if ( v74 )
    {
      v74 = 0LL;
      if ( *(__int64 (__fastcall **)(CPathData *))(*(_QWORD *)v50 + 16LL) == CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
        CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v50);
      else
        (*(void (__fastcall **)(CPathData *))(*(_QWORD *)v50 + 16LL))(v50);
    }
    goto LABEL_56;
  }
  v45 = *((_QWORD *)this + 25);
  if ( v45 )
  {
    if ( *(_BYTE *)(v45 + 4) )
    {
      v49 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)v73, (const struct SubchannelMaskInfo *)v45);
      v18 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1803BC5C0, 2u, v49, 0x499u, 0LL);
LABEL_83:
        Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v74);
        goto LABEL_56;
      }
    }
  }
  if ( v75 != *((_DWORD *)this + 40) )
  {
    v18 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1803BC5C0, 2u, -2147024809, 0x49Eu, 0LL);
    goto LABEL_83;
  }
  if ( v62 == 1 )
  {
    if ( (unsigned int)~*((_DWORD *)a2 + 2) < 5 )
    {
      v18 = -2147418113;
      v54 = -2147418113;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147418113,
        0x54u,
        0LL);
    }
    else
    {
      if ( *((_DWORD *)a2 + 10) != *((_DWORD *)a2 + 2) )
      {
LABEL_73:
        v46 = *((unsigned int *)a2 + 2);
        *((_DWORD *)a2 + 2) = v46 + 1;
        v47 = (CExpressionValue *)(*((_QWORD *)a2 + 2) + 80 * v46);
        goto LABEL_74;
      }
      memset_0(v70, 0, sizeof(v70));
      v71 = 0LL;
      v72 = 0;
      v53 = DynArray<CExpressionValue,1>::AddAndSet((__int64)a2 + 16, v51, (__int64)v70, v52);
      v18 = v53;
      if ( v53 >= 0 )
      {
        Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v71);
        goto LABEL_73;
      }
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        v53,
        0x5Du,
        0LL);
      Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v71);
      v54 = v18;
    }
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v54,
      0x16Fu,
      0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1803BC5C0, 2u, v54, 0x4A3u, 0LL);
    goto LABEL_83;
  }
  v47 = CExpressionValueStack::PeekStackValue(a2, 0);
LABEL_74:
  CExpressionValue::CopyFrom(v47, (const struct CExpressionValue *)v73);
  v48 = v74;
  if ( v74 )
  {
    v74 = 0LL;
    if ( *(__int64 (__fastcall **)(CPathData *))(*(_QWORD *)v48 + 16LL) == CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v48);
    else
      (*(void (__fastcall **)(CPathData *))(*(_QWORD *)v48 + 16LL))(v48);
  }
LABEL_35:
  if ( *((_DWORD *)a2 + 2) != v66 + 1 )
  {
    v18 = -2147467259;
    v59 = 1207;
    goto LABEL_55;
  }
  if ( PerformanceCounter )
  {
    QpcStopwatch::Start((QpcStopwatch *)&v64);
    v6 = v64;
  }
  v30 = (unsigned int)(*((_DWORD *)a2 + 2) - 1);
  if ( (unsigned int)v30 >= *((_DWORD *)a2 + 10) )
  {
    memset_0(v70, 0, sizeof(v70));
    v71 = 0LL;
    v72 = 0;
    CExpressionValue::operator=(&CExpressionValueStack::s_emptyValue, v70);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v71);
  }
  else
  {
    v28 = (const struct CExpressionValue *)(*((_QWORD *)a2 + 2) + 80 * v30);
  }
  v31 = CBaseExpression::SetOutputValue(this, v28);
  v18 = v31;
  if ( v31 >= 0 )
  {
    if ( v6 )
    {
      v32 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v64);
      CExpressionPerformanceCounter::AddDurationSample(PerformanceCounter, 5LL, v32);
    }
    --*((_DWORD *)a2 + 2);
    v18 = 0;
    goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1803BC5C0, 2u, v31, 0x4C4u, 0LL);
LABEL_56:
  v38 = *((_DWORD *)a2 + 2);
  if ( v38 > v66 )
  {
    v39 = v38 - v66;
    do
    {
      --v38;
      --v39;
    }
    while ( v39 );
    *((_DWORD *)a2 + 2) = v38;
  }
LABEL_13:
  if ( v5 )
  {
    v19 = QpcStopwatch::GetElapsed((QpcStopwatch *)v67);
    CExpressionPerformanceCounter::AddDurationSample(PerformanceCounter, 0LL, v19);
  }
  return (unsigned int)v18;
}
