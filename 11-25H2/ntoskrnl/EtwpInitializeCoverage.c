/*
 * XREFs of EtwpInitializeCoverage @ 0x14079C038
 * Callers:
 *     EtwpInitialize @ 0x140C2BE1C (EtwpInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 EtwpInitializeCoverage()
{
  *(_DWORD *)(MmWriteableSharedUserData + 892) = 1;
  EtwpCoverageLock = 0LL;
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_140E090B0, EtwpCoverageProvEnableCallback, 0LL);
}
