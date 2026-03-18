/*
 * XREFs of ??0CGravityBounceAccelerator@@QEAA@MM@Z @ 0x1802A9A0C
 * Callers:
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x1802375B4 (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180042D70 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 */

CGravityBounceAccelerator *__fastcall CGravityBounceAccelerator::CGravityBounceAccelerator(
        CGravityBounceAccelerator *this,
        float a2,
        float a3)
{
  __int64 v3; // rcx
  CGravityBounceAccelerator *result; // rax

  CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)this);
  *(float *)(v3 + 20) = a2;
  *(_DWORD *)(v3 + 28) = LODWORD(a3) & _xmm;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 36) = 0;
  *(_BYTE *)(v3 + 40) = 0;
  *(_QWORD *)(v3 + 44) = 0LL;
  result = (CGravityBounceAccelerator *)v3;
  *(_QWORD *)v3 = &CGravityBounceAccelerator::`vftable';
  *(float *)(v3 + 24) = COERCE_FLOAT(LODWORD(a2) & _xmm) / 0.0099999998;
  *(float *)(v3 + 32) = (float)((float)(COERCE_FLOAT(LODWORD(a3) & _xmm) + 1.0) * -1.0) / 0.0099999998;
  return result;
}
