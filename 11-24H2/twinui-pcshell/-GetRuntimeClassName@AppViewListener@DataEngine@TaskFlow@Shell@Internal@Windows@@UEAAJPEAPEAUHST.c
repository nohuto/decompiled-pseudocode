/*
 * XREFs of ?GetRuntimeClassName@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180402350
 * Callers:
 *     ?GetRuntimeClassName@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180402380 (-GetRuntimeClassName@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAJPEAPEAU.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::GetRuntimeClassName(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.TaskFlow.DataEngine.AppViewListener", 0x3Au, a2);
}
