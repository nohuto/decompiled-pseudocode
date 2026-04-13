/*
 * XREFs of ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800429B0
 * Callers:
 *     _ContentManagement::ContentManagementService::CloseConnection_::_1_::dtor$0 @ 0x1800B8937 (_ContentManagement--ContentManagementService--CloseConnection_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementService::EnsureOpenConnection_::_1_::dtor$0 @ 0x1800B89C1 (_ContentManagement--ContentManagementService--EnsureOpenConnection_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    *this = 0LL;
  }
}
