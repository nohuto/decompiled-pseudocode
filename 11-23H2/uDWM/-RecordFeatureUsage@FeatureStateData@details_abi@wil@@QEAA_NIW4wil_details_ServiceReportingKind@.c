/*
 * XREFs of ?RecordFeatureUsage@FeatureStateData@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@@_K@Z @ 0x1800026C0
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x1800025C4 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 * Callees:
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x1800023A8 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordFeatureUsage@UsageIndexes@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18005E85C (-RecordFeatureUsage@UsageIndexes@details_abi@wil@@QEAA_NIW4wil_details_ServiceReportingKind@@_K@.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::details_abi::FeatureStateData::RecordFeatureUsage(
        RTL_SRWLOCK *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  char v9; // bl

  if ( a3 == 254 )
  {
    wil::details_abi::FeatureStateData::RecordUsage(a1);
    return 1;
  }
  else if ( a3 < 0xC8 || (int)a3 >= 256 && a3 < 0x200 )
  {
    AcquireSRWLockExclusive(a1);
    v9 = wil::details_abi::UsageIndexes::RecordFeatureUsage(&a1[1], a2, a3, a4, a1);
    if ( a1 )
      ReleaseSRWLockExclusive(a1);
    return v9;
  }
  else
  {
    return 0;
  }
}
