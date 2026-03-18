/*
 * XREFs of EtwpInitializeCoverage @ 0x1407AB408
 * Callers:
 *     EtwpInitialize @ 0x140C3D0FC (EtwpInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 EtwpInitializeCoverage()
{
  *(_DWORD *)(MmWriteableSharedUserData + 892) = 1;
  EtwpCoverageLock = 0LL;
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E091A8, EtwpCoverageProvEnableCallback, 0LL);
}
