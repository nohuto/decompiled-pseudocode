/*
 * XREFs of LdrUnloadAlternateResourceModule @ 0x14044E0C4
 * Callers:
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 * Callees:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14044E0DC (LdrUnloadAlternateResourceModuleEx.c)
 */

__int64 LdrUnloadAlternateResourceModule()
{
  return LdrUnloadAlternateResourceModuleEx();
}
