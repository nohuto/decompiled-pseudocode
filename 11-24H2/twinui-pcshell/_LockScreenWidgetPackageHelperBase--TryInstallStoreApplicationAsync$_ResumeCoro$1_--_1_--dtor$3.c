/*
 * XREFs of _LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x1806FBC94
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall LockScreenWidgetPackageHelperBase::TryInstallStoreApplicationAsync__ResumeCoro_1_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 160) = *(_QWORD *)(a2 + 352) + 512LL;
  *(_DWORD *)(a2 + 360) = **(_DWORD **)(a2 + 160);
  if ( (*(_DWORD *)(a2 + 360) & 1) != 0 )
  {
    *(_QWORD *)(a2 + 168) = *(_QWORD *)(a2 + 352) + 512LL;
    *(_QWORD *)(a2 + 176) = *(_QWORD *)(a2 + 352) + 512LL;
    *(_DWORD *)(a2 + 360) = **(_DWORD **)(a2 + 176);
    *(_DWORD *)(a2 + 184) = *(_DWORD *)(a2 + 360) & 0xFFFFFFFE;
    **(_DWORD **)(a2 + 168) = *(_DWORD *)(a2 + 184);
    *(_QWORD *)(a2 + 192) = *(_QWORD *)(a2 + 352) + 80LL;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(*(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a2 + 192));
  }
}
