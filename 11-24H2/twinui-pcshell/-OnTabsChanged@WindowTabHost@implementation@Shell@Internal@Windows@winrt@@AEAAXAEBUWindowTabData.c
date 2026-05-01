/*
 * XREFs of ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x1800C1890
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?FailureReason@?$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndChatInstallResult@MeetAndChat@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180051D18 (-FailureReason@-$consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult@UIMeetAndC.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007E1F4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?at@?$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U?$hash@_K@std@@U?$equal_to@_K@8@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@@std@@QEAAAEAUWindowData@implementation@Shell@Internal@Windows@winrt@@AEB_K@Z @ 0x1800C1800 (-at@-$unordered_map@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@U-$hash@_K@std@@U.c)
 *     ?GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@0@Z @ 0x1800C1AF4 (-GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV-$vector@.c)
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x1800C1D74 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ?SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ @ 0x1800C278C (-SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x1801261FC (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::OnTabsChanged(
        RTL_SRWLOCK *this,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabDataModel *a2,
        const struct winrt::Windows::Internal::UI::Shell::WindowTabDataModelTabsChangedEventArgs *a3)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rcx
  unsigned __int64 i; // rdx
  __int64 v7; // rdx
  _QWORD *Ptr; // r8
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  RTL_SRWLOCK *v11; // rax
  unsigned __int64 v12; // r14
  void *v13; // rdi
  __int64 v14; // r15
  char v15; // r8
  __int64 v16; // r9
  __int128 v17; // [rsp+28h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h]
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]
  RTL_SRWLOCK *v21; // [rsp+90h] [rbp+30h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+48h]

  v4 = (unsigned int)winrt::impl::consume_Windows_Internal_Shell_MeetAndChat_IMeetAndChatInstallResult<winrt::Windows::Internal::Shell::MeetAndChat::IMeetAndChatInstallResult>::FailureReason((__int64 *)a2);
  v21 = (RTL_SRWLOCK *)v4;
  AcquireSRWLockShared(this + 77);
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v5 = 0x100000001B3LL * (*((unsigned __int8 *)&v21 + i) ^ (unsigned __int64)v5);
  v7 = 2 * (v5 & (__int64)this[84].Ptr);
  Ptr = this[81].Ptr;
  v9 = (_QWORD *)Ptr[2 * (v5 & (__int64)this[84].Ptr) + 1];
  v10 = this[79].Ptr;
  if ( v9 == v10 )
  {
LABEL_7:
    v9 = 0LL;
  }
  else
  {
    while ( v4 != v9[2] )
    {
      if ( v9 == (_QWORD *)Ptr[v7] )
        goto LABEL_7;
      v9 = (_QWORD *)v9[1];
    }
  }
  if ( !v9 )
    v9 = this[79].Ptr;
  if ( v9 == v10 )
  {
    if ( this != (RTL_SRWLOCK *)-616LL )
      ReleaseSRWLockShared(this + 77);
  }
  else
  {
    if ( this != (RTL_SRWLOCK *)-616LL )
      ReleaseSRWLockShared(this + 77);
    v22 = *(_QWORD *)(std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                        &this[78].Ptr,
                        (__int64 *)&v21)
                    + 184);
    v19 = 0LL;
    v20 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    AcquireSRWLockShared(this + 77);
    v11 = (RTL_SRWLOCK *)std::unordered_map<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData>::at(
                           &this[78].Ptr,
                           (__int64 *)&v21);
    winrt::Windows::Internal::Shell::implementation::WindowData::GetPendingTabChanges(v11);
    if ( this != (RTL_SRWLOCK *)-616LL )
      ReleaseSRWLockShared(this + 77);
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncGlobalTabOrder(this, v4, &v19, &v17);
    v12 = (__int64)(*((_QWORD *)&v17 + 1) - v17) >> 4;
    v13 = (void *)v19;
    v14 = (__int64)(*((_QWORD *)&v19 + 1) - v19) >> 4;
    if ( v12 >= v14 + v22 )
    {
      wil::AcquireSRWLockExclusive(&v21, &this[77]);
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel(
        (winrt::Windows::Internal::Shell::implementation::WindowTabHost *)this,
        v4);
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((CAutoSRWExclusiveLock *)&v21);
    }
    if ( v14 + v12 )
    {
      AcquireSRWLockShared(this + 77);
      v21 = this + 77;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
        1u,
        v15,
        v16);
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncAllAppWindows((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)this);
      if ( this != (RTL_SRWLOCK *)-616LL )
        ReleaseSRWLockShared(this + 77);
    }
    if ( (_QWORD)v17 )
      std::_Deallocate<16,0>((void *)v17, (const struct std::nothrow_t *)((v18 - v17) & 0xFFFFFFFFFFFFFFF0uLL));
    if ( v13 )
      std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)((v20 - (_QWORD)v13) & 0xFFFFFFFFFFFFFFF0uLL));
  }
}
