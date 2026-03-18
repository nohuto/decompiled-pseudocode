/*
 * XREFs of OSReadRegValue @ 0x1400B6898
 * Callers:
 *     AMLIAddNextNamespaceOverrideObject @ 0x14006C350 (AMLIAddNextNamespaceOverrideObject.c)
 *     ACPIInitGlobalHeapSize @ 0x140098914 (ACPIInitGlobalHeapSize.c)
 *     AcpiUseFlexibleOscHandoff @ 0x1400A0D78 (AcpiUseFlexibleOscHandoff.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1400A37D8 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1400A3A38 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     ACPIInitShutdownNotification @ 0x1400A6704 (ACPIInitShutdownNotification.c)
 *     ACPIRootInitialize @ 0x1400A67CC (ACPIRootInitialize.c)
 *     ACPIThermalGetParameter @ 0x1400B668C (ACPIThermalGetParameter.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1400B6E24 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIInitializeAMLI @ 0x1400C4A38 (ACPIInitializeAMLI.c)
 *     AMLIInitialize @ 0x1400C4F80 (AMLIInitialize.c)
 *     ACPIInitReadRegistryKeys @ 0x1400C5868 (ACPIInitReadRegistryKeys.c)
 *     AcpiDiagInitialize @ 0x1400C6398 (AcpiDiagInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x14004F6F8 (WPP_RECORDER_SF_DD.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     OSOpenHandle @ 0x1400B7118 (OSOpenHandle.c)
 */

__int64 __fastcall OSReadRegValue(PCSZ SourceString, void *a2, _BYTE *a3, unsigned int *a4)
{
  unsigned int v7; // ebx
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  unsigned int v11; // r13d
  WCHAR *Pool2; // rdi
  ULONG Length; // ebx
  NTSTATUS v14; // eax
  unsigned int v15; // eax
  const WCHAR *v16; // r15
  ULONG v17; // esi
  unsigned int v18; // ebx
  __int64 v19; // rcx
  NTSTATUS v20; // eax
  PULONG ResultLength; // [rsp+28h] [rbp-48h]
  NTSTATUS v22; // [rsp+40h] [rbp-30h]
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-20h] BYREF
  struct _STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  ULONG v26; // [rsp+A8h] [rbp+38h] BYREF

  v26 = 0;
  DestinationString = 0LL;
  ValueName = 0LL;
  if ( !a2 )
  {
    v7 = OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters");
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xBu,
        0x13u,
        (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
        v7);
    return v7;
  }
  RtlInitAnsiString(&DestinationString, SourceString);
  v9 = RtlAnsiStringToUnicodeString(&ValueName, &DestinationString, 1u);
  v7 = v9;
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xBu,
        0x14u,
        (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
        v9);
    if ( !a2 )
      ZwClose(a2);
    return v7;
  }
  v10 = ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformationAlign64, 0LL, 0, &v26);
  v11 = -2147483643;
  v7 = v10;
  if ( v10 != -2147483643 && v10 != -1073741789 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(ResultLength) = v10;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xBu,
        0x15u,
        (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
        ResultLength);
    }
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(a2);
    if ( (v7 & 0x80000000) == 0 )
      return (unsigned int)-1073741823;
    return v7;
  }
  while ( 1 )
  {
    if ( v7 != -2147483643 )
    {
      Pool2 = 0LL;
      if ( v7 != -1073741789 )
        goto LABEL_31;
    }
    Length = v26;
    Pool2 = (WCHAR *)ExAllocatePool2(256LL, v26, 1299211073LL);
    if ( !Pool2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(ResultLength) = v26;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x16u,
          0x16u,
          (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
          ResultLength);
      }
      RtlFreeUnicodeString(&ValueName);
      if ( !a2 )
        ZwClose(a2);
      return 3221225626LL;
    }
    v14 = ZwQueryValueKey(a2, &ValueName, KeyValuePartialInformationAlign64, Pool2, Length, &v26);
    v7 = v14;
    if ( v14 != -2147483643 && v14 != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0);
  }
  if ( v14 >= 0 )
  {
LABEL_31:
    RtlFreeUnicodeString(&ValueName);
    if ( !a2 )
      ZwClose(a2);
    if ( *(_DWORD *)Pool2 == 1 || *(_DWORD *)Pool2 == 7 )
    {
      v16 = Pool2 + 4;
      v17 = (v26 - 8) >> 1;
      v18 = 0;
      if ( v17 )
      {
        do
        {
          v19 = v17 - 1;
          if ( !v16[v19] )
            break;
          --v17;
        }
        while ( (_DWORD)v19 );
      }
      while ( v17 && *v16 )
      {
        RtlInitUnicodeString(&ValueName, v16);
        v20 = RtlUnicodeStringToAnsiString(&DestinationString, &ValueName, 1u);
        v22 = v20;
        if ( v20 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(ResultLength) = v20;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0x16u,
              0x18u,
              (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
              ResultLength);
            v20 = v22;
          }
          v11 = v20;
          goto LABEL_52;
        }
        v18 += DestinationString.MaximumLength;
        if ( *a4 >= v18 )
        {
          memmove(a3, DestinationString.Buffer, DestinationString.MaximumLength);
          a3 += DestinationString.MaximumLength;
        }
        RtlFreeAnsiString(&DestinationString);
        v17 -= ValueName.Length >> 1;
        v16 += (unsigned __int64)ValueName.Length >> 1;
        if ( *(_DWORD *)Pool2 == 7 )
        {
          if ( !v17 )
            break;
          ++v16;
          --v17;
        }
      }
      if ( !v18 )
      {
        v18 = 1;
        if ( *a4 )
          *a3++ = 0;
      }
      if ( *(_DWORD *)Pool2 == 7 && *a4 >= ++v18 )
        *a3 = 0;
      ExFreePoolWithTag(Pool2, 0);
      if ( *a4 >= v18 )
      {
        *a4 = v18;
        return 0LL;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(ResultLength) = *a4;
        WPP_RECORDER_SF_DD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xBu,
          0x19u,
          (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
          ResultLength,
          v18);
      }
      *a4 = v18;
    }
    else
    {
      v15 = *((_DWORD *)Pool2 + 1);
      if ( *a4 >= v15 )
      {
        memmove(a3, Pool2 + 4, v15);
        *a4 = *((_DWORD *)Pool2 + 1);
        ExFreePoolWithTag(Pool2, 0);
        return 0LL;
      }
      *a4 = v15;
LABEL_52:
      ExFreePoolWithTag(Pool2, 0);
    }
    return v11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(ResultLength) = v14;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x15u,
      0x17u,
      (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
      ResultLength);
  }
  RtlFreeUnicodeString(&ValueName);
  if ( !a2 )
    ZwClose(a2);
  ExFreePoolWithTag(Pool2, 0);
  return v7;
}
