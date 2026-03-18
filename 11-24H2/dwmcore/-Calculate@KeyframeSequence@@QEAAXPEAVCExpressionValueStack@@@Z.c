/*
 * XREFs of ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x18004EE50
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18000F9B0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x180153C54 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18000F570 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18000F990 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18004F740 (-Interpolate@KeyframeInterpolation@@QEAAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@.c)
 *     ?EvaluateCurveAndDerivative@CubicBezierInterpolation@@IEAAXNNNPEAN0@Z @ 0x18004F8A0 (-EvaluateCurveAndDerivative@CubicBezierInterpolation@@IEAAXNNNPEAN0@Z.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x18004F990 (-IsCloseRealZero@@YA_NMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z @ 0x1800E6EC4 (-GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall KeyframeSequence::Calculate(KeyframeSequence *this, struct CExpressionValueStack *a2)
{
  int v4; // ecx
  int v5; // edx
  int v6; // r9d
  char v7; // r10
  int v8; // r8d
  float v9; // xmm6_4
  unsigned int v10; // ecx
  bool v11; // cc
  int v12; // r10d
  float v13; // xmm1_4
  int *v14; // rdx
  int v15; // esi
  unsigned int v16; // esi
  int v17; // r11d
  __int64 v18; // r10
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rsi
  _DWORD *v23; // r8
  int v24; // ecx
  _DWORD *v25; // r8
  int v26; // ecx
  const struct CExpressionValue *v27; // rdx
  float *v28; // rdi
  void (__fastcall *v29)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rdx
  unsigned int v30; // r14d
  int v31; // esi
  __int128 v32; // xmm9
  double v33; // xmm12_8
  __int128 v34; // xmm6
  double v35; // xmm10_8
  double v36; // xmm13_8
  double v37; // xmm11_8
  __int128 v38; // xmm1
  double v39; // xmm0_8
  __int64 v40; // rdx
  int v41; // eax
  int v42; // ecx
  __int128 v43; // xmm1
  CPathData *v44; // rdi
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  CPathData *v47; // rcx
  void (*v48)(void); // rax
  int SampledStartingValue; // eax
  int v50; // r14d
  int v51; // r15d
  unsigned int v52; // eax
  CPathData *v53; // rcx
  void (*v54)(void); // rax
  CPathData *v55; // rcx
  void (*v56)(void); // rax
  CPathData *v57; // rcx
  void (*v58)(void); // rax
  int v59; // ecx
  int v60; // ecx
  int v61; // eax
  __int64 v62; // rdx
  unsigned int v63; // eax
  unsigned __int64 v64; // r8
  __int64 v65; // r13
  __int64 v66; // rdx
  unsigned int v67; // eax
  unsigned __int64 v68; // r8
  CBaseExpression *v69; // r15
  int v70; // r12d
  int v71; // r14d
  int v72; // eax
  unsigned int v73; // eax
  int v74; // eax
  unsigned int v75; // eax
  unsigned int v76; // eax
  bool v77[8]; // [rsp+48h] [rbp-C0h] BYREF
  double v78; // [rsp+50h] [rbp-B8h] BYREF
  double v79; // [rsp+58h] [rbp-B0h] BYREF
  double v80; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v81; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v82; // [rsp+78h] [rbp-90h]
  __int128 v83; // [rsp+88h] [rbp-80h]
  __int128 v84; // [rsp+98h] [rbp-70h]
  CPathData *v85; // [rsp+A8h] [rbp-60h]
  int v86; // [rsp+B0h] [rbp-58h]
  _OWORD v87[4]; // [rsp+B8h] [rbp-50h] BYREF
  CPathData *v88; // [rsp+F8h] [rbp-10h]
  int v89; // [rsp+100h] [rbp-8h]
  _OWORD v90[4]; // [rsp+108h] [rbp+0h] BYREF
  CPathData *v91; // [rsp+148h] [rbp+40h]
  int v92; // [rsp+150h] [rbp+48h]
  void *retaddr; // [rsp+220h] [rbp+118h]

  if ( *((_DWORD *)this + 28) < 2u )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  v4 = *((_DWORD *)this + 23);
  v5 = *((_DWORD *)this + 20);
  if ( v4 < v5 )
  {
    v6 = *((_DWORD *)this + 20);
  }
  else
  {
    v6 = v4;
    if ( v4 > *((_DWORD *)this + 21) )
      v6 = *((_DWORD *)this + 21);
  }
  v7 = *((_BYTE *)this + 140);
  if ( (v7 & 8) != 0 )
    v6 = *((_DWORD *)this + 30) - v6;
  v8 = v6 - *((_DWORD *)this + 31);
  v9 = 0.0;
  if ( *((_BYTE *)this + 96) )
  {
    v11 = v4 < v5;
    if ( v4 <= v5 )
      goto LABEL_15;
    if ( v4 > *((_DWORD *)this + 21) )
    {
LABEL_16:
      v12 = v4;
      if ( v4 > *((_DWORD *)this + 21) )
        v12 = *((_DWORD *)this + 21);
      goto LABEL_18;
    }
  }
  else
  {
    if ( v4 < v5 )
      goto LABEL_82;
    if ( v4 >= *((_DWORD *)this + 21) )
      goto LABEL_16;
  }
  if ( v8 >= 0 && v8 <= *((_DWORD *)this + 32) && (v7 & 0x20) == 0 )
  {
    v10 = *((_DWORD *)this + 29);
    goto LABEL_30;
  }
  v11 = v4 < v5;
LABEL_15:
  if ( !v11 )
    goto LABEL_16;
LABEL_82:
  v12 = *((_DWORD *)this + 20);
LABEL_18:
  v13 = (float)*((int *)this + 22);
  if ( (float)((float)v12 / v13) == 0.0 )
  {
    if ( (*((_BYTE *)this + 140) & 8) != 0 )
    {
      v74 = *((_DWORD *)this + 30);
      v10 = *((_DWORD *)this + 28) - 1;
      *((_DWORD *)this + 29) = v10;
      *((_DWORD *)this + 31) = v74;
    }
    else
    {
      v10 = 0;
      *((_DWORD *)this + 29) = 0;
      *((_DWORD *)this + 31) = 0;
    }
    *((_DWORD *)this + 32) = 0;
  }
  else
  {
    if ( v4 >= v5 )
    {
      v5 = v4;
      if ( v4 > *((_DWORD *)this + 21) )
        v5 = *((_DWORD *)this + 21);
    }
    if ( (float)((float)v5 / v13) == 1.0 )
    {
      if ( (*((_BYTE *)this + 140) & 8) != 0 )
      {
        v10 = 0;
        *((_DWORD *)this + 29) = 0;
        *((_DWORD *)this + 31) = 0;
      }
      else
      {
        v61 = *((_DWORD *)this + 30);
        v10 = *((_DWORD *)this + 28) - 1;
        *((_DWORD *)this + 29) = v10;
        *((_DWORD *)this + 31) = v61;
      }
      *((_DWORD *)this + 32) = 0;
    }
    else
    {
      v14 = (int *)*((_QWORD *)this + 13);
      v10 = 0;
      v15 = *((_DWORD *)this + 28);
      *((_DWORD *)this + 29) = 0;
      v16 = v15 - 1;
      *(_QWORD *)((char *)this + 124) = 0LL;
      v17 = *v14;
      while ( v10 < v16 )
      {
        v18 = v10 + 1;
        if ( v14[6 * v18] > v17 + v6 )
        {
          *((_DWORD *)this + 29) = v10;
          *((_DWORD *)this + 31) = v14[6 * v10] - v17;
          *((_DWORD *)this + 32) = v14[6 * v18] - v14[6 * v10];
          goto LABEL_28;
        }
        ++v10;
      }
      v10 = 0;
LABEL_28:
      v8 = v6 - *((_DWORD *)this + 31);
    }
  }
  *((_BYTE *)this + 140) &= ~0x20u;
LABEL_30:
  v19 = *((_DWORD *)this + 32);
  v91 = 0LL;
  v92 = 0;
  v88 = 0LL;
  v89 = 0;
  v85 = 0LL;
  v86 = 0;
  memset(v90, 0, sizeof(v90));
  memset(v87, 0, sizeof(v87));
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  if ( v19 <= 0 )
  {
    v10 = *((_DWORD *)this + 29);
    if ( v10 )
      v9 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  }
  else
  {
    v9 = (float)v8 / (float)v19;
  }
  v20 = *((_QWORD *)this + 13);
  v21 = v20 + 24LL * v10;
  if ( v10 >= *((_DWORD *)this + 28) - 1 )
  {
    v22 = v20 + 24LL * (v10 - 1);
  }
  else
  {
    v22 = v20 + 24LL * v10;
    v21 = v20 + 24LL * (v10 + 1);
  }
  v23 = *(_DWORD **)(v22 + 8);
  v24 = v23[5];
  if ( v24 == 1 )
  {
    CExpressionValue::CopyFrom((CExpressionValue *)v90, (const struct CExpressionValue *)(v23 + 6));
    goto LABEL_36;
  }
  v59 = v24 - 2;
  if ( !v59 )
  {
    v62 = *((_QWORD *)v23 + 3);
    v63 = v23[8];
    if ( v63 >= *(_DWORD *)(v62 + 384) )
    {
      v50 = -2147467259;
      v75 = 1745;
      v51 = -2147467259;
    }
    else
    {
      v64 = *(_QWORD *)(v62 + 176);
      v65 = *(_QWORD *)(*(_QWORD *)(v62 + 360) + 8LL * v63);
      v77[0] = 0;
      v51 = CBaseExpression::CalculateValue((CBaseExpression *)v65, a2, v64, v77);
      v50 = v51;
      if ( v51 >= 0 )
      {
        CExpressionValue::CopyFrom((CExpressionValue *)v90, (const struct CExpressionValue *)(v65 + 80));
        goto LABEL_36;
      }
      v75 = 1752;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, v75, 0LL);
    v52 = 74;
    goto LABEL_58;
  }
  if ( v59 != 1 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  SampledStartingValue = CKeyframeAnimation::GetSampledStartingValue(
                           *((CKeyframeAnimation **)v23 + 3),
                           (struct CExpressionValue *)v90);
  v50 = SampledStartingValue;
  if ( SampledStartingValue < 0 )
  {
    v51 = SampledStartingValue;
    v52 = 80;
LABEL_58:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, v52, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x1CDu, 0LL);
    goto LABEL_59;
  }
LABEL_36:
  v25 = *(_DWORD **)(v21 + 8);
  v26 = v25[5];
  if ( v26 == 1 )
  {
    v27 = (const struct CExpressionValue *)(v25 + 6);
LABEL_38:
    CExpressionValue::CopyFrom((CExpressionValue *)v87, v27);
    goto LABEL_39;
  }
  v60 = v26 - 2;
  if ( !v60 )
  {
    v66 = *((_QWORD *)v25 + 3);
    v67 = v25[8];
    if ( v67 >= *(_DWORD *)(v66 + 384) )
    {
      v71 = -2147467259;
      v76 = 1745;
      v70 = -2147467259;
    }
    else
    {
      v68 = *(_QWORD *)(v66 + 176);
      v69 = *(CBaseExpression **)(*(_QWORD *)(v66 + 360) + 8LL * v67);
      v77[0] = 0;
      v70 = CBaseExpression::CalculateValue(v69, a2, v68, v77);
      v71 = v70;
      if ( v70 >= 0 )
      {
        v27 = (CBaseExpression *)((char *)v69 + 80);
        goto LABEL_38;
      }
      v76 = 1752;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v71, v76, 0LL);
    v73 = 74;
LABEL_94:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, v73, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v71, 0x1CEu, 0LL);
    goto LABEL_59;
  }
  if ( v60 != 1 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  v72 = CKeyframeAnimation::GetSampledStartingValue(*((CKeyframeAnimation **)v25 + 3), (struct CExpressionValue *)v87);
  v71 = v72;
  if ( v72 < 0 )
  {
    v70 = v72;
    v73 = 80;
    goto LABEL_94;
  }
LABEL_39:
  v28 = *(float **)(v21 + 16);
  v29 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v28 + 32LL);
  v30 = *(_DWORD *)(*(_QWORD *)(v22 + 8) + 16LL);
  if ( (char *)v29 == (char *)&CubicBezierInterpolation::Compute )
  {
    v31 = 0;
    v32 = 0LL;
    *(double *)&v32 = v9;
    v33 = v28[6];
    v34 = v32;
    v35 = v28[7];
    v36 = v28[8];
    v37 = v28[9];
    do
    {
      v79 = 0.0;
      v78 = 0.0;
      CubicBezierInterpolation::EvaluateCurveAndDerivative(
        (CubicBezierInterpolation *)v28,
        *(double *)&v34,
        v33,
        v36,
        &v79,
        &v78);
      if ( IsCloseRealZero(v78, 0.0000011920929) )
        break;
      *((_QWORD *)&v38 + 1) = *((_QWORD *)&v34 + 1);
      *(double *)&v38 = *(double *)&v34 - (v79 - *(double *)&v32) / v78;
      v39 = *(double *)&v34 - *(double *)&v38;
      v34 = v38;
      *(float *)&v39 = v39;
      if ( IsCloseRealZero(*(float *)&v39, 0.0000011920929) )
        break;
      ++v31;
    }
    while ( v31 < 30 );
    v80 = 0.0;
    CubicBezierInterpolation::EvaluateCurveAndDerivative(
      (CubicBezierInterpolation *)v28,
      *(double *)&v34,
      v35,
      v37,
      &v80,
      0LL);
    KeyframeInterpolation::Interpolate(v28, v40, v30, v90, v87, &v81);
  }
  else
  {
    v29(v28, v29, v30, v90, v87, &v81);
  }
  v41 = *((_DWORD *)this + 23);
  v42 = *((_DWORD *)this + 20);
  if ( *((_BYTE *)this + 96) )
  {
    if ( v41 > v42 && v41 <= *((_DWORD *)this + 21) )
      goto LABEL_49;
  }
  else if ( v41 >= v42 && v41 < *((_DWORD *)this + 21) )
  {
    goto LABEL_49;
  }
  *((_BYTE *)this + 140) &= ~2u;
LABEL_49:
  v43 = v82;
  v44 = v85;
  *(_OWORD *)this = v81;
  v45 = v83;
  *((_OWORD *)this + 1) = v43;
  v46 = v84;
  *((_OWORD *)this + 2) = v45;
  *((_OWORD *)this + 3) = v46;
  if ( *((CPathData **)this + 8) != v44 )
  {
    if ( v44 )
      (*(void (__fastcall **)(CPathData *))(*(_QWORD *)v44 + 8LL))(v44);
    v47 = (CPathData *)*((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = v44;
    if ( v47 )
    {
      v48 = *(void (**)(void))(*(_QWORD *)v47 + 16LL);
      if ( (char *)v48 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
        CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v47);
      else
        v48();
    }
  }
  *((_DWORD *)this + 18) = v86;
LABEL_59:
  v53 = v85;
  if ( v85 )
  {
    v85 = 0LL;
    v54 = *(void (**)(void))(*(_QWORD *)v53 + 16LL);
    if ( (char *)v54 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v53);
    else
      v54();
  }
  v55 = v88;
  if ( v88 )
  {
    v88 = 0LL;
    v56 = *(void (**)(void))(*(_QWORD *)v55 + 16LL);
    if ( (char *)v56 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v55);
    else
      v56();
  }
  v57 = v91;
  if ( v91 )
  {
    v91 = 0LL;
    v58 = *(void (**)(void))(*(_QWORD *)v57 + 16LL);
    if ( (char *)v58 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v57);
    else
      v58();
  }
}
