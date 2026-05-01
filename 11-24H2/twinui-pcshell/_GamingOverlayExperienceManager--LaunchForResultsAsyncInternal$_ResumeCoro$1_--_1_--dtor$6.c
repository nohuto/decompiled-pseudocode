/*
 * XREFs of _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::dtor$6 @ 0x1806E2DB4
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1802CFC68 (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall GamingOverlayExperienceManager::LaunchForResultsAsyncInternal__ResumeCoro_1_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 240) = *(_QWORD *)(a2 + 72) + 1880LL;
  *(_DWORD *)(a2 + 248) = **(_DWORD **)(a2 + 240);
  if ( (*(_DWORD *)(a2 + 248) & 1) != 0 )
  {
    *(_QWORD *)(a2 + 256) = *(_QWORD *)(a2 + 72) + 1880LL;
    *(_QWORD *)(a2 + 264) = *(_QWORD *)(a2 + 72) + 1880LL;
    *(_DWORD *)(a2 + 248) = **(_DWORD **)(a2 + 264);
    *(_DWORD *)(a2 + 272) = *(_DWORD *)(a2 + 248) & 0xFFFFFFFE;
    **(_DWORD **)(a2 + 256) = *(_DWORD *)(a2 + 272);
    *(_QWORD *)(a2 + 280) = *(_QWORD *)(a2 + 72) + 848LL;
    Microsoft::WRL::Wrappers::HStringReference::~HStringReference(*(Microsoft::WRL::Wrappers::HStringReference **)(a2 + 280));
  }
}
