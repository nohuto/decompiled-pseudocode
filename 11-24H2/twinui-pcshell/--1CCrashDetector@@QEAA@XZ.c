/*
 * XREFs of ??1CCrashDetector@@QEAA@XZ @ 0x1801B5794
 * Callers:
 *     ??1CApplicationFrameService@@UEAA@XZ @ 0x1802FF034 (--1CApplicationFrameService@@UEAA@XZ.c)
 *     ??1?$unique_ptr@VCCrashDetector@@U?$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ @ 0x180432F84 (--1-$unique_ptr@VCCrashDetector@@U-$default_delete@VCCrashDetector@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801B59F8 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?StopMonitoring@CCrashDetector@@QEAAXXZ @ 0x180236478 (-StopMonitoring@CCrashDetector@@QEAAXXZ.c)
 */

void __fastcall CCrashDetector::~CCrashDetector(CCrashDetector *this)
{
  if ( *((_QWORD *)this + 2) )
    CCrashDetector::StopMonitoring(this);
  CAutoHandle<void *>::~CAutoHandle<void *>((char *)this + 8);
  wistd::unique_ptr<ISearchAppActivator,wistd::default_delete<ISearchAppActivator>>::~unique_ptr<ISearchAppActivator,wistd::default_delete<ISearchAppActivator>>(this);
}
