/*
 * XREFs of sub_18000FEEC @ 0x18000FEEC
 * Callers:
 *     sub_18000FADC @ 0x18000FADC (sub_18000FADC.c)
 * Callees:
 *     <none>
 */

FARPROC sub_18000FEEC()
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
