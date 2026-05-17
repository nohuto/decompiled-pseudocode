/*
 * XREFs of RtlInitializeHeapLogging @ 0x180107340
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     EtwEventRegister @ 0x18001D400 (EtwEventRegister.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180171498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 RtlInitializeHeapLogging()
{
  unsigned int v0; // ebx

  v0 = EtwEventRegister(
         (int)&WindowsHeapSnapshotProvider,
         (__int64)RtlpHpStackTraceEtwCallback,
         0LL,
         (__int64)&RtlpHpStackTraceProviderHandle);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CC670);
  return v0;
}
