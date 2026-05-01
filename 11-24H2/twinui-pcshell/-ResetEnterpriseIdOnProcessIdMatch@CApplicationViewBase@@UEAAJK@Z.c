/*
 * XREFs of ?ResetEnterpriseIdOnProcessIdMatch@CApplicationViewBase@@UEAAJK@Z @ 0x180312410
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?_RefreshEnterpriseId@CApplicationViewBase@@IEAAJ_N@Z @ 0x1801C2010 (-_RefreshEnterpriseId@CApplicationViewBase@@IEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::ResetEnterpriseIdOnProcessIdMatch(RTL_SRWLOCK *this, int a2)
{
  int refreshed; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v9; // [rsp+40h] [rbp+18h] BYREF

  wil::AcquireSRWLockExclusive(&v9, this + 3);
  v8 = 0;
  if ( (*((int (__fastcall **)(RTL_SRWLOCK *, int *))this[-3].Ptr + 65))(this - 3, &v8) < 0 || v8 == a2 )
  {
    refreshed = CApplicationViewBase::_RefreshEnterpriseId((CApplicationViewBase *)&this[-3], 1);
    v6 = refreshed;
    if ( refreshed < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12F,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
        (const char *)(unsigned int)refreshed);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v9);
    return v6;
  }
  else
  {
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v9);
    return 0LL;
  }
}
