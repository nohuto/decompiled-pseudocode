/*
 * XREFs of RtlUpcaseUnicodeString @ 0x140827CF0
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x14046C970 (RtlDeriveCapabilitySidsFromName.c)
 *     DifRtlUpcaseUnicodeStringWrapper @ 0x14062EF00 (DifRtlUpcaseUnicodeStringWrapper.c)
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14071FD10 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiCMGenerateDeviceInstance @ 0x140725150 (PiCMGenerateDeviceInstance.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x140825F64 (SdbMakeIndexKeyFromStringEx.c)
 *     PfCalculateProcessHash @ 0x140827880 (PfCalculateProcessHash.c)
 *     PfSnLogStreamCreate @ 0x140827B20 (PfSnLogStreamCreate.c)
 *     PfSnLogVolumeCreate @ 0x140828048 (PfSnLogVolumeCreate.c)
 *     AslStringUpcaseToMultiByteN @ 0x140828E8C (AslStringUpcaseToMultiByteN.c)
 *     PiCMOpenClassKey @ 0x14095CAF8 (PiCMOpenClassKey.c)
 *     PipMakeGloballyUniqueId @ 0x140A5491C (PipMakeGloballyUniqueId.c)
 *     ViCreateProcessCallbackInternal @ 0x140B868F0 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x140B86A18 (ViFaultsAddAppNoDuplicates.c)
 *     PipInitComputerIds @ 0x140C52860 (PipInitComputerIds.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x140434530 (AllocateOrValidateUnicodeStringBuffer.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  struct _LIST_ENTRY *Flink; // rsi
  unsigned __int16 *v6; // rdx
  char v7; // r10
  NTSTATUS result; // eax
  unsigned int v9; // r11d
  __int64 i; // r9
  unsigned __int64 v11; // r10

  if ( AllocateDestinationString || SourceString->Length )
  {
    Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
    result = AllocateOrValidateUnicodeStringBuffer(
               v7,
               *v6,
               (__int64 *)&DestinationString->Buffer,
               &DestinationString->MaximumLength);
    if ( result < 0 )
      return result;
    v9 = SourceString->Length >> 1;
    for ( i = 0LL; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
    {
      v11 = SourceString->Buffer[i];
      if ( (unsigned int)v11 >= 0x61 )
      {
        if ( (unsigned int)v11 > 0x7A )
        {
          if ( Flink )
          {
            if ( (unsigned __int16)v11 >= 0xC0u )
              LOWORD(v11) = *((_WORD *)&Flink->Flink
                            + (v11 & 0xF)
                            + *((unsigned __int16 *)&Flink->Flink
                              + ((unsigned __int8)v11 >> 4)
                              + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v11 >> 8))))
                          + v11;
          }
        }
        else
        {
          LOWORD(v11) = v11 - 32;
        }
      }
      DestinationString->Buffer[i] = v11;
    }
    DestinationString->Length = SourceString->Length;
  }
  else
  {
    DestinationString->Length = 0;
  }
  return 0;
}
