/*
 * XREFs of SiGetEfiSystemDevice @ 0x140816348
 * Callers:
 *     SiGetSystemDisk @ 0x140A2D7C0 (SiGetSystemDisk.c)
 *     SiGetFirmwareSystemPartition @ 0x140A2D870 (SiGetFirmwareSystemPartition.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14040BC90 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x1406A6F10 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x1406A8DD0 (ZwQueryDirectoryObject.c)
 *     SiGetDriveLayoutInformation @ 0x140816014 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140816114 (SiIssueSynchronousIoctl.c)
 *     SiDisambiguateSystemDevice @ 0x14081627C (SiDisambiguateSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x1408167A0 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x140816B50 (SiIsValidDiskDevice.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  int i; // r14d
  NTSTATUS DirectoryObject; // eax
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
  __int64 v26; // [rsp+28h] [rbp-E0h]
  int *v27; // [rsp+30h] [rbp-D8h]
  __int64 v28; // [rsp+38h] [rbp-D0h]
  int v29; // [rsp+48h] [rbp-C0h]
  int v30; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v31; // [rsp+50h] [rbp-B8h]
  int v32; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v33; // [rsp+58h] [rbp-B0h] BYREF
  PVOID P; // [rsp+60h] [rbp-A8h] BYREF
  wchar_t *v35; // [rsp+68h] [rbp-A0h]
  wchar_t **v36; // [rsp+70h] [rbp-98h]
  HANDLE DirectoryHandle; // [rsp+78h] [rbp-90h] BYREF
  __int64 Pool2; // [rsp+80h] [rbp-88h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v41[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v42; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v43; // [rsp+E8h] [rbp-20h]
  __int128 v44; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v45; // [rsp+100h] [rbp-8h]

  v36 = a3;
  v31 = a1;
  v43 = 0LL;
  v3 = a3;
  v32 = 0;
  v4 = 0LL;
  memset(v41, 0, 12);
  DirectoryHandle = 0LL;
  v44 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v45 = 0LL;
  P = 0LL;
  v7 = 0;
  v42 = 0LL;
  v35 = 0LL;
  DestinationString = 0LL;
  LODWORD(v33) = 0;
  memset(&ObjectAttributes, 0, 44);
  v30 = 0;
  v29 = 0;
  Pool2 = ExAllocatePool2(0x100uLL);
  v10 = (wchar_t *)Pool2;
  if ( !Pool2 )
  {
    EspFromFirmware = -1073741801;
    goto LABEL_57;
  }
  if ( (int)SiDisambiguateSystemDevice(&v33, &v30, v8, v9) >= 0 )
  {
    v14 = v30;
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
    v5 = (wchar_t **)ExAllocatePool2(0x100uLL);
    if ( !v5 )
    {
      EspFromFirmware = -1073741801;
      goto LABEL_51;
    }
    v28 = 0LL;
    v27 = &v32;
    LOBYTE(v26) = 1;
    v32 = 0;
    DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)v5);
    EspFromFirmware = DirectoryObject;
    if ( DirectoryObject != 261 )
      break;
    ExFreePoolWithTag(v5, 0);
  }
  if ( (int)(DirectoryObject + 0x80000000) >= 0 && DirectoryObject != -2147483622 )
    goto LABEL_51;
  if ( !*(_WORD *)v5 )
    goto LABEL_43;
  v14 = v30;
  v15 = v5 + 1;
  while ( 2 )
  {
    if ( (unsigned __int8)SiIsValidDiskDevice(*v15, v15[2]) )
    {
      RtlStringCbPrintfW(v10, 0x6AuLL, L"\\Device\\%s\\Partition%lu", *v15, 0LL, v27, v28);
      v43 = 0LL;
      v42 = 0LL;
      if ( (int)SiIssueSynchronousIoctl(v10, 0x700010u, 0LL, 0, &v42, 0x18u) < 0 || DWORD1(v42) != 2 )
      {
        *(_QWORD *)((char *)v41 + 4) = 0LL;
        v16 = 0;
        LODWORD(v41[0]) = 1;
        v44 = 0LL;
        v45 = 0LL;
        if ( (int)SiIssueSynchronousIoctl(v10, 0x2D1400u, v41, 0xCu, &v44, 0x20u) < 0 )
          goto LABEL_19;
        if ( BYTE8(v45) != 15 )
        {
          v16 = BYTE8(v45) == 16;
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
              v19 = v29;
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
                    v35 = *v15;
                  }
                  ++v7;
                  if ( v16 )
                    ++v19;
                }
                v20 += 144;
                --v21;
              }
              while ( v21 );
              v29 = v19;
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
  if ( v7 <= 1 || v29 == 1 )
  {
    v3 = v36;
    v4 = v35;
LABEL_47:
    v23 = v31 != 0;
    v31 = -v31;
    LODWORD(v26) = v23 ? v14 : 0;
    if ( v4 )
      v24 = RtlStringCbPrintfW(v10, 0x6AuLL, L"\\Device\\%s\\Partition%lu", v4, v26);
    else
      v24 = RtlStringCbPrintfW(v10, 0x6AuLL, L"\\Device\\Harddisk%lu\\Partition%lu", (unsigned int)v33, v26);
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
  EspFromFirmware = SiGetEspFromFirmware(v31, v10, 0LL, 1LL, v26);
  if ( EspFromFirmware < 0 )
  {
    EspFromFirmware = -1073740719;
    goto LABEL_51;
  }
  *v36 = v10;
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
