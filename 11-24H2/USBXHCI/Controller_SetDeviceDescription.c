/*
 * XREFs of Controller_SetDeviceDescription @ 0x140078590
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x140043830 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     RtlStringCbPrintfW @ 0x140044340 (RtlStringCbPrintfW.c)
 *     RtlUnalignedStringCbLengthW @ 0x140044498 (RtlUnalignedStringCbLengthW.c)
 *     RootHub_GetHighestUsbVersionSupported @ 0x140049758 (RootHub_GetHighestUsbVersionSupported.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1400766A0 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 */

void __fastcall Controller_SetDeviceDescription(_QWORD *a1)
{
  BYTE *v2; // r13
  __int16 HighestUsbVersionSupported; // ax
  unsigned __int8 v4; // bl
  unsigned int i; // edx
  char *v6; // rcx
  unsigned int j; // r14d
  char **v8; // rdi
  size_t v9; // rdx
  int v10; // r9d
  size_t v11; // rdx
  BYTE *Text; // r12
  size_t v13; // rax
  rsize_t v14; // r14
  size_t v15; // rdi
  wchar_t *Pool2; // rax
  __int64 v17; // rax
  size_t v18; // rdx
  void *v19; // r12
  int v20; // r9d
  BYTE *v21; // rbx
  wchar_t *v22; // rax
  int v23; // edx
  struct _DEVICE_OBJECT *v24; // rax
  NTSTATUS v25; // eax
  int v26; // edx
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+28h] [rbp-89h]
  PVOID Data; // [rsp+38h] [rbp-79h]
  int v29; // [rsp+40h] [rbp-71h]
  int v30; // [rsp+48h] [rbp-69h]
  int v31; // [rsp+50h] [rbp-61h]
  int v32; // [rsp+58h] [rbp-59h]
  BYTE *P; // [rsp+68h] [rbp-49h]
  unsigned __int8 v34; // [rsp+71h] [rbp-40h]
  size_t pcbLength; // [rsp+78h] [rbp-39h] BYREF
  size_t v36; // [rsp+80h] [rbp-31h] BYREF
  PMESSAGE_RESOURCE_ENTRY v37; // [rsp+88h] [rbp-29h] BYREF
  PMESSAGE_RESOURCE_ENTRY v38; // [rsp+90h] [rbp-21h] BYREF
  rsize_t MaxCount; // [rsp+98h] [rbp-19h]
  _OWORD v40[3]; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v41; // [rsp+D0h] [rbp+1Fh]
  int v42; // [rsp+D8h] [rbp+27h]

  v37 = 0LL;
  v40[0] = *(_OWORD *)L"@System32\\drivers\\usbxhci.sys";
  v38 = 0LL;
  v2 = 0LL;
  v42 = *(_DWORD *)L"s";
  v40[1] = *(_OWORD *)L"2\\drivers\\usbxhci.sys";
  v36 = 0LL;
  v40[2] = *(_OWORD *)L"s\\usbxhci.sys";
  v41 = *(_QWORD *)L"i.sys";
  if ( !Controller_DriverInstalledDueToCompatibleIdMatch(a1) )
    return;
  HighestUsbVersionSupported = RootHub_GetHighestUsbVersionSupported(a1[19]);
  v4 = HighestUsbVersionSupported;
  v34 = HIBYTE(HighestUsbVersionSupported);
  if ( *((_DWORD *)a1 + 161) == 1 )
  {
    for ( i = 0; i < 0xB; ++i )
    {
      v6 = (char *)&PciVendorIdTable + 16 * i;
      if ( *(_WORD *)v6 == *((_WORD *)a1 + 324) )
      {
        v36 = *((_QWORD *)v6 + 1);
        break;
      }
    }
  }
  else
  {
    for ( j = 0; j < 5; ++j )
    {
      v8 = &(&AcpiVendorIdTable)[2 * j];
      if ( !_stricmp(*v8, (const char *)a1 + 704) )
      {
        v36 = (size_t)v8[1];
        break;
      }
    }
  }
  if ( RtlFindMessage(
         *(PVOID *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 24LL),
         0xBu,
         0,
         0x40010001u,
         &v37) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 150;
LABEL_16:
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_(a1[9], v9, 4, v10, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
      return;
    }
    return;
  }
  v9 = v37->Length - 4LL;
  pcbLength = v9;
  if ( v9 <= 0xFFFFFFFE )
  {
    if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v37->Text, v9, &pcbLength) < 0 )
      return;
    v11 = pcbLength;
    Text = v37->Text;
    P = v37->Text;
    if ( pcbLength >= 4 )
    {
      v13 = pcbLength >> 1;
      if ( *(_WORD *)&Text[2 * (pcbLength >> 1) - 2] == 10 )
      {
        v14 = v13 - 2;
        if ( *(_WORD *)&Text[2 * v13 - 4] == 13 )
        {
          v15 = pcbLength - 2;
          Pool2 = (wchar_t *)ExAllocatePool2(256LL, pcbLength - 2, 1229146200LL);
          P = (BYTE *)Pool2;
          if ( !Pool2 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v10 = 152;
              goto LABEL_16;
            }
            return;
          }
          wcsncpy_s(Pool2, v15 >> 1, (const wchar_t *)v37->Text, v14);
          v11 = pcbLength;
        }
      }
    }
    if ( v36 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( *(_WORD *)(v36 + 2 * v17) );
      pcbLength = v11 + 112 + 2 * v17;
      v19 = (void *)ExAllocatePool2(256LL, pcbLength, 1229146200LL);
      if ( !v19 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_35:
          v21 = P;
LABEL_36:
          if ( v21 )
            ExFreePoolWithTag(v21, 0x49434858u);
          return;
        }
        v20 = 153;
LABEL_34:
        LOBYTE(v18) = 2;
        WPP_RECORDER_SF_(a1[9], v18, 4, v20, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
        goto LABEL_35;
      }
      v32 = *((unsigned __int8 *)a1 + 721);
      v31 = *((unsigned __int8 *)a1 + 720);
      v30 = v34;
      v29 = v4;
      Data = (PVOID)v36;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_(a1[9], v11, 4, 154, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
      }
      if ( RtlFindMessage(
             *(PVOID *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 24LL),
             0xBu,
             0,
             0x40010002u,
             &v38) < 0 )
        goto LABEL_35;
      v18 = v38->Length - 4LL;
      v36 = v18;
      if ( v18 > 0xFFFFFFFE )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_35;
        v20 = 155;
        goto LABEL_34;
      }
      if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v38->Text, v18, &v36) < 0 )
        goto LABEL_35;
      pcbLength += 108 + v36;
      v19 = (void *)ExAllocatePool2(256LL, pcbLength, 1229146200LL);
      if ( !v19 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_35;
        v20 = 156;
        goto LABEL_34;
      }
      v2 = v38->Text;
      if ( v36 >= 4 && *(_WORD *)&v2[2 * (v36 >> 1) - 2] == 10 )
      {
        MaxCount = (v36 >> 1) - 2;
        if ( *(_WORD *)&v2[2 * MaxCount] == 13 )
        {
          v36 -= 2LL;
          v22 = (wchar_t *)ExAllocatePool2(256LL, v36, 1229146200LL);
          v2 = (BYTE *)v22;
          if ( !v22 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v23) = 2;
              WPP_RECORDER_SF_(a1[9], v23, 4, 157, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
            }
            v21 = P;
            goto LABEL_57;
          }
          wcsncpy_s(v22, v36 >> 1, (const wchar_t *)v38->Text, MaxCount);
        }
      }
      v32 = *((unsigned __int8 *)a1 + 721);
      v31 = *((unsigned __int8 *)a1 + 720);
      v30 = v34;
      v29 = v4;
      Data = v2;
    }
    v21 = P;
    LODWORD(MessageResourceEntry) = 1073807361;
    if ( RtlStringCbPrintfW(
           (NTSTRSAFE_PWSTR)v19,
           pcbLength,
           L"%s,#%d;%s;(%s,%X.%X,%X.%X)",
           v40,
           MessageResourceEntry,
           P,
           Data,
           v29,
           v30,
           v31,
           v32) >= 0
      && RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v19, pcbLength, &pcbLength) >= 0 )
    {
      v24 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 264))(
                                       WdfDriverGlobals,
                                       *a1);
      v25 = IoSetDevicePropertyData(v24, &DEVPKEY_Device_FriendlyName, 0, 1u, 0x19u, pcbLength + 2, v19);
      if ( v25 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v26) = 3;
        WPP_RECORDER_SF_d(a1[9], v26, 4, 158, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v25);
      }
    }
LABEL_57:
    ExFreePoolWithTag(v19, 0x49434858u);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x49434858u);
    goto LABEL_36;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = 151;
    goto LABEL_16;
  }
}
