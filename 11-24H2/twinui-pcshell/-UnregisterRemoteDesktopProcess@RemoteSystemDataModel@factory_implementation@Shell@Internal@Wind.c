/*
 * XREFs of ?UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x180652280
 * Callers:
 *     ?UnregisterRemoteDesktopProcess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEBAXI@Z @ 0x1806425C4 (-UnregisterRemoteDesktopProcess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QE.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?value@?$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ @ 0x1802BB330 (-value@-$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ.c)
 *     ??9winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1802CE7B0 (--9winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ??1?$_Optional_destruct_base@Uhstring@winrt@@$0A@@std@@QEAA@XZ @ 0x1802CF184 (--1-$_Optional_destruct_base@Uhstring@winrt@@$0A@@std@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$?RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStateChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSessionWindowManager@implementation@Shell@Internal@Windows@1@AEBURemoteDesktopStateChangedEventArgs@4561@@Z @ 0x18064425C (--$-RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStat.c)
 *     ??$make@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEAUhstring@6@AEAI_N@winrt@@YA?A_PAEAUhstring@0@AEAI$$QEA_N@Z @ 0x180646AE8 (--$make@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEAUhstring@6@.c)
 *     ?ClearCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x18064AAA8 (-ClearCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@A.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBU76@@Z @ 0x18064C300 (-GetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x180650CA4 (-SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@IUhstring@5@@impl@winrt@@QEBA@AEBI@Z @ 0x180651574 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@IUhstring@winrt@@@Collections@F.c)
 *     ?DeleteProcessId@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x180663148 (-DeleteProcessId@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::UnregisterRemoteDesktopProcess(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        unsigned int a2)
{
  unsigned int v2; // esi
  const struct winrt::hstring *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *CorrelationId; // rax
  char v8; // bl
  __int64 v9; // rcx
  int v10; // eax
  RTL_SRWLOCK *v11; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v12[16]; // [rsp+28h] [rbp-28h] BYREF
  int v13; // [rsp+38h] [rbp-18h] BYREF
  __int128 v14; // [rsp+40h] [rbp-10h]
  volatile signed __int32 *v15; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+38h] BYREF
  volatile signed __int32 *v17; // [rsp+90h] [rbp+40h] BYREF
  __int64 v18; // [rsp+98h] [rbp+48h] BYREF

  v16 = a2;
  v2 = a2;
  wil::AcquireSRWLockExclusive(&v11, (RTL_SRWLOCK *)this + 16);
  winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<unsigned int,winrt::hstring>,unsigned int,winrt::hstring>::TryLookup(
    (__int64 *)this + 32,
    (__int64)v12,
    &v16);
  if ( v12[8] )
  {
    v4 = (const struct winrt::hstring *)std::optional<winrt::hstring>::value((__int64)v12);
    winrt::hstring::hstring((winrt::hstring *)&v17, v4);
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetIsImmersiveRemoteSession(
      this,
      0,
      v5,
      v6);
    CorrelationId = (__int64 *)winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetCorrelationId(
                                 (RTL_SRWLOCK *)this,
                                 (winrt::hstring *)&v15,
                                 (__int64 *)&v17);
    v8 = winrt::operator!=(CorrelationId);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
    if ( v8 )
      winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::ClearCorrelationId(
        (RTL_SRWLOCK *)this,
        (const struct winrt::hstring *)&v17);
    winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::DeleteProcessId(
      *((winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper **)this + 4),
      v2,
      (const struct winrt::hstring *)&v17);
    if ( !*((_DWORD *)this + 12) )
    {
      LOBYTE(v15) = 0;
      winrt::make<winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs,winrt::hstring &,unsigned int &,bool>(
        &v18,
        (const struct winrt::hstring *)&v17,
        &v16,
        (const bool *)&v15);
      winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>(
        (RTL_SRWLOCK *)this + 34,
        (__int64)this,
        (__int64)&v18);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
      v2 = v16;
    }
    v9 = *((_QWORD *)this + 32);
    v13 = 0;
    v14 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 88LL))(v9, v2);
    winrt::check_hresult((int *)&v15, v10, (__int64)&v13);
    *((_DWORD *)this + 12) = 0;
    *((_DWORD *)this + 66) = 0;
    *((_WORD *)this + 134) = 0;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v17);
  }
  std::_Optional_destruct_base<winrt::hstring,0>::~_Optional_destruct_base<winrt::hstring,0>((__int64)v12);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v11);
}
