/*
 * XREFs of ??0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1802AF85C
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801EBA88 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180024674 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExpressionForce::CExpressionForce(__int64 a1, float a2, float a3, __int64 a4, int a5)
{
  __int64 v6; // r9
  __int64 result; // rax

  CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>(a1);
  *(_QWORD *)(a1 + 16) = &CExpressionForce::`vftable'{for `IScalarForce'};
  *(_QWORD *)a1 = &CExpressionForce::`vftable'{for `CMILRefCountBaseT<IAccelerator,CMilObjectDeleter>'};
  *(_QWORD *)(a1 + 96) = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  *(_DWORD *)(a1 + 104) = a5;
  result = a1;
  *(float *)(a1 + 132) = a2;
  *(float *)(a1 + 136) = a3;
  *(_BYTE *)(a1 + 128) = 0;
  return result;
}
