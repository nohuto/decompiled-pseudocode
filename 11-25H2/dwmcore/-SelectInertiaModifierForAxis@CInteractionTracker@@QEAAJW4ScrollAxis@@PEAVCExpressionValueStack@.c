/*
 * XREFs of ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1800F22B0
 * Callers:
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAJXZ @ 0x1800F1FBC (-SelectInertiaModifier@CScrollAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z @ 0x1800F0E04 (-Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z.c)
 *     ??0CSpringAccelerator@@QEAA@XZ @ 0x1800F10D8 (--0CSpringAccelerator@@QEAA@XZ.c)
 *     ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z @ 0x1800F10FC (--0CScalarForce@@QEAA@PEAUIAccelerator@@@Z.c)
 *     ?GetInitialValue@CScrollAnimation@@QEBAMXZ @ 0x1800F1170 (-GetInitialValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z @ 0x1800F1338 (-GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x1800F27E0 (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800F33E8 (-IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x1800F41E8 (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1800F4630 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z @ 0x1802A2ECC (-GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z.c)
 *     ??$?4VCExpressionForce@@@?$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpressionForce@@@Z @ 0x1802A6E40 (--$-4VCExpressionForce@@@-$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpressionForc.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x1802A9D10 (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 *     ??0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1802B944C (--0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker::SelectInertiaModifierForAxis(
        __int64 a1,
        unsigned int a2,
        struct CExpressionValueStack *a3,
        unsigned __int64 a4,
        __int64 *a5)
{
  __int64 v5; // r13
  __int64 v7; // rbx
  CScrollAnimation *v8; // rdi
  struct CExpressionValueStack *v9; // rsi
  unsigned __int64 v10; // r11
  CConditionalExpression *v11; // r14
  int v12; // r12d
  __int64 v13; // rax
  int IsAnyConditionSatisfied; // eax
  unsigned int v15; // esi
  int v16; // edi
  int v17; // r9d
  int v18; // edi
  int v19; // edi
  struct CBaseExpression *v20; // rbx
  int ForceForAxis; // eax
  int v22; // eax
  __int64 v23; // rax
  LPVOID v25; // rax
  LPVOID v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  int Value; // eax
  CSpringAccelerator *v31; // rax
  CSpringAccelerator *v32; // rax
  CSpringAccelerator *v33; // r14
  int v34; // ecx
  int v35; // xmm0_4
  __int64 v36; // rax
  void (__fastcall *v37)(CSpringAccelerator *); // rax
  CScalarForce *v38; // rax
  CScalarForce *v39; // rax
  __int64 v40; // rsi
  float Velocity; // xmm6_4
  float InitialValue; // xmm0_4
  unsigned int v43; // [rsp+20h] [rbp-40h]
  __int64 v44; // [rsp+30h] [rbp-30h] BYREF
  CScrollAnimation *v45; // [rsp+38h] [rbp-28h] BYREF
  struct CBaseExpression *v46; // [rsp+A0h] [rbp+40h] BYREF
  struct CExpressionValueStack *v47; // [rsp+B0h] [rbp+50h]
  unsigned __int64 v48; // [rsp+B8h] [rbp+58h]

  v48 = a4;
  v47 = a3;
  v5 = (int)a2;
  v7 = 0LL;
  v8 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v9 = a3;
  if ( !(unsigned __int8)InteractionSourceManager::IsInertiaEnabledForAxis(a1 + 208, a2) )
    goto LABEL_32;
  v11 = *(CConditionalExpression **)(a1 + 8 * v5 + 384);
  v12 = 0;
  v13 = v5;
  if ( v11 )
  {
    *((_DWORD *)v11 + 91) = *((_DWORD *)v11 + 81);
    LOBYTE(v46) = 0;
    IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(v11, v9, v10, (bool *)&v46);
    v15 = IsAnyConditionSatisfied;
    if ( IsAnyConditionSatisfied < 0 )
    {
      v43 = 3728;
      goto LABEL_12;
    }
    v13 = v5;
    v10 = v48;
    v9 = v47;
    v12 = (_BYTE)v46 != 0;
  }
  if ( (unsigned int)v5 > 1 )
  {
    if ( !v12 )
      goto LABEL_32;
  }
  else if ( !v12 )
  {
    v11 = *(CConditionalExpression **)(a1 + 408);
    if ( !v11 )
      goto LABEL_32;
    *((_DWORD *)v11 + 91) = *((_DWORD *)v11 + 81);
    LOBYTE(v46) = 0;
    IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(v11, v9, v10, (bool *)&v46);
    v15 = IsAnyConditionSatisfied;
    if ( IsAnyConditionSatisfied >= 0 )
    {
      if ( !(_BYTE)v46 )
        goto LABEL_32;
      v16 = 3;
      v12 = 2;
      goto LABEL_16;
    }
    v43 = 3751;
LABEL_12:
    v17 = IsAnyConditionSatisfied;
    goto LABEL_43;
  }
  v16 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v13 + 416) + 4LL * *((int *)v11 + 91));
LABEL_16:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v45);
  CInteractionTracker::GetAnimationForAxis(a1, v5, (__int64 *)&v45);
  v18 = v16 - 1;
  if ( !v18 )
  {
    LODWORD(v46) = 0;
    Value = CConditionalExpression::GetValue(v11, v47, v48, (float *)&v46);
    v15 = Value;
    if ( Value < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Value, 0xEC8u, 0LL);
      goto LABEL_57;
    }
    v31 = (CSpringAccelerator *)operator new(0x28uLL);
    if ( !v31 || (v32 = CSpringAccelerator::CSpringAccelerator(v31), (v33 = v32) == 0LL) )
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xECEu, 0LL);
      goto LABEL_57;
    }
    (**(void (__fastcall ***)(CSpringAccelerator *))v32)(v32);
    v34 = *(_DWORD *)(a1 + 544);
    v35 = *(_DWORD *)(a1 + 556);
    v36 = *(_QWORD *)v33;
    *((_DWORD *)v33 + 6) = *(_DWORD *)(a1 + 560);
    *((_DWORD *)v33 + 4) = v34;
    v37 = *(void (__fastcall **)(CSpringAccelerator *))(v36 + 32);
    *((_DWORD *)v33 + 5) = v35;
    v37(v33);
    v38 = (CScalarForce *)operator new(0x70uLL);
    if ( v38 )
    {
      v39 = CScalarForce::CScalarForce(v38, v33);
      v7 = (__int64)v39;
      v40 = (__int64)v39;
      if ( v39 )
        (**(void (__fastcall ***)(CScalarForce *))v39)(v39);
    }
    else
    {
      v40 = 0LL;
    }
    v8 = v45;
    Velocity = CScrollAnimation::GetVelocity(v45);
    InitialValue = CScrollAnimation::GetInitialValue(v8);
    CScalarForce::Initialize(v40, v5 == 2, InitialValue, Velocity, 0);
    *(_DWORD *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)v8 + 312LL))(v8) + 32) = 1114636288;
    if ( v40 )
    {
      (**(void (__fastcall ***)(__int64))v40)(v40);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 8LL))(v40);
    }
    else
    {
      v7 = 0LL;
    }
    (*(void (__fastcall **)(CSpringAccelerator *))(*(_QWORD *)v33 + 8LL))(v33);
    goto LABEL_32;
  }
  v19 = v18 - 1;
  if ( v19 )
  {
    if ( v19 != 1 )
    {
      v15 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0xF17u, 0LL);
LABEL_57:
      v8 = v45;
      goto LABEL_58;
    }
    v46 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v46);
    CConditionalExpression::GetSampledConditionAnimation(v11, &v46);
    v20 = v46;
    if ( v46 )
      (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v46 + 8LL))(v46);
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v44);
    v8 = v45;
    CScrollAnimation::GetVelocity(v45);
    CScrollAnimation::GetInitialValue(v8);
    if ( v12 == 1 )
    {
      ForceForAxis = CNaturalAnimation::GetForceForAxis(v20, 0LL);
      v15 = ForceForAxis;
      if ( ForceForAxis < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ForceForAxis, 0xF03u, 0LL);
LABEL_25:
        if ( v20 )
          (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v20 + 16LL))(v20);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v46);
        v7 = v44;
        goto LABEL_58;
      }
    }
    else
    {
      v22 = CNaturalAnimation::GetForceForAxis(v20, (unsigned int)v5);
      v15 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0xF0Cu, 0LL);
        goto LABEL_25;
      }
    }
    *(_DWORD *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)v8 + 312LL))(v8) + 32) = 1114636288;
    if ( v20 )
      (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v20 + 16LL))(v20);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v46);
    v7 = v44;
LABEL_32:
    v23 = v7;
    v7 = 0LL;
    v15 = 0;
    goto LABEL_33;
  }
  v25 = operator new(0x90uLL);
  v8 = v45;
  v26 = v25;
  if ( v25 )
  {
    CScrollAnimation::GetVelocity(v45);
    CScrollAnimation::GetInitialValue(v8);
    v25 = (LPVOID)CExpressionForce::CExpressionForce(v26, v27, v28, v11, v5);
  }
  Microsoft::WRL::ComPtr<IScalarForce>::operator=<CExpressionForce>(&v44, v25);
  v29 = (*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)v8 + 312LL))(v8);
  v7 = v44;
  *(_DWORD *)(v29 + 32) = 1101004800;
  if ( v7 )
    goto LABEL_32;
  v17 = -2147024882;
  v15 = -2147024882;
  v43 = 3825;
LABEL_43:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, v43, 0LL);
LABEL_58:
  v23 = 0LL;
LABEL_33:
  *a5 = v23;
  if ( v8 )
    (*(void (__fastcall **)(CScrollAnimation *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  return v15;
}
