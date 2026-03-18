/*
 * XREFs of MmEnumerateSystemImages @ 0x1404F8690
 * Callers:
 *     Phase1Initialization @ 0x1406F0AF0 (Phase1Initialization.c)
 *     IopInitializeBootLogging @ 0x140706328 (IopInitializeBootLogging.c)
 *     EtwpCoverageSamplerStart @ 0x1407A3978 (EtwpCoverageSamplerStart.c)
 *     MmLockRegistryRecoverySections @ 0x1407D8274 (MmLockRegistryRecoverySections.c)
 *     EtwpSysModuleRunDown @ 0x140A60FE4 (EtwpSysModuleRunDown.c)
 *     PopIdleWakeGenerateInterruptDescriptionString @ 0x140A7E28C (PopIdleWakeGenerateInterruptDescriptionString.c)
 * Callees:
 *     MiEnumerateSystemImages @ 0x14036E320 (MiEnumerateSystemImages.c)
 */

__int64 __fastcall MmEnumerateSystemImages(__int64 a1, __int64 a2)
{
  return MiEnumerateSystemImages(a1, a2, 0);
}
