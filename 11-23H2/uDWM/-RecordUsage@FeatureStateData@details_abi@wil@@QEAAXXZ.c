/*
 * XREFs of ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1800023A8
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@@_K@Z @ 0x1800026C0 (-RecordFeatureUsage@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@.c)
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x18009B0DC (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x180002414 (--0UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z @ 0x1800030AC (-RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z.c)
 *     ??1UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x1800030FC (--1UsageIndexes@details_abi@wil@@QEAA@XZ.c)
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180003158 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::FeatureStateData::RecordUsage(RTL_SRWLOCK *this)
{
  _BYTE v2[200]; // [rsp+20h] [rbp-C8h] BYREF

  wil::details_abi::UsageIndexes::UsageIndexes((wil::details_abi::UsageIndexes *)v2);
  AcquireSRWLockExclusive(this);
  wil::details_abi::FeatureStateData::RetrieveUsageUnderLock(
    (wil::details_abi::FeatureStateData *)this,
    (struct wil::details_abi::UsageIndexes *)v2);
  if ( this )
    ReleaseSRWLockExclusive(this);
  wil::details_abi::UsageIndexes::Record((wil::details_abi::UsageIndexes *)v2);
  wil::details_abi::UsageIndexes::~UsageIndexes((wil::details_abi::UsageIndexes *)v2);
}
