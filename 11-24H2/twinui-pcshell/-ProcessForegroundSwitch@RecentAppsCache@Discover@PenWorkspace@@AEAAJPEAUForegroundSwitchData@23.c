/*
 * XREFs of ?ProcessForegroundSwitch@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUForegroundSwitchData@23@AEBU_FILETIME@@@Z @ 0x1803F3C3C
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x18004C164 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BDC30 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x1803F4350 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::ProcessForegroundSwitch(
        PenWorkspace::Discover::RecentAppsCache *this,
        struct PenWorkspace::Discover::ForegroundSwitchData *a2,
        const struct _FILETIME *a3)
{
  int v3; // eax
  unsigned int v7; // edx
  __int64 result; // rax
  std::_Ref_count_base *v9[2]; // [rsp+20h] [rbp-18h] BYREF
  RTL_SRWLOCK *v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 20);
  if ( v3 && v3 == *(_DWORD *)a2 )
  {
    wil::AcquireSRWLockExclusive(&v10, (RTL_SRWLOCK *)(*((_QWORD *)this + 11) + 48LL));
    *(_DWORD *)(*((_QWORD *)this + 11) + 32LL) += *((_DWORD *)a2 + 2);
    *(struct _FILETIME *)(*((_QWORD *)this + 11) + 36LL) = *a3;
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v10);
  }
  *((_DWORD *)this + 20) = 0;
  *(_OWORD *)v9 = 0LL;
  std::shared_ptr<KBViewInfo>::operator=((_QWORD *)this + 11, (__int64 *)v9);
  if ( v9[1] )
    std::_Ref_count_base::_Decref(v9[1]);
  v7 = *((_DWORD *)a2 + 1);
  if ( !v7 )
    return 0LL;
  result = PenWorkspace::Discover::RecentAppsCache::TrackProcess(this, v7, a3);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
