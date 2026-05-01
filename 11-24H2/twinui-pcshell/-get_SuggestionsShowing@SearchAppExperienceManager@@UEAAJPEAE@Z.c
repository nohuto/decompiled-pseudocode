/*
 * XREFs of ?get_SuggestionsShowing@SearchAppExperienceManager@@UEAAJPEAE@Z @ 0x1803ADA70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SearchAppExperienceManager::get_SuggestionsShowing(
        SearchAppExperienceManager *this,
        unsigned __int8 *a2)
{
  *a2 = 0;
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 40LL))(*((_QWORD *)this + 54));
}
