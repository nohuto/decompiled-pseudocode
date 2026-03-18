/*
 * XREFs of RtlGetNtProductType @ 0x14042F1D0
 * Callers:
 *     KeCapturePersistentThreadState @ 0x140262B20 (KeCapturePersistentThreadState.c)
 *     IoFillDumpHeader @ 0x140590FCC (IoFillDumpHeader.c)
 *     MmWriteTriageInformation @ 0x14067804C (MmWriteTriageInformation.c)
 *     RtlRestoreBootStatusDefaults @ 0x140782ED8 (RtlRestoreBootStatusDefaults.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1409A33EC (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IoCreateDevice @ 0x1409A3530 (IoCreateDevice.c)
 *     RtlGetVersion @ 0x140A08A00 (RtlGetVersion.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140A8A54C (RtlpGetNtProductTypeFromRegistry.c)
 */

bool __fastcall RtlGetNtProductType(_DWORD *a1)
{
  int Flink; // eax
  bool result; // al

  if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
  {
    Flink = (int)PsGetCurrentServerSiloGlobals()[80].Blink[1].Flink;
    goto LABEL_4;
  }
  if ( MEMORY[0xFFFFF78000000268] )
  {
    Flink = MEMORY[0xFFFFF78000000264];
LABEL_4:
    *a1 = Flink;
    return 1;
  }
  if ( KeGetCurrentIrql() > 1u )
  {
    result = 0;
LABEL_11:
    *a1 = 1;
    return result;
  }
  result = (int)RtlpGetNtProductTypeFromRegistry(a1) >= 0;
  if ( !result )
    goto LABEL_11;
  return result;
}
