/*
 * XREFs of MmEnumerateSystemImages @ 0x1404FAB30
 * Callers:
 *     Phase1Initialization @ 0x1406FC8E0 (Phase1Initialization.c)
 *     IopInitializeBootLogging @ 0x140712428 (IopInitializeBootLogging.c)
 *     EtwpCoverageSamplerStart @ 0x1407B2D48 (EtwpCoverageSamplerStart.c)
 *     MmLockRegistryRecoverySections @ 0x1407E8134 (MmLockRegistryRecoverySections.c)
 *     EtwpSysModuleRunDown @ 0x14094CAD8 (EtwpSysModuleRunDown.c)
 *     PopIdleWakeGenerateInterruptDescriptionString @ 0x140A8190C (PopIdleWakeGenerateInterruptDescriptionString.c)
 * Callees:
 *     MiEnumerateSystemImages @ 0x1402C7380 (MiEnumerateSystemImages.c)
 */

__int64 __fastcall MmEnumerateSystemImages(__int64 a1, __int64 a2)
{
  return MiEnumerateSystemImages(a1, a2, 0LL);
}
