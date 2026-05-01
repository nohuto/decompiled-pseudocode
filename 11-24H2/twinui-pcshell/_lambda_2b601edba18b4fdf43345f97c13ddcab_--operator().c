/*
 * XREFs of _lambda_2b601edba18b4fdf43345f97c13ddcab_::operator() @ 0x1804A28AC
 * Callers:
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x1804A36D0 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     _lambda_2b601edba18b4fdf43345f97c13ddcab_$_InitCoro$2::operator() @ 0x1804A26EC (_lambda_2b601edba18b4fdf43345f97c13ddcab_$_InitCoro$2--operator().c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall lambda_2b601edba18b4fdf43345f97c13ddcab_::operator()(__int64 a1, _BYTE *a2, __int64 *a3)
{
  void *v6; // rax
  int v8; // [rsp+D8h] [rbp+10h] BYREF
  __int64 *v9; // [rsp+E0h] [rbp+18h]

  v9 = a3;
  v6 = operator new(0x80uLL);
  v8 = 0;
  lambda_2b601edba18b4fdf43345f97c13ddcab___InitCoro_2::operator()(&v8, (__int64)v6, a2, a3, a1);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a3);
  return a2;
}
