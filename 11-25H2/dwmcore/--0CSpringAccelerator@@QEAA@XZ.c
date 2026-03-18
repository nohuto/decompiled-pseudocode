/*
 * XREFs of ??0CSpringAccelerator@@QEAA@XZ @ 0x1800F10D8
 * Callers:
 *     ??0CMotion@@QEAA@XZ @ 0x1800F0D24 (--0CMotion@@QEAA@XZ.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1800F22B0 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180042D70 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 */

CSpringAccelerator *__fastcall CSpringAccelerator::CSpringAccelerator(CSpringAccelerator *this)
{
  CSpringAccelerator *v1; // rcx
  CSpringAccelerator *result; // rax

  CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)this);
  result = v1;
  *(_QWORD *)v1 = &CSpringAccelerator::`vftable';
  return result;
}
