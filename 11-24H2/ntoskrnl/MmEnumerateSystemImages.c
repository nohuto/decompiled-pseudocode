/*
 * XREFs of MmEnumerateSystemImages @ 0x1404F8410
 * Callers:
 *     Phase1Initialization @ 0x1406FA520 (Phase1Initialization.c)
 *     IopInitializeBootLogging @ 0x14070FFB8 (IopInitializeBootLogging.c)
 *     EtwpCoverageSamplerStart @ 0x1407B3198 (EtwpCoverageSamplerStart.c)
 *     MmLockRegistryRecoverySections @ 0x1407E8704 (MmLockRegistryRecoverySections.c)
 *     EtwpSysModuleRunDown @ 0x1408F1048 (EtwpSysModuleRunDown.c)
 *     PopIdleWakeGenerateInterruptDescriptionString @ 0x140A7C204 (PopIdleWakeGenerateInterruptDescriptionString.c)
 * Callees:
 *     MiEnumerateSystemImages @ 0x1402BBF00 (MiEnumerateSystemImages.c)
 */

__int64 __fastcall MmEnumerateSystemImages(__int64 a1, __int64 a2)
{
  return MiEnumerateSystemImages(a1, a2, 0);
}
