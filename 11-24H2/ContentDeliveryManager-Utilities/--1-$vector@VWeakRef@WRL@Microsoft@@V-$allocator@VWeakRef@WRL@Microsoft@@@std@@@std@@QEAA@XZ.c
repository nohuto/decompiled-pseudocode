/*
 * XREFs of ??1?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800605AC
 * Callers:
 *     _std::make_shared_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue_unsigned_short_const____FILETIME__::_1_::dtor$4 @ 0x1800B90E2 (_std--make_shared_ContentManagement--TargetedContent--Internal--SubscriptionManager_ea_1800B90E2.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RemoveInvalidWeakPointersNoLock_::_1_::dtor$0 @ 0x1800B9592 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RemoveInvalidWeakPointer.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>()
{
  return std::vector<Microsoft::WRL::WeakRef>::_Tidy();
}
