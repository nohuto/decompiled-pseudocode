/*
 * XREFs of sub_18000FFEC @ 0x18000FFEC
 * Callers:
 *     sub_18000FBDC @ 0x18000FBDC (sub_18000FBDC.c)
 * Callees:
 *     <none>
 */

FARPROC sub_18000FFEC()
{
  HMODULE ModuleHandleW; // rax
  __int64 WilFailureNotifyWatchers; // rbx

  ModuleHandleW = hModule;
  WilFailureNotifyWatchers = 0LL;
  if ( hModule )
    return GetProcAddress(ModuleHandleW, "WilFailureNotifyWatchers");
  ModuleHandleW = GetModuleHandleW(L"kernelbase.dll");
  hModule = ModuleHandleW;
  if ( ModuleHandleW )
    return GetProcAddress(ModuleHandleW, "WilFailureNotifyWatchers");
  return (FARPROC)WilFailureNotifyWatchers;
}
