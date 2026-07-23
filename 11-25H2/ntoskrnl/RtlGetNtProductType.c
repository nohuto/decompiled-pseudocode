/*
 * XREFs of RtlGetNtProductType @ 0x140311820
 * Callers:
 *     KeCapturePersistentThreadState @ 0x1402AA100 (KeCapturePersistentThreadState.c)
 *     IoFillDumpHeader @ 0x14058D79C (IoFillDumpHeader.c)
 *     MmWriteTriageInformation @ 0x14066C6FC (MmWriteTriageInformation.c)
 *     RtlRestoreBootStatusDefaults @ 0x140773C28 (RtlRestoreBootStatusDefaults.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14099E4FC (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IoCreateDevice @ 0x14099E640 (IoCreateDevice.c)
 *     RtlGetVersion @ 0x140A0B990 (RtlGetVersion.c)
 *     AstInitialize @ 0x140C0CF98 (AstInitialize.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140A85BE4 (RtlpGetNtProductTypeFromRegistry.c)
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
