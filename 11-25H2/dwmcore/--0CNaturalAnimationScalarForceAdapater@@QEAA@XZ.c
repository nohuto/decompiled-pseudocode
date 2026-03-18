/*
 * XREFs of ??0CNaturalAnimationScalarForceAdapater@@QEAA@XZ @ 0x1802A9A84
 * Callers:
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x1802A9D10 (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180042D70 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 */

CNaturalAnimationScalarForceAdapater *__fastcall CNaturalAnimationScalarForceAdapater::CNaturalAnimationScalarForceAdapater(
        CNaturalAnimationScalarForceAdapater *this)
{
  CNaturalAnimationScalarForceAdapater *v1; // rcx
  CNaturalAnimationScalarForceAdapater *result; // rax

  CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)this);
  result = v1;
  *(_QWORD *)v1 = &CNaturalAnimationScalarForceAdapater::`vftable';
  return result;
}
