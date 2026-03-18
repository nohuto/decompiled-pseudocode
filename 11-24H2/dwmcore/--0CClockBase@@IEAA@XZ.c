/*
 * XREFs of ??0CClockBase@@IEAA@XZ @ 0x1800EE184
 * Callers:
 *     ??0CMonitorClock@@QEAA@PEAVIMonitorTarget@@@Z @ 0x1800ED9BC (--0CMonitorClock@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ??0CDefaultClock@@QEAA@XZ @ 0x1800EE1C4 (--0CDefaultClock@@QEAA@XZ.c)
 * Callees:
 *     ??0?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180024674 (--0-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAA@XZ.c)
 */

CClockBase *__fastcall CClockBase::CClockBase(CClockBase *this)
{
  __int64 v1; // rcx

  CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>((__int64)this);
  *(_OWORD *)(v1 + 16) = 0LL;
  *(_OWORD *)(v1 + 32) = 0LL;
  *(_OWORD *)(v1 + 48) = 0LL;
  *(_QWORD *)(v1 + 64) = 0LL;
  *(_BYTE *)(v1 + 72) = 0;
  CClockBase::s_allowableTimeDriftMs = (unsigned int)CCommonRegistryData::AllowableTimeDriftMs;
  return (CClockBase *)v1;
}
