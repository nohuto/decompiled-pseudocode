/*
 * XREFs of ??0CSpringAccelerator@@QEAA@XZ @ 0x1801E0D28
 * Callers:
 *     ??0CMotion@@QEAA@XZ @ 0x1801E0BF8 (--0CMotion@@QEAA@XZ.c)
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180024674 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
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
