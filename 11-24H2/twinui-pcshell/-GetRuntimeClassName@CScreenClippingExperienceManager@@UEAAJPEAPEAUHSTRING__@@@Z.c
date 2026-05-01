/*
 * XREFs of ?GetRuntimeClassName@CScreenClippingExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1803A3240
 * Callers:
 *     ?GetRuntimeClassName@CScreenClippingExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1803A3270 (-GetRuntimeClassName@CScreenClippingExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CScreenClippingExperienceManager::GetRuntimeClassName(
        CScreenClippingExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.ScreenClippingExperienceManager", 0x41u, a2);
}
