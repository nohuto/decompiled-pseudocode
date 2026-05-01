/*
 * XREFs of ?GetRuntimeClassName@HolographicPositioner@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180409B40
 * Callers:
 *     ?GetRuntimeClassName@HolographicPositioner@@WJI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180409B70 (-GetRuntimeClassName@HolographicPositioner@@WJI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@HolographicPositioner@@WLI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180409B90 (-GetRuntimeClassName@HolographicPositioner@@WLI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@HolographicPositioner@@WMA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180409BB0 (-GetRuntimeClassName@HolographicPositioner@@WMA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall HolographicPositioner::GetRuntimeClassName(HolographicPositioner *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Holographic.HolographicViewHostItemSource", 0x40u, a2);
}
