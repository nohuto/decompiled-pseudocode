/*
 * XREFs of ?OnForegroundProcessChanged@RecentAppsCache@Discover@PenWorkspace@@QEAAJKKIIIII@Z @ 0x1803F3ACC
 * Callers:
 *     ?OnForegroundProcessChanged@PenWorkspaceDiscoverBroker@@UEAAXKKIIIII@Z @ 0x1803EFB60 (-OnForegroundProcessChanged@PenWorkspaceDiscoverBroker@@UEAAXKKIIIII@Z.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18004D078 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$emplace_back@AEAUForegroundSwitchData@Discover@PenWorkspace@@@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@QEAA?A_TAEAUForegroundSwitchData@Discover@PenWorkspace@@@Z @ 0x1803F21D4 (--$emplace_back@AEAUForegroundSwitchData@Discover@PenWorkspace@@@-$deque@UForegroundSwitchData@D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::OnForegroundProcessChanged(
        PenWorkspace::Discover::RecentAppsCache *this,
        int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  void *v9; // rdx
  const char *v10; // r9
  RTL_SRWLOCK *v12; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v13[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v13[0] = a2;
  v13[1] = a3;
  v13[2] = a8;
  wil::AcquireSRWLockExclusive(&v12, (RTL_SRWLOCK *)this + 20);
  try
  {
    std::deque<PenWorkspace::Discover::ForegroundSwitchData>::emplace_back<PenWorkspace::Discover::ForegroundSwitchData &>(
      (_QWORD *)this + 13,
      (__int64)v13);
    wil::details::SetEvent(*((wil::details **)this + 19), v9);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v12);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xA9,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      v10);
  }
  return 0LL;
}
