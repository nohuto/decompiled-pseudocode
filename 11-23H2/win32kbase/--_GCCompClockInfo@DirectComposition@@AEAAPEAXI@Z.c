/*
 * XREFs of ??_GCCompClockInfo@DirectComposition@@AEAAPEAXI@Z @ 0x1C02092B0
 * Callers:
 *     ?Release@CCompClockInfo@DirectComposition@@QEAAJXZ @ 0x1C0008CE0 (-Release@CCompClockInfo@DirectComposition@@QEAAJXZ.c)
 *     ?Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z @ 0x1C0008F5C (-Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1CCompClockInfo@DirectComposition@@AEAA@XZ @ 0x1C0209284 (--1CCompClockInfo@DirectComposition@@AEAA@XZ.c)
 */

DirectComposition::CCompClockInfo *__fastcall DirectComposition::CCompClockInfo::`scalar deleting destructor'(
        DirectComposition::CCompClockInfo *this)
{
  DirectComposition::CCompClockInfo::~CCompClockInfo(this);
  if ( this )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)this);
  return this;
}
