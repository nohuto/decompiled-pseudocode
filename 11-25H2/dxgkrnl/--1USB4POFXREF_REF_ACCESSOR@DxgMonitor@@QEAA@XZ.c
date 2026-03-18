/*
 * XREFs of ??1USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAA@XZ @ 0x14009020C
 * Callers:
 *     ??1MonitorUsb4State@DxgMonitor@@QEAA@XZ @ 0x1402702A8 (--1MonitorUsb4State@DxgMonitor@@QEAA@XZ.c)
 * Callees:
 *     ?Release@USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAAXXZ @ 0x14009032C (-Release@USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAAXXZ.c)
 */

void __fastcall DxgMonitor::USB4POFXREF_REF_ACCESSOR::~USB4POFXREF_REF_ACCESSOR(
        DxgMonitor::USB4POFXREF_REF_ACCESSOR *this)
{
  DxgMonitor::USB4POFXREF_REF_ACCESSOR::Release(this);
}
