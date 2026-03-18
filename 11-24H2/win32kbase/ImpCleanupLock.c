/*
 * XREFs of ImpCleanupLock @ 0x14014D8FC
 * Callers:
 *     ImpInitializeWork @ 0x1401341E0 (ImpInitializeWork.c)
 *     ImpCleanupWork @ 0x14014D870 (ImpCleanupWork.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ImpCleanupLock(PERESOURCE *a1)
{
  NTSTATUS v2; // edi

  if ( !*a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v2 = ExDeleteResourceLite(*a1);
  if ( v2 >= 0 )
  {
    ExFreePoolWithTag(*a1, 0);
    *a1 = 0LL;
  }
  return (unsigned int)v2;
}
