/*
 * XREFs of ?AddPackageAsync@?$consume_Windows_Management_Deployment_IPackageManager3@UPackageManager@Deployment@Management@Windows@winrt@@@impl@winrt@@QEBA@AEBUUri@Foundation@Windows@3@AEBU?$async_iterable@UUri@Foundation@Windows@winrt@@@param@3@AEBW4DeploymentOptions@Deployment@Management@63@AEBUPackageVolume@Deployment@Management@63@@Z @ 0x1805CD138
 * Callers:
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x1805D35C0 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Management_Deployment_IPackageManager3<winrt::Windows::Management::Deployment::PackageManager>::AddPackageAsync(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int *a5,
        _QWORD *a6)
{
  __int64 (__fastcall ***v9)(_QWORD, void *, __int64 *); // rcx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v14; // [rsp+48h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-20h] BYREF
  int v16; // [rsp+58h] [rbp-18h] BYREF
  __int128 v17; // [rsp+60h] [rbp-10h]
  __int64 v18; // [rsp+90h] [rbp+20h] BYREF
  _QWORD *v19; // [rsp+98h] [rbp+28h] BYREF

  v19 = a2;
  v15 = 0LL;
  v9 = *a1;
  if ( v9 )
  {
    v18 = 0LL;
    v10 = (**v9)(v9, &winrt::impl::guid_v<winrt::Windows::Management::Deployment::IPackageManager3>, &v18);
    v11 = v18;
    v14 = v18;
  }
  else
  {
    v10 = 0;
    v14 = 0LL;
    v11 = 0LL;
  }
  v16 = 0;
  v17 = 0LL;
  winrt::check_hresult((int *)&v19, v10, (__int64)&v16);
  v16 = 0;
  v17 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v11 + 56LL))(
          v11,
          *a3,
          *a4,
          *a5,
          *a6,
          &v15);
  winrt::check_hresult((int *)&v19, v12, (__int64)&v16);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  *a2 = v15;
  return a2;
}
