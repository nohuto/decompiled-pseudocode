/*
 * XREFs of _JointResize::TagViewWithLogoAsync$_ResumeCoro$1_::_1_::dtor$11 @ 0x1806F256E
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall JointResize::TagViewWithLogoAsync__ResumeCoro_1_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 224) = *(_QWORD *)(a2 + 64) + 176LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(*(winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension **)(a2 + 224));
}
