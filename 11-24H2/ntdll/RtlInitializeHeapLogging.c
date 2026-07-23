/*
 * XREFs of RtlInitializeHeapLogging @ 0x180102270
 * Callers:
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 * Callees:
 *     EtwEventRegister @ 0x180049E00 (EtwEventRegister.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180170498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 RtlInitializeHeapLogging()
{
  unsigned __int32 v0; // ebx

  v0 = EtwEventRegister(&WindowsHeapSnapshotProvider, RtlpHpStackTraceEtwCallback, 0LL, &RtlpHpStackTraceProviderHandle);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CB670);
  return v0;
}
