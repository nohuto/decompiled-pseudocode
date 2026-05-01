/*
 * XREFs of DelayLoadCC @ 0x1802C9D2C
 * Callers:
 *     SHFusionInitializeFromModuleID @ 0x180216D60 (SHFusionInitializeFromModuleID.c)
 *     _GetProcFromComCtl32 @ 0x1802DE848 (_GetProcFromComCtl32.c)
 * Callees:
 *     SHFusionLoadLibrary @ 0x1802DE708 (SHFusionLoadLibrary.c)
 */

__int64 DelayLoadCC()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( g_hinstCC )
    return 1;
  g_hinstCC = (HMODULE)SHFusionLoadLibrary();
  if ( g_hinstCC )
    return 1;
  g_hinstCC = LoadLibraryExW(L"comctl32.dll", 0LL, 0x4000u);
  if ( g_hinstCC )
    return 1;
  return v0;
}
