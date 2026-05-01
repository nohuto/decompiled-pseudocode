/*
 * XREFs of ?GetRuntimeClassName@CInsightsExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1803A71D0
 * Callers:
 *     ?GetRuntimeClassName@CInsightsExperienceManager@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1803A7200 (-GetRuntimeClassName@CInsightsExperienceManager@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CInsightsExperienceManager::GetRuntimeClassName(CInsightsExperienceManager *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.InsightsExperienceManager", 0x3Bu, a2);
}
