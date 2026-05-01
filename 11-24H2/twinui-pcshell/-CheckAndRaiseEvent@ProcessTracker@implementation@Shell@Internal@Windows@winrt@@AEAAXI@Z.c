/*
 * XREFs of ?CheckAndRaiseEvent@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@AEAAXI@Z @ 0x18066060C
 * Callers:
 *     ?ProcessEndedCallback@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAXE@Z @ 0x180660850 (-ProcessEndedCallback@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@SAXPEAXE@Z.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??$?RH@?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@QEBA_KAEBH@Z @ 0x1800AB80C (--$-RH@-$_Uhash_compare@HU-$hash@H@std@@U-$equal_to@H@2@@std@@QEBA_KAEBH@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@AEBU76@@Z @ 0x18064C3E0 (-GetCorrelationId@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA-AUhstrin.c)
 *     ??$?RUProcessTracker@implementation@Shell@Internal@Windows@winrt@@I@?$event@U?$EventHandler@I@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUProcessTracker@implementation@Shell@Internal@Windows@1@AEBI@Z @ 0x18065F998 (--$-RUProcessTracker@implementation@Shell@Internal@Windows@winrt@@I@-$event@U-$EventHandler@I@Fo.c)
 *     ??$ProviderProcessTrackingStopped@AEAIIPEBG@CloudPCTelemetry@@SAXAEAI$$QEAI$$QEAPEBG@Z @ 0x18065FAEC (--$ProviderProcessTrackingStopped@AEAIIPEBG@CloudPCTelemetry@@SAXAEAI$$QEAI$$QEAPEBG@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18065FBCC (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$unique_ptr@UProcessInfo@ProcessTracker@i.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@UProcessInfo@ProcessTracker@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@1@AEBI@Z @ 0x18065FE70 (--$find@X@-$_Hash@V-$_Umap_traits@IV-$unique_ptr@UProcessInfo@ProcessTracker@implementation@Shel.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::ProcessTracker::CheckAndRaiseEvent(
        RTL_SRWLOCK *this,
        int a2)
{
  char v3; // di
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 *v6; // r10
  __int64 v7; // r11
  _QWORD *Ptr; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  winrt::hstring *CorrelationId; // rax
  RTL_SRWLOCK *v12[2]; // [rsp+20h] [rbp-10h] BYREF
  PVOID v13; // [rsp+50h] [rbp+20h] BYREF
  int v14; // [rsp+58h] [rbp+28h] BYREF
  const unsigned __int16 *v15; // [rsp+60h] [rbp+30h] BYREF
  volatile signed __int32 *v16; // [rsp+68h] [rbp+38h] BYREF

  v14 = a2;
  v3 = 0;
  wil::AcquireSRWLockExclusive(v12, this + 3);
  std::_Hash<std::_Umap_traits<unsigned int,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>>,0>>::find<void>(
    &this[4].Ptr,
    &v13,
    (__int64)&v14);
  if ( v13 != this[5].Ptr )
  {
    v5 = std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>::operator()<int>(v4, (__int64)v13 + 16);
    Ptr = this[7].Ptr;
    v9 = 2 * ((__int64)this[10].Ptr & v5);
    if ( (__int64 *)Ptr[2 * ((__int64)this[10].Ptr & v5) + 1] == v6 )
    {
      if ( (__int64 *)Ptr[2 * ((__int64)this[10].Ptr & v5)] == v6 )
        Ptr[2 * ((__int64)this[10].Ptr & v5)] = v7;
      else
        v7 = v6[1];
      Ptr[v9 + 1] = v7;
    }
    else if ( (__int64 *)Ptr[2 * ((__int64)this[10].Ptr & v5)] == v6 )
    {
      Ptr[2 * ((__int64)this[10].Ptr & v5)] = *v6;
    }
    v10 = *v6;
    --this[6].Ptr;
    *(_QWORD *)v6[1] = v10;
    *(_QWORD *)(v10 + 8) = v6[1];
    std::_List_node<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned int const,std::unique_ptr<winrt::Windows::Internal::Shell::implementation::ProcessTracker::ProcessInfo>>,void *>>>(
      v10,
      (char *)v6);
    CorrelationId = winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetCorrelationId(
                      (winrt::hstring *)&v16,
                      &c_bootSystemId);
    v15 = winrt::hstring::c_str(CorrelationId);
    LODWORD(v13) = this[6].Ptr;
    CloudPCTelemetry::ProviderProcessTrackingStopped<unsigned int &,unsigned int,unsigned short const *>(
      &v14,
      (int *)&v13,
      (__int64 *)&v15);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
    v3 = 1;
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(v12);
  if ( v3 )
    winrt::event<winrt::Windows::Foundation::EventHandler<unsigned int>>::operator()<winrt::Windows::Internal::Shell::implementation::ProcessTracker,unsigned int>(
      this + 12,
      (__int64)this,
      (__int64)&v14);
}
