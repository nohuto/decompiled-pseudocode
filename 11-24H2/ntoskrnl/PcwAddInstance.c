/*
 * XREFs of PcwAddInstance @ 0x1409FE0F0
 * Callers:
 *     PoThermalCounterSetCallback @ 0x1409FDF10 (PoThermalCounterSetCallback.c)
 *     FsRtlDiskIOCounterSetCallback @ 0x140A4C790 (FsRtlDiskIOCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A60920 (KiSynchNumaCounterSetCallback.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140AE8A70 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1403AA530 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x14044FE80 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpPcwDisabledStatus @ 0x140A4C4F0 (ExpPcwDisabledStatus.c)
 */

NTSTATUS __stdcall PcwAddInstance(PPCW_BUFFER Buffer, PCUNICODE_STRING Name, ULONG Id, ULONG Count, PPCW_DATA Data)
{
  NTSTATUS v9; // ebx

  if ( !ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
    return ExpPcwDisabledStatus();
  v9 = guard_dispatch_icall_no_overrides(Buffer, Name, Id, Count);
  ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  return v9;
}
