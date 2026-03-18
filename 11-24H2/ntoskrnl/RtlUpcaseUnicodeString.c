/*
 * XREFs of RtlUpcaseUnicodeString @ 0x140962470
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x14046B090 (RtlDeriveCapabilitySidsFromName.c)
 *     DifRtlUpcaseUnicodeStringWrapper @ 0x14063AEC0 (DifRtlUpcaseUnicodeStringWrapper.c)
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14072BC90 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiCMGenerateDeviceInstance @ 0x14073136C (PiCMGenerateDeviceInstance.c)
 *     AslStringUpcaseToMultiByteN @ 0x14095ACAC (AslStringUpcaseToMultiByteN.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1409606E4 (SdbMakeIndexKeyFromStringEx.c)
 *     PfCalculateProcessHash @ 0x140962000 (PfCalculateProcessHash.c)
 *     PfSnLogStreamCreate @ 0x1409622A0 (PfSnLogStreamCreate.c)
 *     PfSnLogVolumeCreate @ 0x1409627D0 (PfSnLogVolumeCreate.c)
 *     PiCMOpenClassKey @ 0x140963498 (PiCMOpenClassKey.c)
 *     PipMakeGloballyUniqueId @ 0x140A582C0 (PipMakeGloballyUniqueId.c)
 *     ViCreateProcessCallbackInternal @ 0x140B968D0 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x140B969F8 (ViFaultsAddAppNoDuplicates.c)
 *     PipInitComputerIds @ 0x140C63B74 (PipInitComputerIds.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x140430E00 (AllocateOrValidateUnicodeStringBuffer.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
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
