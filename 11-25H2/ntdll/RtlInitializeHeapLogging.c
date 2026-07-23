/*
 * XREFs of RtlInitializeHeapLogging @ 0x180109C50
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     EtwEventRegister @ 0x1800455F0 (EtwEventRegister.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180173498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 RtlInitializeHeapLogging()
{
  unsigned __int32 v0; // ebx

  v0 = EtwEventRegister(&WindowsHeapSnapshotProvider, RtlpHpStackTraceEtwCallback, 0LL, &RtlpHpStackTraceProviderHandle);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CE670);
  return v0;
}
