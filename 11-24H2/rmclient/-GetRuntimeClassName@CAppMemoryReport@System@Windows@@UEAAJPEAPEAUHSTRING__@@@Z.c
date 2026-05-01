/*
 * XREFs of ?GetRuntimeClassName@CAppMemoryReport@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180018910
 * Callers:
 *     ?GetRuntimeClassName@CAppMemoryReport@System@Windows@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180018940 (-GetRuntimeClassName@CAppMemoryReport@System@Windows@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CAppMemoryReport@System@Windows@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180018950 (-GetRuntimeClassName@CAppMemoryReport@System@Windows@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::System::CAppMemoryReport::GetRuntimeClassName(
        Windows::System::CAppMemoryReport *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.System.AppMemoryReport", 0x1Eu, a2);
}
