/*
 * XREFs of ?GetRuntimeClassName@UndockedSearchAppExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18037B2B0
 * Callers:
 *     ?GetRuntimeClassName@SearchAppExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18037B2E0 (-GetRuntimeClassName@SearchAppExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@UndockedSearchAppExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1803BBEF0 (-GetRuntimeClassName@UndockedSearchAppExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall UndockedSearchAppExperienceManager::GetRuntimeClassName(
        UndockedSearchAppExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.CortanaExperienceManager", 0x3Au, a2);
}
