/*
 * XREFs of ?GetRuntimeClassName@VirtualDesktopDataSource@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180492400
 * Callers:
 *     ?GetRuntimeClassName@VirtualDesktopDataSource@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180492430 (-GetRuntimeClassName@VirtualDesktopDataSource@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall VirtualDesktopDataSource::GetRuntimeClassName(VirtualDesktopDataSource *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.ComposableShell.Multitasking.VirtualDesktopDataSource", 0x46u, a2);
}
