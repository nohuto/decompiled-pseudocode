/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x140492210
 * Callers:
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x140492228 (LdrUnloadAlternateResourceModuleEx.c)
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModule(PVOID DllHandle)
{
  ULONG v1; // edx

  return LdrUnloadAlternateResourceModuleEx(DllHandle, v1);
}
