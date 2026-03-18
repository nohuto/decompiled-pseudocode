/*
 * XREFs of ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801EBA88
 * Callers:
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAJXZ @ 0x1801EB994 (-SelectInertiaModifier@CScrollAnimation@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800E4868 (-IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?GetVelocity@CScrollAnimation@@QEBAMXZ @ 0x1800E5410 (-GetVelocity@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1800E62CC (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18018ED9C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z @ 0x1801E0CD8 (--0CScalarForce@@QEAA@PEAUIAccelerator@@@Z.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x1801EB514 (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ?Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z @ 0x18021FA4C (-Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z.c)
 *     ?GetInitialValue@CScrollAnimation@@QEBAMXZ @ 0x1802298AC (-GetInitialValue@CScrollAnimation@@QEBAMXZ.c)
 *     ?GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z @ 0x18022BB04 (-GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z.c)
 *     ?GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z @ 0x180298E4C (-GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x18029FF40 (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 *     ??0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1802AF85C (--0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTracker::SelectInertiaModifierForAxis(
        __int64 a1,
        unsigned int a2,
        struct CExpressionValueStack *a3,
        unsigned __int64 a4,
        struct CBaseExpression **a5)
{
  struct CBaseExpression *v5; // rsi
  __int64 v6; // rbx
  struct CExpressionValueStack *v8; // r14
  struct CBaseExpression *v9; // rdi
  unsigned __int64 v10; // r11
  CConditionalExpression *v11; // r15
  int v12; // r12d
  __int64 v13; // rax
  int IsAnyConditionSatisfied; // eax
  unsigned int v15; // r14d
  int v16; // ebx
  unsigned int v17; // r14d
  int v18; // ebx
  int v19; // ebx
  struct CBaseExpression *v20; // rbx
  CScrollAnimation *v21; // rdi
  int ForceForAxis; // eax
  int v23; // eax
  LPVOID v25; // rax
  CScrollAnimation *v26; // rbx
  LPVOID v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  struct IAccelerator *v31; // rax
  struct IAccelerator *v32; // r14
  int v33; // xmm1_4
  int v34; // xmm0_4
  __int64 v35; // rax
  CScalarForce *v36; // rax
  CScalarForce *v37; // rax
  CScrollAnimation *v38; // rbx
  __int64 v39; // rax
  unsigned int v40; // [rsp+20h] [rbp-48h]
  struct CBaseExpression *v41; // [rsp+30h] [rbp-38h] BYREF
  CScrollAnimation *v42; // [rsp+38h] [rbp-30h] BYREF
  struct CBaseExpression *v43; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v44; // [rsp+B8h] [rbp+50h]
  struct CExpressionValueStack *v45; // [rsp+C0h] [rbp+58h]
  unsigned __int64 v46; // [rsp+C8h] [rbp+60h]

  v46 = a4;
  v45 = a3;
  v44 = a2;
  v5 = 0LL;
  v6 = (int)a2;
  v41 = 0LL;
  v42 = 0LL;
  v8 = a3;
  v9 = 0LL;
  if ( !InteractionSourceManager::IsInertiaEnabledForAxis((InteractionSourceManager *)(a1 + 208)) )
    goto LABEL_28;
  v11 = *(CConditionalExpression **)(a1 + 8 * v6 + 384);
  v12 = 0;
  v13 = v6;
  if ( v11 )
  {
    *((_DWORD *)v11 + 91) = *((_DWORD *)v11 + 81);
    LOBYTE(v43) = 0;
    IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(v11, v8, v10, (bool *)&v43);
    v15 = IsAnyConditionSatisfied;
    if ( IsAnyConditionSatisfied < 0 )
    {
      v40 = 3728;
      goto LABEL_46;
    }
    v13 = v6;
    v10 = v46;
    v8 = v45;
    v12 = (_BYTE)v43 != 0;
  }
  if ( (unsigned int)v6 > 1 )
  {
    if ( !v12 )
      goto LABEL_28;
    goto LABEL_14;
  }
  if ( v12 )
  {
LABEL_14:
    v16 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v13 + 416) + 4LL * *((int *)v11 + 91));
    goto LABEL_15;
  }
  v11 = *(CConditionalExpression **)(a1 + 408);
  if ( !v11 )
    goto LABEL_28;
  *((_DWORD *)v11 + 91) = *((_DWORD *)v11 + 81);
  LOBYTE(v43) = 0;
  IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(v11, v8, v10, (bool *)&v43);
  v15 = IsAnyConditionSatisfied;
  if ( IsAnyConditionSatisfied < 0 )
  {
    v40 = 3751;
    goto LABEL_46;
  }
  if ( !(_BYTE)v43 )
    goto LABEL_28;
  v16 = 3;
  v12 = 2;
LABEL_15:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v42);
  v17 = v44;
  CInteractionTracker::GetAnimationForAxis(a1, v44, &v42);
  v18 = v16 - 1;
  if ( !v18 )
  {
    LODWORD(v43) = 0;
    IsAnyConditionSatisfied = CConditionalExpression::GetValue(v11, v45, v46, (float *)&v43);
    v15 = IsAnyConditionSatisfied;
    if ( IsAnyConditionSatisfied >= 0 )
    {
      v31 = (struct IAccelerator *)operator new(0x28uLL);
      v32 = v31;
      if ( !v31 )
      {
        v15 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xECEu, 0LL);
        goto LABEL_29;
      }
      *((_DWORD *)v31 + 2) = 0;
      *(_QWORD *)v31 = &CSpringAccelerator::`vftable';
      ((void (__fastcall *)(struct IAccelerator *))CSpringAccelerator::`vftable')(v31);
      v33 = *(_DWORD *)(a1 + 560);
      v34 = *(_DWORD *)(a1 + 556);
      *((_DWORD *)v32 + 4) = *(_DWORD *)(a1 + 544);
      v35 = *(_QWORD *)v32;
      *((_DWORD *)v32 + 6) = v33;
      *((_DWORD *)v32 + 5) = v34;
      (*(void (__fastcall **)(struct IAccelerator *))(v35 + 32))(v32);
      v36 = (CScalarForce *)operator new(0x70uLL);
      if ( v36 )
      {
        v37 = CScalarForce::CScalarForce(v36, v32);
        v9 = v37;
        if ( v37 )
          (**(void (__fastcall ***)(CScalarForce *))v37)(v37);
      }
      v38 = v42;
      CScrollAnimation::GetVelocity(v42);
      CScrollAnimation::GetInitialValue(v38);
      CScalarForce::Initialize(v9, v44 == 2);
      v39 = (*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)v38 + 312LL))(v38);
      v43 = v9;
      *(_DWORD *)(v39 + 32) = 1114636288;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v43);
      v43 = 0LL;
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v43);
      if ( v9 )
        (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v9 + 8LL))(v9);
      (*(void (__fastcall **)(struct IAccelerator *))(*(_QWORD *)v32 + 8LL))(v32);
      goto LABEL_28;
    }
    v40 = 3784;
LABEL_46:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, IsAnyConditionSatisfied, v40, 0LL);
    goto LABEL_29;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v25 = operator new(0x90uLL);
    v26 = v42;
    v27 = v25;
    if ( !v25
      || (CScrollAnimation::GetVelocity(v42),
          CScrollAnimation::GetInitialValue(v26),
          v30 = CExpressionForce::CExpressionForce(v27, v28, v29, v11, v17),
          v9 = (struct CBaseExpression *)(v30 + 16),
          !v30) )
    {
      v9 = 0LL;
    }
    v43 = v9;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v43);
    v43 = 0LL;
    v41 = v9;
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v43);
    *(_DWORD *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)v26 + 312LL))(v26) + 32) = 1101004800;
    if ( !v9 )
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xEF1u, 0LL);
      goto LABEL_29;
    }
    goto LABEL_28;
  }
  if ( v19 == 1 )
  {
    v43 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v43);
    CConditionalExpression::GetSampledConditionAnimation(v11, &v43);
    v20 = v43;
    if ( v43
      && (*(unsigned __int8 (__fastcall **)(struct CBaseExpression *, __int64))(*(_QWORD *)v43 + 64LL))(v43, 112LL) )
    {
      (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v20 + 8LL))(v20);
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v41);
      v21 = v42;
      CScrollAnimation::GetVelocity(v42);
      CScrollAnimation::GetInitialValue(v21);
      if ( v12 == 1 )
      {
        ForceForAxis = CNaturalAnimation::GetForceForAxis(v20, 0LL);
        v15 = ForceForAxis;
        if ( ForceForAxis < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ForceForAxis, 0xF09u, 0LL);
LABEL_24:
          (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v20 + 16LL))(v20);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v43);
          goto LABEL_29;
        }
      }
      else
      {
        v23 = CNaturalAnimation::GetForceForAxis(v20, v17);
        v15 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0xF12u, 0LL);
          goto LABEL_24;
        }
      }
      *(_DWORD *)((*(__int64 (__fastcall **)(CScrollAnimation *))(*(_QWORD *)v21 + 312LL))(v21) + 32) = 1114636288;
      (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v20 + 16LL))(v20);
      v9 = v41;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v43);
LABEL_28:
    v41 = 0LL;
    v15 = 0;
    v5 = v9;
    goto LABEL_29;
  }
  v15 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467259, 0xF1Eu, 0LL);
LABEL_29:
  *a5 = v5;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v42);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v41);
  return v15;
}
