/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18006A670
 * Callers:
 *     _SpatialRimDeviceCollectionHeadEventHandler::SetOwner_::_1_::dtor$0 @ 0x1801D26D7 (_SpatialRimDeviceCollectionHeadEventHandler--SetOwner_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollectionHeadEventHandler::OnHeadEventOccurred_::_1_::dtor$0 @ 0x1801D2843 (_SpatialRimDeviceCollectionHeadEventHandler--OnHeadEventOccurred_--_1_--dtor$0.c)
 *     _MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread_::_1_::dtor$3 @ 0x1801D2F6A (_MPCHeadUpdateListener--OnHeadEventOccurredWorkerThread_--_1_--dtor$3.c)
 *     _SpatialRimDeviceCollection::EnableHeadEventHandler_::_1_::dtor$0 @ 0x1801D54BE (_SpatialRimDeviceCollection--EnableHeadEventHandler_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollection::EnsureSpatialInteractionInitialized_::_1_::dtor$0 @ 0x1801D58F4 (_SpatialRimDeviceCollection--EnsureSpatialInteractionInitialized_--_1_--dtor$0.c)
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
