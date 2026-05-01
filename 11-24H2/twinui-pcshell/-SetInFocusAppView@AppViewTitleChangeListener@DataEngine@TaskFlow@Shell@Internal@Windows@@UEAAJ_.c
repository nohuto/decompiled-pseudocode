/*
 * XREFs of ?SetInFocusAppView@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_K@Z @ 0x180404970
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800561C8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::SetInFocusAppView(
        RTL_SRWLOCK *this,
        void *a2)
{
  __int64 v4; // rax
  RTL_SRWLOCK *v6; // [rsp+20h] [rbp-38h] BYREF
  void *v7[4]; // [rsp+28h] [rbp-30h] BYREF

  wil::AcquireSRWLockExclusive(&v6, this + 9);
  this[10].Ptr = a2;
  v4 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, void **, void *))this[-3].Ptr + 9))(this - 3, v7, a2);
  std::wstring::operator=((__int64)&this[11], v4);
  std::wstring::_Tidy_deallocate(v7);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v6);
  return 0LL;
}
