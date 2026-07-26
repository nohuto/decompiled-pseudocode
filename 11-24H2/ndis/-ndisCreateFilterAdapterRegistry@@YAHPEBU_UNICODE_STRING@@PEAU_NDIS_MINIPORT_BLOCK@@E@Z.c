/*
 * XREFs of ?ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x14002A980
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     ?ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z @ 0x14009A280 (-ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z.c)
 */

__int64 __fastcall ndisCreateFilterAdapterRegistry(
        const struct _UNICODE_STRING *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        unsigned __int8 a3)
{
  int v6; // edx
  unsigned int v7; // ebx
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rcx
  NTSTATUS v9; // edi
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-69h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-59h] BYREF
  _UNICODE_STRING GuidString; // [rsp+60h] [rbp-49h] BYREF
  _BYTE QueryTable[64]; // [rsp+70h] [rbp-39h] BYREF
  __int128 v15; // [rsp+B0h] [rbp+7h]
  __int128 v16; // [rsp+C0h] [rbp+17h]
  __int128 v17; // [rsp+D0h] [rbp+27h]
  int v18; // [rsp+128h] [rbp+7Fh] BYREF

  if ( RtlIsStateSeparationEnabled() )
    return 0LL;
  v7 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  v18 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      1,
      90,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1,
      (char)a2);
  }
  BaseMiniport = a2->BaseMiniport;
  if ( BaseMiniport )
  {
    if ( RtlStringFromGUID(&BaseMiniport->InterfaceGuid, &GuidString)
      || (v9 = RtlUpcaseUnicodeString(&DestinationString, &GuidString, 1u), RtlFreeUnicodeString(&GuidString), v9) )
    {
      v7 = -1073741823;
    }
    else
    {
      Destination.MaximumLength = DestinationString.Length
                                + ndisParameterStr.Length
                                + ndisFilterAdapterStr.Length
                                + a1->Length
                                + 2;
      Destination.Buffer = (wchar_t *)ExAllocatePool2(64LL, Destination.MaximumLength, 538985550LL);
      if ( Destination.Buffer )
      {
        RtlCopyUnicodeString(&Destination, a1);
        RtlAppendUnicodeStringToString(&Destination, &ndisParameterStr);
        if ( RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer) )
          goto LABEL_9;
        *(_QWORD *)&QueryTable[16] = L"SkipNdisAdaptersKeyGeneration";
        *(_OWORD *)QueryTable = 0LL;
        *(_QWORD *)&QueryTable[24] = &v18;
        memset(&QueryTable[32], 0, 32);
        *(_DWORD *)&QueryTable[8] = 292;
        v15 = 0uLL;
        *(_DWORD *)&QueryTable[32] = 0x4000000;
        v16 = 0LL;
        v17 = 0LL;
        if ( RtlQueryRegistryValuesEx(1u, (PCWSTR)Destination.Buffer, (PRTL_QUERY_REGISTRY_TABLE)QueryTable, 0LL, 0LL)
          || v18 != 1 )
        {
LABEL_9:
          RtlAppendUnicodeStringToString(&Destination, &ndisFilterAdapterStr);
          if ( RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer) && RtlCreateRegistryKey(1u, (PWSTR)Destination.Buffer) )
          {
            v7 = -1073741823;
          }
          else
          {
            RtlAppendUnicodeStringToString(&Destination, &DestinationString);
            if ( RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer) )
            {
              if ( RtlCreateRegistryKey(1u, (PWSTR)Destination.Buffer) )
                v7 = -1073741823;
              else
                v7 = ndisSetAllFilterDefaultParameters(a1, &Destination, &ndisFilterAdapterParamsStr, a3);
            }
          }
        }
      }
      else
      {
        v7 = -1073741670;
      }
      RtlFreeUnicodeString(&DestinationString);
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      1,
      91,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1,
      (char)a2,
      v7);
  }
  return v7;
}
