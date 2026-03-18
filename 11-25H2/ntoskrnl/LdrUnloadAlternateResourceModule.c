/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x140492210
 * Callers:
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x140492228 (LdrUnloadAlternateResourceModuleEx.c)
 */

__int64 __fastcall LdrUnloadAlternateResourceModule(__int64 a1)
{
  return LdrUnloadAlternateResourceModuleEx(a1);
}
