/*
 * XREFs of ?Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z @ 0x18021FA4C
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801EBA88 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z @ 0x1802AD8E8 (-InitializeDefaultBoundaryInertiaModifier@CMotion@@IEAAXMMMM@Z.c)
 * Callees:
 *     ?Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z @ 0x18021FB00 (-Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScalarForce::Initialize(__int64 a1, int a2, float a3, float a4, int a5)
{
  float v6; // xmm6_4
  struct IAccelerator *v8; // r9

  v6 = a3;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 40LL))(*(_QWORD *)(a1 + 104)) )
    a3 = a3 - (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 24LL))(*(_QWORD *)(a1 + 104));
  *(_DWORD *)(a1 + 84) = a2;
  *(_DWORD *)(a1 + 88) = LODWORD(a3) & _xmm;
  *(_DWORD *)(a1 + 92) = LODWORD(a4) & _xmm;
  v8 = *(struct IAccelerator **)(a1 + 104);
  *(_DWORD *)(a1 + 96) = a5;
  CScalarForceEvaluator::Reset((CScalarForceEvaluator *)(a1 + 16), v6, a4, v8, (const struct ForceThreshold *)(a1 + 84));
}
