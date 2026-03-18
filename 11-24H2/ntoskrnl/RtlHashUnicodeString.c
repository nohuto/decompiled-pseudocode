/*
 * XREFs of RtlHashUnicodeString @ 0x1409862A0
 * Callers:
 *     PiUEventHashStringIntoBucket @ 0x14047B794 (PiUEventHashStringIntoBucket.c)
 *     KsepCacheHwIdHash @ 0x1404B3360 (KsepCacheHwIdHash.c)
 *     CarLiveDumpCallBack @ 0x140619C10 (CarLiveDumpCallBack.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14074DC98 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14074F88C (PopPluginQuerySocSubsystemMetadata.c)
 *     SepComputeCachedHandlesEntrySignature @ 0x1408F2D10 (SepComputeCachedHandlesEntrySignature.c)
 *     KsepCacheDeviceHash @ 0x140985E30 (KsepCacheDeviceHash.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x140985E5C (PiDevCfgBuildDriverNodeStrongName.c)
 *     PopPluginQuerySocSubsystemBlockingTime @ 0x1409861C4 (PopPluginQuerySocSubsystemBlockingTime.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140AA3320 (PiCreateDriverSwDeviceCallback.c)
 *     PiDmObjectCreate @ 0x140AC3894 (PiDmObjectCreate.c)
 *     PipInitDeviceOverrideCache @ 0x140C210A8 (PipInitDeviceOverrideCache.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 */

NTSTATUS __stdcall RtlHashUnicodeString(
        PCUNICODE_STRING String,
        BOOLEAN CaseInSensitive,
        ULONG HashAlgorithm,
        PULONG HashValue)
{
  char v5; // dl
  struct _LIST_ENTRY *Flink; // rbx
  unsigned int v7; // r8d
  __int64 v8; // r9
  ULONG v9; // r10d
  unsigned __int16 *v10; // r11
  unsigned __int16 *v11; // r9
  int v12; // r11d
  unsigned __int64 v13; // rax
  int v15; // ecx

  Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
  if ( !v10 )
    return -1073741811;
  if ( !v8 )
    return -1073741811;
  v11 = (unsigned __int16 *)*((_QWORD *)v10 + 1);
  *HashValue = v9;
  v12 = *v10 >> 1;
  if ( v7 > 1 )
    return -1073741811;
  if ( v12 )
  {
    if ( v5 )
    {
      do
      {
        v13 = *v11++;
        --v12;
        if ( (unsigned int)v13 >= 0x61 )
        {
          if ( (unsigned int)v13 > 0x7A )
          {
            if ( Flink )
            {
              if ( (unsigned __int16)v13 >= 0xC0u )
                LOWORD(v13) = *((_WORD *)&Flink->Flink
                              + (v13 & 0xF)
                              + *((unsigned __int16 *)&Flink->Flink
                                + ((unsigned __int8)v13 >> 4)
                                + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v13 >> 8))))
                            + v13;
            }
          }
          else
          {
            LOWORD(v13) = v13 - 32;
          }
        }
        v9 = (unsigned __int16)v13 + 65599 * v9;
      }
      while ( v12 );
    }
    else
    {
      do
      {
        v15 = *v11++;
        v9 = v15 + 65599 * v9;
        --v12;
      }
      while ( v12 );
    }
  }
  *HashValue = v9;
  return 0;
}
