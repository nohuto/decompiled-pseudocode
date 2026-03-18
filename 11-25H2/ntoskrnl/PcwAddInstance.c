/*
 * XREFs of PcwAddInstance @ 0x1409FC2A0
 * Callers:
 *     PoThermalCounterSetCallback @ 0x1409FB460 (PoThermalCounterSetCallback.c)
 *     ExProcessorCounterSetCallback @ 0x1409FB640 (ExProcessorCounterSetCallback.c)
 *     FsRtlDiskIOCounterSetCallback @ 0x140A55F60 (FsRtlDiskIOCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A5EA90 (KiSynchNumaCounterSetCallback.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140AD6740 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14042C694 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404516B0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExpPcwDisabledStatus @ 0x140A49940 (ExpPcwDisabledStatus.c)
 */

NTSTATUS __stdcall PcwAddInstance(PPCW_BUFFER Buffer, PCUNICODE_STRING Name, ULONG Id, ULONG Count, PPCW_DATA Data)
{
  NTSTATUS v6; // ebx

  if ( !ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
    return ExpPcwDisabledStatus();
  v6 = guard_dispatch_icall_no_overrides(Buffer);
  ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  return v6;
}
