/*
 * XREFs of SiGetEfiSystemDevice @ 0x140816A88
 * Callers:
 *     SiGetSystemDisk @ 0x140A22200 (SiGetSystemDisk.c)
 *     SiGetFirmwareSystemPartition @ 0x140A222B0 (SiGetFirmwareSystemPartition.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1406A7EB0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1406A9D70 (ZwQueryDirectoryObject.c)
 *     SiGetDriveLayoutInformation @ 0x140816754 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140816854 (SiIssueSynchronousIoctl.c)
 *     SiDisambiguateSystemDevice @ 0x1408169BC (SiDisambiguateSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x140816EE0 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x140817290 (SiIsValidDiskDevice.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetEfiSystemDevice(unsigned int a1, __int64 a2, wchar_t **a3)
{
  wchar_t **v3; // r14
  wchar_t *v4; // rbx
  wchar_t **v5; // r15
  PVOID v6; // rsi
  unsigned int v7; // r13d
  __int64 v8; // r8
  int v9; // r9d
  wchar_t *v10; // rdi
  NTSTATUS EspFromFirmware; // ebx
  ULONG i; // r14d
  NTSTATUS v13; // eax
  int v14; // r12d
  wchar_t **v15; // rbx
  bool v16; // r14
  int DriveLayoutInformation; // eax
  unsigned int v18; // eax
  int v19; // edi
  char *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  bool v23; // cf
  NTSTATUS v24; // eax
  BOOLEAN RestartScan[8]; // [rsp+28h] [rbp-E0h]
  int v27; // [rsp+48h] [rbp-C0h]
  int v28; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v29; // [rsp+50h] [rbp-B8h]
  ULONG Context; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  PVOID P; // [rsp+60h] [rbp-A8h] BYREF
  wchar_t *v33; // [rsp+68h] [rbp-A0h]
  wchar_t **v34; // [rsp+70h] [rbp-98h]
  HANDLE DirectoryHandle; // [rsp+78h] [rbp-90h] BYREF
  __int64 Pool2; // [rsp+80h] [rbp-88h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v39[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v40; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v41; // [rsp+E8h] [rbp-20h]
  __int128 v42; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v43; // [rsp+100h] [rbp-8h]

  v34 = a3;
  v29 = a1;
  v41 = 0LL;
  v3 = a3;
  Context = 0;
  v4 = 0LL;
  memset(v39, 0, 12);
  DirectoryHandle = 0LL;
  v42 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v43 = 0LL;
  P = 0LL;
  v7 = 0;
  v40 = 0LL;
  v33 = 0LL;
  DestinationString = 0LL;
  LODWORD(v31) = 0;
  memset(&ObjectAttributes, 0, 44);
  v28 = 0;
  v27 = 0;
  Pool2 = ExAllocatePool2(0x100uLL, 0x6AuLL, 0x4B505953u);
  v10 = (wchar_t *)Pool2;
  if ( !Pool2 )
  {
    EspFromFirmware = -1073741801;
    goto LABEL_57;
  }
  if ( (int)SiDisambiguateSystemDevice(&v31, &v28, v8, v9) >= 0 )
  {
    v14 = v28;
    goto LABEL_47;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  EspFromFirmware = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( EspFromFirmware < 0 )
    goto LABEL_51;
  for ( i = 4096; ; i += 4096 )
  {
    v5 = (wchar_t **)ExAllocatePool2(0x100uLL, i, 0x4B505953u);
    if ( !v5 )
    {
      EspFromFirmware = -1073741801;
      goto LABEL_51;
    }
    Context = 0;
    v13 = ZwQueryDirectoryObject(DirectoryHandle, v5, i, 0, 1u, &Context, 0LL);
    EspFromFirmware = v13;
    if ( v13 != 261 )
      break;
    ExFreePoolWithTag(v5, 0);
  }
  if ( (int)(v13 + 0x80000000) >= 0 && v13 != -2147483622 )
    goto LABEL_51;
  if ( !*(_WORD *)v5 )
    goto LABEL_43;
  v14 = v28;
  v15 = v5 + 1;
  while ( 2 )
  {
    if ( (unsigned __int8)SiIsValidDiskDevice(*v15, v15[2]) )
    {
      RtlStringCbPrintfW(v10, 0x6AuLL, L"\\Device\\%s\\Partition%lu", *v15, 0LL);
      v41 = 0LL;
      v40 = 0LL;
      if ( (int)SiIssueSynchronousIoctl(v10, 0x700010u, 0LL, 0, &v40, 0x18u) < 0 || DWORD1(v40) != 2 )
      {
        *(_QWORD *)((char *)v39 + 4) = 0LL;
        v16 = 0;
        LODWORD(v39[0]) = 1;
        v42 = 0LL;
        v43 = 0LL;
        if ( (int)SiIssueSynchronousIoctl(v10, 0x2D1400u, v39, 0xCu, &v42, 0x20u) < 0 )
          goto LABEL_19;
        if ( BYTE8(v43) != 15 )
        {
          v16 = BYTE8(v43) == 16;
LABEL_19:
          if ( v6 )
          {
            ExFreePoolWithTag(v6, 0);
            P = 0LL;
          }
          DriveLayoutInformation = SiGetDriveLayoutInformation(v10, &P);
          v6 = P;
          if ( DriveLayoutInformation >= 0 && *(_DWORD *)P == 1 )
          {
            v18 = *((_DWORD *)P + 1);
            if ( v18 )
            {
              v19 = v27;
              v20 = (char *)P + 72;
              v21 = v18;
              do
              {
                v22 = *((_QWORD *)v20 + 1) - *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1;
                if ( !v22 )
                  v22 = *((_QWORD *)v20 + 2) - *(_QWORD *)PARTITION_SYSTEM_GUID.Data4;
                if ( !v22 )
                {
                  if ( !v7 || !v19 && v16 )
                  {
                    v14 = *(_DWORD *)v20;
                    v33 = *v15;
                  }
                  ++v7;
                  if ( v16 )
                    ++v19;
                }
                v20 += 144;
                --v21;
              }
              while ( v21 );
              v27 = v19;
              v10 = (wchar_t *)Pool2;
            }
          }
        }
      }
    }
    v15 += 4;
    if ( *((_WORD *)v15 - 4) )
      continue;
    break;
  }
  if ( !v7 )
  {
LABEL_43:
    EspFromFirmware = -1073740718;
    goto LABEL_51;
  }
  if ( v7 <= 1 || v27 == 1 )
  {
    v3 = v34;
    v4 = v33;
LABEL_47:
    v23 = v29 != 0;
    v29 = -v29;
    *(_DWORD *)RestartScan = v23 ? v14 : 0;
    if ( v4 )
      v24 = RtlStringCbPrintfW(v10, 0x6AuLL, L"\\Device\\%s\\Partition%lu", v4, *(_QWORD *)RestartScan);
    else
      v24 = RtlStringCbPrintfW(
              v10,
              0x6AuLL,
              L"\\Device\\Harddisk%lu\\Partition%lu",
              (unsigned int)v31,
              *(_QWORD *)RestartScan);
    EspFromFirmware = v24;
    if ( v24 >= 0 )
    {
      *v3 = v10;
      goto LABEL_53;
    }
LABEL_51:
    ExFreePoolWithTag(v10, 0);
    goto LABEL_53;
  }
  EspFromFirmware = SiGetEspFromFirmware(v29, v10, 0LL, 1LL);
  if ( EspFromFirmware < 0 )
  {
    EspFromFirmware = -1073740719;
    goto LABEL_51;
  }
  *v34 = v10;
LABEL_53:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
LABEL_57:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)EspFromFirmware;
}
