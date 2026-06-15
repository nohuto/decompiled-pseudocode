/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x140035740
 * Callers:
 *     _CAudioProcessor::DeactivateAPO_::_1_::dtor$1 @ 0x1400917EF (_CAudioProcessor--DeactivateAPO_--_1_--dtor$1.c)
 *     _CAudioProcessor::CancelGraphChanges_::_1_::dtor$0 @ 0x1400918C3 (_CAudioProcessor--CancelGraphChanges_--_1_--dtor$0.c)
 *     _CAudioProcessor::CommitGraphChanges_::_1_::dtor$1 @ 0x140091A67 (_CAudioProcessor--CommitGraphChanges_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectCache::CreateConnection_::_1_::dtor$0 @ 0x140091DE7 (_CDeviceGraphObjectCache--CreateConnection_--_1_--dtor$0.c)
 *     __lambda_4f5bca04da2ba347195d47ea7d1a4d66_::operator()_::_1_::dtor$6 @ 0x140091EBA (__lambda_4f5bca04da2ba347195d47ea7d1a4d66_--operator()_--_1_--dtor$6.c)
 *     _CAudioProcessor::ActivateAPO_::_1_::dtor$1 @ 0x140093574 (_CAudioProcessor--ActivateAPO_--_1_--dtor$1.c)
 *     _CSpatialCrossProcessBaseEndpoint::CheckResourceLimits_::_1_::dtor$0 @ 0x140093D1A (_CSpatialCrossProcessBaseEndpoint--CheckResourceLimits_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *this = 0LL;
  }
}
