/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUIClientWindowState@ViewManagerInterop@Shell@456@UIClientWindowReadyForPresentationChangedEventArgs@89456@@Z @ 0x180363CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180364A70 (-ShowInternal@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnClientWindowReadyForPresentationChanged(
        __int64 a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a3)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-50h] BYREF
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v12; // [rsp+28h] [rbp-48h]
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v13; // [rsp+30h] [rbp-40h]
  int v14; // [rsp+38h] [rbp-38h] BYREF
  __int128 v15; // [rsp+40h] [rbp-30h]
  _BYTE v16[8]; // [rsp+50h] [rbp-20h] BYREF
  RTL_SRWLOCK *v17; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v12 = a2;
  v13 = a3;
  v17 = 0LL;
  wil::AcquireSRWLockExclusive(&v17, (RTL_SRWLOCK *)(a1 + 176));
  v16[0] = 0;
  v6 = *(_QWORD *)a3;
  v14 = 0;
  v15 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 48LL))(v6, v16);
  winrt::check_hresult(&v11, v7, (__int64)&v14);
  if ( v16[0] )
  {
    v8 = *(_QWORD *)(a1 + 40);
    if ( v8 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 112LL))(v8);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x394,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GameBarWindowControl.cpp",
          (const char *)(unsigned int)v9,
          v11);
      if ( *(_BYTE *)(a1 + 105) && *(_BYTE *)(a1 + 104) )
      {
        LOBYTE(v10) = v16[0];
        winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::ShowInternal(a1, v10);
      }
    }
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v17);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a3);
}
