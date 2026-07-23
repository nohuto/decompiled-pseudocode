/*
 * XREFs of RtlGetNtProductType @ 0x1404213A0
 * Callers:
 *     KeCapturePersistentThreadState @ 0x140420EC0 (KeCapturePersistentThreadState.c)
 *     IoFillDumpHeader @ 0x14058DFEC (IoFillDumpHeader.c)
 *     MmWriteTriageInformation @ 0x14067922C (MmWriteTriageInformation.c)
 *     RtlRestoreBootStatusDefaults @ 0x140782E08 (RtlRestoreBootStatusDefaults.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1408ABD7C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IoCreateDevice @ 0x1408ABEC0 (IoCreateDevice.c)
 *     RtlGetVersion @ 0x140A04F30 (RtlGetVersion.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140A8688C (RtlpGetNtProductTypeFromRegistry.c)
 */

BOOLEAN __cdecl RtlGetNtProductType(PNT_PRODUCT_TYPE NtProductType)
{
  _NT_PRODUCT_TYPE Flink; // eax
  BOOLEAN result; // al

  if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
  {
    Flink = (_NT_PRODUCT_TYPE)PsGetCurrentServerSiloGlobals()[80].Blink[1].Flink;
    goto LABEL_4;
  }
  if ( MEMORY[0xFFFFF78000000268] )
  {
    Flink = MEMORY[0xFFFFF78000000264];
LABEL_4:
    *NtProductType = Flink;
    return 1;
  }
  if ( KeGetCurrentIrql() > 1u )
  {
    result = 0;
LABEL_11:
    *NtProductType = NtProductWinNt;
    return result;
  }
  result = (int)RtlpGetNtProductTypeFromRegistry(NtProductType) >= 0;
  if ( !result )
    goto LABEL_11;
  return result;
}
