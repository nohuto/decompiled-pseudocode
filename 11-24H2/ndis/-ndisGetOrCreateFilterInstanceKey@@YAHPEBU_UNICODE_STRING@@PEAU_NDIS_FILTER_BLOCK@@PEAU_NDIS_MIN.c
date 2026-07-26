/*
 * XREFs of ?ndisGetOrCreateFilterInstanceKey@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@EPEAEPEAU1@@Z @ 0x14006B640
 * Callers:
 *     NdisOpenConfigurationEx @ 0x140044A20 (NdisOpenConfigurationEx.c)
 *     ?ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008BA00 (-ndisCreateFilterInstanceRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MIN.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqL @ 0x140045670 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_dd @ 0x14005AD40 (WPP_RECORDER_SF_dd_ea_14005AD40.c)
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x140069B30 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall ndisGetOrCreateFilterInstanceKey(
        const struct _UNICODE_STRING *a1,
        struct _NDIS_FILTER_BLOCK *a2,
        struct _NDIS_MINIPORT_BLOCK *a3,
        char a4,
        unsigned __int8 *a5,
        struct _UNICODE_STRING *a6)
{
  unsigned __int8 *v6; // rax
  unsigned int v7; // ebx
  struct _NDIS_FILTER_BLOCK *v9; // r8
  int v10; // edx
  char v11; // r14
  char v12; // r15
  char v13; // r12
  unsigned __int16 *v14; // r13
  _NDIS_FILTER_BLOCK *LowerFilter; // rdi
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rdx
  wchar_t *Pool2; // rax
  NTSTATUS v19; // edi
  ULONG i; // edi
  NTSTATUS v21; // eax
  _NDIS_FILTER_DRIVER_BLOCK *v22; // rcx
  int v23; // eax
  int v24; // edx
  NTSTATUS RegistryValues; // edi
  PUNICODE_STRING v26; // rdi
  unsigned __int16 v27; // ax
  __int64 v28; // rax
  NTSTATUS RegistryKey; // eax
  wchar_t *Buffer; // rcx
  char v31[8]; // [rsp+30h] [rbp-D0h]
  int v35; // [rsp+64h] [rbp-9Ch]
  _UNICODE_STRING String1; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v37; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  ULONG ResultLength; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v40; // [rsp+9Ch] [rbp-64h]
  ULONG v41; // [rsp+A0h] [rbp-60h]
  HANDLE KeyHandle; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int8 *v43; // [rsp+B0h] [rbp-50h]
  _UNICODE_STRING UnicodeString; // [rsp+B8h] [rbp-48h] BYREF
  _UNICODE_STRING GuidString; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING SourceString; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v48; // [rsp+F8h] [rbp-8h] BYREF
  PUNICODE_STRING Destination; // [rsp+108h] [rbp+8h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+110h] [rbp+10h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[3]; // [rsp+140h] [rbp+40h] BYREF

  v6 = a5;
  v7 = 0;
  v9 = a2;
  v10 = (int)a1;
  v43 = a5;
  SourceString.Buffer = (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\";
  v11 = 0;
  Destination = a6;
  v12 = 0;
  v48.Buffer = (wchar_t *)L"\\";
  *(_QWORD *)&GuidString.Length = 0LL;
  v13 = 0;
  GuidString.Buffer = 0LL;
  v14 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&SourceString.Length = 6946920LL;
  *(_QWORD *)&v48.Length = 262146LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  ResultLength = 0;
  *(_QWORD *)&v37.Length = 0LL;
  v37.Buffer = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  v40 = 0;
  v35 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x63u,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)a1,
      (char)a3,
      v9);
    v6 = v43;
    v10 = (int)a1;
    LOBYTE(v9) = (_BYTE)a2;
  }
  if ( !a3->BaseMiniport )
  {
    v7 = -1073741811;
    goto LABEL_19;
  }
  *v6 = 0;
  *a6 = 0LL;
  if ( RtlStringFromGUID(&a3->BaseMiniport->InterfaceGuid, &GuidString) )
    goto LABEL_16;
  DestinationString.Length = 0;
  v11 = 1;
  DestinationString.MaximumLength = GuidString.Length
                                  + SourceString.Length
                                  + ndisParameterStr.Length
                                  + ndisFilterAdapterStr.Length
                                  + a1->Length
                                  + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePool2(64LL, DestinationString.MaximumLength, 538985550LL);
  if ( !DestinationString.Buffer )
  {
    v7 = -1073741670;
    v10 = (int)a1;
LABEL_18:
    LOBYTE(v9) = (_BYTE)a2;
    goto LABEL_19;
  }
  RtlCopyUnicodeString(&DestinationString, &SourceString);
  RtlAppendUnicodeStringToString(&DestinationString, a1);
  RtlAppendUnicodeStringToString(&DestinationString, &ndisParameterStr);
  RtlAppendUnicodeStringToString(&DestinationString, &ndisFilterAdapterStr);
  RtlAppendUnicodeStringToString(&DestinationString, &GuidString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes) )
  {
    KeyHandle = 0LL;
    v7 = -1073741823;
LABEL_22:
    RtlFreeUnicodeString(&GuidString);
    v10 = (int)a1;
    LOBYTE(v9) = (_BYTE)a2;
    goto LABEL_23;
  }
  LowerFilter = a2->LowerFilter;
  if ( !LowerFilter )
  {
LABEL_13:
    if ( !RtlStringFromGUID(&a3->InterfaceGuid, &UnicodeString) )
    {
      String1.Length = UnicodeString.Length;
      String1.MaximumLength = UnicodeString.MaximumLength;
      String1.Buffer = (wchar_t *)ExAllocatePool2(64LL, UnicodeString.MaximumLength, 538985550LL);
      if ( String1.Buffer )
      {
        v12 = 1;
        v19 = RtlUpcaseUnicodeString(&String1, &UnicodeString, 0);
        RtlFreeUnicodeString(&UnicodeString);
        if ( !v19 )
          goto LABEL_40;
      }
      else
      {
        RtlFreeUnicodeString(&UnicodeString);
      }
    }
LABEL_16:
    v7 = -1073741823;
LABEL_17:
    v10 = (int)a1;
    goto LABEL_18;
  }
  while ( 1 )
  {
    FilterDriver = LowerFilter->FilterDriver;
    if ( (FilterDriver->Bind._p->_t.FilterBindFlags & 2) == 0 )
      break;
    LowerFilter = LowerFilter->LowerFilter;
    if ( !LowerFilter )
      goto LABEL_13;
  }
  String1.Length = FilterDriver->DefaultFilterCharacteristics.UniqueName.Length;
  String1.MaximumLength = String1.Length + 2;
  Pool2 = (wchar_t *)ExAllocatePool2(64LL, (unsigned __int16)(String1.Length + 2), 538985550LL);
  String1.Buffer = Pool2;
  if ( !Pool2 )
  {
    v7 = -1073741670;
    goto LABEL_17;
  }
  v12 = 1;
  memmove(Pool2, LowerFilter->FilterDriver->DefaultFilterCharacteristics.UniqueName.Buffer, String1.Length);
LABEL_40:
  v14 = (unsigned __int16 *)ExAllocatePool2(66LL, 536LL, 538985550LL);
  if ( !v14 )
  {
    v7 = -1073741670;
    goto LABEL_17;
  }
  for ( i = 0; ; i = v41 + 1 )
  {
    v41 = i;
    if ( i > 0x270F )
      break;
    memset(v14, 0, 0x218uLL);
    ResultLength = 0;
    v21 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, v14, 0x216u, &ResultLength);
    if ( v21 == -2147483622 )
      break;
    if ( v21 )
      goto LABEL_16;
    v37.Length = v14[6];
    v37.Buffer = v14 + 8;
    v37.MaximumLength = v37.Length + 2;
    memset(QueryTable, 0, sizeof(QueryTable));
    QueryTable[0].Flags = 1;
    QueryTable[0].Name = v14 + 8;
    v22 = a2->FilterDriver;
    if ( v22->DefaultFilterCharacteristics.MajorNdisVersion > 6u
      || v22->DefaultFilterCharacteristics.MajorNdisVersion == 6
      && v22->DefaultFilterCharacteristics.MinorNdisVersion >= 0x28u )
    {
      v23 = 256;
      v40 = 0x1000000;
      v35 = 256;
    }
    else
    {
      v23 = v35;
    }
    QueryTable[1].QueryRoutine = 0LL;
    QueryTable[1].Flags = v23 | 0x24;
    QueryTable[2].Name = 0LL;
    QueryTable[1].Name = (wchar_t *)L"LowerComponent";
    QueryTable[1].EntryContext = &String2;
    QueryTable[1].DefaultType = v40;
    RegistryValues = RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, QueryTable, 0LL, 0LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v31 = v35;
      WPP_RECORDER_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v24,
        1u,
        0x64u,
        (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
        RegistryValues,
        *(_QWORD *)v31);
    }
    if ( RegistryValues )
    {
      v7 = -1073741823;
      goto LABEL_74;
    }
    if ( !RtlCompareUnicodeString(&String1, &String2, 1u) )
    {
      *v43 = 1;
      goto LABEL_67;
    }
    if ( String2.Buffer )
    {
      ExFreePoolWithTag(String2.Buffer, 0);
      String2.Buffer = 0LL;
    }
  }
  if ( !*v43 )
  {
    if ( !a4 )
      goto LABEL_16;
    if ( i > 0x270F )
    {
      v7 = -1073741670;
      goto LABEL_17;
    }
    *(_DWORD *)&v37.Length = 655368;
    v37.Buffer = (wchar_t *)ExAllocatePool2(64LL, 10LL, 538985550LL);
    if ( !v37.Buffer )
    {
      v7 = -1073741670;
      goto LABEL_17;
    }
    v13 = 1;
    if ( (unsigned int)RtlStringCchPrintfW(v37.Buffer, (unsigned __int64)v37.MaximumLength >> 1, L"%04d", i) )
      goto LABEL_16;
  }
LABEL_67:
  v26 = Destination;
  v27 = GuidString.Length
      + v48.Length
      + ndisParameterStr.Length
      + ndisFilterAdapterStr.Length
      + a1->Length
      + v37.Length
      + 2;
  Destination->MaximumLength = v27;
  v28 = ExAllocatePool2(64LL, v27, 538985550LL);
  v10 = (int)a1;
  v26->Buffer = (wchar_t *)v28;
  if ( !v28 )
  {
    v7 = -1073741670;
    goto LABEL_18;
  }
  RtlCopyUnicodeString(v26, a1);
  RtlAppendUnicodeStringToString(v26, &ndisParameterStr);
  RtlAppendUnicodeStringToString(v26, &ndisFilterAdapterStr);
  RtlAppendUnicodeStringToString(v26, &GuidString);
  RtlAppendUnicodeStringToString(v26, &v48);
  RtlAppendUnicodeStringToString(v26, &v37);
  if ( !*v43 )
  {
    RegistryKey = RtlCreateRegistryKey(1u, (PWSTR)v26->Buffer);
    Buffer = v26->Buffer;
    if ( RegistryKey )
    {
LABEL_71:
      ExFreePoolWithTag(Buffer, 0);
      *v26 = 0LL;
      goto LABEL_16;
    }
    if ( RtlWriteRegistryValue(1u, (PCWSTR)Buffer, L"LowerComponent", 1u, String1.Buffer, String1.Length + 2) )
    {
      Buffer = v26->Buffer;
      goto LABEL_71;
    }
  }
LABEL_74:
  LOBYTE(v9) = (_BYTE)a2;
  v10 = (int)a1;
LABEL_19:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    v10 = (int)a1;
    LOBYTE(v9) = (_BYTE)a2;
  }
  if ( v11 )
    goto LABEL_22;
LABEL_23:
  if ( DestinationString.Buffer )
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    v10 = (int)a1;
    LOBYTE(v9) = (_BYTE)a2;
  }
  if ( v12 )
  {
    ExFreePoolWithTag(String1.Buffer, 0);
    v10 = (int)a1;
    LOBYTE(v9) = (_BYTE)a2;
  }
  if ( String2.Buffer )
  {
    ExFreePoolWithTag(String2.Buffer, 0);
    v10 = (int)a1;
    LOBYTE(v9) = (_BYTE)a2;
  }
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    v10 = (int)a1;
    LOBYTE(v9) = (_BYTE)a2;
  }
  if ( v13 )
  {
    ExFreePoolWithTag(v37.Buffer, 0);
    v10 = (int)a1;
    LOBYTE(v9) = (_BYTE)a2;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      1u,
      0x65u,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      v10,
      (char)a3,
      (char)v9,
      v7);
  return v7;
}
