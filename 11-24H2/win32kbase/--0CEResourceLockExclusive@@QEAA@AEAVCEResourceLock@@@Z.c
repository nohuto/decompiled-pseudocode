/*
 * XREFs of ??0CEResourceLockExclusive@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F3990
 * Callers:
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1401289F8 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     ??1CInputConfig@@AEAA@XZ @ 0x1401F39E8 (--1CInputConfig@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

CEResourceLockExclusive *__fastcall CEResourceLockExclusive::CEResourceLockExclusive(
        CEResourceLockExclusive *this,
        PERESOURCE *a2)
{
  *(_QWORD *)this = a2;
  ExEnterCriticalRegionAndAcquireResourceExclusive(*a2);
  return this;
}
