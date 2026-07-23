/*
 * XREFs of PcwAddInstance @ 0x1409F7360
 * Callers:
 *     PoThermalCounterSetCallback @ 0x1409F7180 (PoThermalCounterSetCallback.c)
 *     FsRtlDiskIOCounterSetCallback @ 0x140A43320 (FsRtlDiskIOCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A58E70 (KiSynchNumaCounterSetCallback.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140AEBCE0 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     ExGetExtensionTable @ 0x140398F94 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1404450F0 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExpPcwDisabledStatus @ 0x140A43080 (ExpPcwDisabledStatus.c)
 */

NTSTATUS __stdcall PcwAddInstance(PPCW_BUFFER Buffer, PCUNICODE_STRING Name, ULONG Id, ULONG Count, PPCW_DATA Data)
{
  NTSTATUS v7; // ebx

  if ( !ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost) )
    return ExpPcwDisabledStatus();
  v7 = guard_dispatch_icall_no_overrides(Buffer, Name);
  ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  return v7;
}
