/*
 * XREFs of ??0CAutoSRWSharedLock@@QEAA@AEAVCSRWLock@@@Z @ 0x18013A2E8
 * Callers:
 *     ?get_PrevChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UEAAJPEAPEAUIChainLink@2345@@Z @ 0x180306720 (-get_PrevChainLink@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UEAAJPEAPEA.c)
 *     _lambda_00f17e8f9cdc6e60e0c1a7e4e1826712_::operator() @ 0x18030CDC4 (_lambda_00f17e8f9cdc6e60e0c1a7e4e1826712_--operator().c)
 *     ?ProcessEntepriseIdChanged@CApplicationViewManager@@UEAAJK@Z @ 0x18030D9F0 (-ProcessEntepriseIdChanged@CApplicationViewManager@@UEAAJK@Z.c)
 *     ?TryGetLastActiveVisibleView@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18030E020 (-TryGetLastActiveVisibleView@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 *     ?GetViewForHwnd@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18030EFB0 (-GetViewForHwnd@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUHWND__@@PEAPEAUIApplicationV.c)
 * Callees:
 *     <none>
 */

CAutoSRWSharedLock *__fastcall CAutoSRWSharedLock::CAutoSRWSharedLock(CAutoSRWSharedLock *this, RTL_SRWLOCK *a2)
{
  *(_QWORD *)this = a2;
  AcquireSRWLockShared(a2);
  return this;
}
