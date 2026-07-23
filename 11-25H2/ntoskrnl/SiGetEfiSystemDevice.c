/*
 * XREFs of SiGetEfiSystemDevice @ 0x140806448
 * Callers:
 *     SiGetSystemDisk @ 0x140A23FA0 (SiGetSystemDisk.c)
 *     SiGetFirmwareSystemPartition @ 0x140A24050 (SiGetFirmwareSystemPartition.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404520 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x14069BC40 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14069DB00 (ZwQueryDirectoryObject.c)
 *     SiGetDriveLayoutInformation @ 0x140806114 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140806214 (SiIssueSynchronousIoctl.c)
 *     SiDisambiguateSystemDevice @ 0x14080637C (SiDisambiguateSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x1408068A0 (SiGetEspFromFirmware.c)
 *     SiIsValidDiskDevice @ 0x140806C50 (SiIsValidDiskDevice.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetEfiSystemDevice(unsigned int a1, __int64 a2, wchar_t **a3)
{
  wchar_t **v3; // r15
  wchar_t *v4; // rbx
  wchar_t **v5; // r14
  PVOID v6; // rsi
  unsigned int v7; // r13d
  __int64 v8; // r8
  int v9; // r9d
  wchar_t *v10; // rdi
  NTSTATUS EspFromFirmware; // ebx
  ULONG i; // r15d
  NTSTATUS v13; // eax
  int v14; // r12d
  wchar_t **v15; // rbx
  bool v16; // r15
  int DriveLayoutInformation; // eax
  unsigned int v18; // eax
  int v19; // edi
  char *v20; // rcx
  __int64 v21; // rdx
  bool v22; // cf
  NTSTATUS v23; // eax
  BOOLEAN RestartScan[8]; // [rsp+28h] [rbp-E0h]
  int v26; // [rsp+48h] [rbp-C0h]
  int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v28; // [rsp+50h] [rbp-B8h]
  ULONG Context; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v30; // [rsp+58h] [rbp-B0h] BYREF
  PVOID P; // [rsp+60h] [rbp-A8h] BYREF
  wchar_t *v32; // [rsp+68h] [rbp-A0h]
  wchar_t **v33; // [rsp+70h] [rbp-98h]
  HANDLE DirectoryHandle; // [rsp+78h] [rbp-90h] BYREF
  __int64 Pool2; // [rsp+80h] [rbp-88h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v38[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v39; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v40; // [rsp+E8h] [rbp-20h]
  __int128 v41; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v42; // [rsp+100h] [rbp-8h]

  v33 = a3;
  v28 = a1;
  v40 = 0LL;
  v3 = a3;
  Context = 0;
  v4 = 0LL;
  memset(v38, 0, 12);
  DirectoryHandle = 0LL;
  v41 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v42 = 0LL;
  P = 0LL;
  v7 = 0;
  v39 = 0LL;
  v32 = 0LL;
  DestinationString = 0LL;
  LODWORD(v30) = 0;
  memset(&ObjectAttributes, 0, 44);
  v27 = 0;
  v26 = 0;
  Pool2 = ExAllocatePool2(0x100uLL);
  v10 = (wchar_t *)Pool2;
  if ( !Pool2 )
  {
    EspFromFirmware = -1073741801;
    goto LABEL_56;
  }
  if ( (int)SiDisambiguateSystemDevice(&v30, &v27, v8, v9) >= 0 )
  {
    v14 = v27;
    goto LABEL_46;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Device");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  EspFromFirmware = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( EspFromFirmware < 0 )
    goto LABEL_50;
  for ( i = 4096; ; i += 4096 )
  {
    v5 = (wchar_t **)ExAllocatePool2(0x100uLL);
    if ( !v5 )
    {
      EspFromFirmware = -1073741801;
      goto LABEL_50;
    }
    Context = 0;
    v13 = ZwQueryDirectoryObject(DirectoryHandle, v5, i, 0, 1u, &Context, 0LL);
    EspFromFirmware = v13;
    if ( v13 != 261 )
      break;
    ExFreePoolWithTag(v5, 0);
  }
  if ( (int)(v13 + 0x80000000) >= 0 && v13 != -2147483622 )
    goto LABEL_50;
  if ( !*(_WORD *)v5 )
  {
LABEL_43:
    EspFromFirmware = -1073740718;
    goto LABEL_50;
  }
  v14 = v27;
  v15 = v5 + 1;
  do
  {
    if ( (unsigned __int8)SiIsValidDiskDevice(*v15, v15[2]) )
    {
      RtlStringCbPrintfW(v10, 0x6AuLL, L"\\Device\\%s\\Partition%lu", *v15, 0LL);
      v40 = 0LL;
      v39 = 0LL;
      if ( (int)SiIssueSynchronousIoctl(v10, 0x700010u, 0LL, 0, &v39, 0x18u) < 0 || DWORD1(v39) != 2 )
      {
        *(_QWORD *)((char *)v38 + 4) = 0LL;
        v16 = 0;
        LODWORD(v38[0]) = 1;
        v41 = 0LL;
        v42 = 0LL;
        if ( (int)SiIssueSynchronousIoctl(v10, 0x2D1400u, v38, 0xCu, &v41, 0x20u) >= 0 )
        {
          if ( BYTE8(v42) == 15 )
            goto LABEL_36;
          v16 = BYTE8(v42) == 16;
        }
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
            v19 = v26;
            v20 = (char *)P + 72;
            v21 = v18;
            do
            {
              if ( *((_QWORD *)v20 + 1) == *(_QWORD *)&PARTITION_SYSTEM_GUID.Data1
                && *((_QWORD *)v20 + 2) == *(_QWORD *)PARTITION_SYSTEM_GUID.Data4 )
              {
                if ( !v7 || !v19 && v16 )
                {
                  v14 = *(_DWORD *)v20;
                  v32 = *v15;
                }
                ++v7;
                if ( v16 )
                  ++v19;
              }
              v20 += 144;
              --v21;
            }
            while ( v21 );
            v26 = v19;
            v10 = (wchar_t *)Pool2;
          }
        }
      }
    }
LABEL_36:
    v15 += 4;
  }
  while ( *((_WORD *)v15 - 4) );
  if ( !v7 )
    goto LABEL_43;
  if ( v7 <= 1 || v26 == 1 )
  {
    v3 = v33;
    v4 = v32;
LABEL_46:
    v22 = v28 != 0;
    v28 = -v28;
    *(_DWORD *)RestartScan = v22 ? v14 : 0;
    if ( v4 )
      v23 = RtlStringCbPrintfW(v10, 0x6AuLL, L"\\Device\\%s\\Partition%lu", v4, *(_QWORD *)RestartScan);
    else
      v23 = RtlStringCbPrintfW(
              v10,
              0x6AuLL,
              L"\\Device\\Harddisk%lu\\Partition%lu",
              (unsigned int)v30,
              *(_QWORD *)RestartScan);
    EspFromFirmware = v23;
    if ( v23 >= 0 )
    {
      *v3 = v10;
      goto LABEL_52;
    }
LABEL_50:
    ExFreePoolWithTag(v10, 0);
    goto LABEL_52;
  }
  EspFromFirmware = SiGetEspFromFirmware(v28, v10, 0LL, 1LL);
  if ( EspFromFirmware < 0 )
  {
    EspFromFirmware = -1073740719;
    goto LABEL_50;
  }
  *v33 = v10;
LABEL_52:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
LABEL_56:
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  return (unsigned int)EspFromFirmware;
}
