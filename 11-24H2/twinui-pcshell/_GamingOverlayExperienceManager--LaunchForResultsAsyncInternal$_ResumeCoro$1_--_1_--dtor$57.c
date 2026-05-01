/*
 * XREFs of _GamingOverlayExperienceManager::LaunchForResultsAsyncInternal$_ResumeCoro$1_::_1_::dtor$57 @ 0x1806E3373
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 */

void __fastcall GamingOverlayExperienceManager::LaunchForResultsAsyncInternal__ResumeCoro_1_::_1_::dtor_57(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 344) = *(_QWORD *)(a2 + 72) + 1896LL;
  *(_QWORD *)(a2 + 80) = **(_QWORD **)(a2 + 344);
  operator delete(*(void **)(a2 + 80));
}
