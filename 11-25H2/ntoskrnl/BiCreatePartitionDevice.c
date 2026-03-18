/*
 * XREFs of BiCreatePartitionDevice @ 0x1408038D4
 * Callers:
 *     BiConvertNtDeviceToBootEnvironment @ 0x140A5CCE8 (BiConvertNtDeviceToBootEnvironment.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x1404FBD70 (_wcsnicmp.c)
 *     wcschr @ 0x1404FD610 (wcschr.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenFile @ 0x14069B7A0 (ZwOpenFile.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     BiCreateFileDeviceElement @ 0x140803728 (BiCreateFileDeviceElement.c)
 *     BiCreateVhdRamdiskBootDevice @ 0x140803D50 (BiCreateVhdRamdiskBootDevice.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140A5CCE8 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiGetPartitionVhdFilePath @ 0x140A82374 (BiGetPartitionVhdFilePath.c)
 *     BiGetDriveLayoutInformation @ 0x140A84604 (BiGetDriveLayoutInformation.c)
 *     BiGetPhysicalDriveName @ 0x140AB04CC (BiGetPhysicalDriveName.c)
 *     BiGetPartitionInformation @ 0x140AB11AC (BiGetPartitionInformation.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiCreatePartitionDevice(PCWSTR SourceString, char a2, _QWORD *a3, _DWORD *a4)
{
  const WCHAR *v5; // rbx
  PVOID v6; // r13
  WCHAR *v7; // rdi
  int v8; // r15d
  NTSTATUS PhysicalDriveName; // ebx
  const wchar_t *PartitionVhdFilePath; // rax
  wchar_t *v11; // rax
  wchar_t *v12; // rbx
  void *v13; // rax
  int v14; // eax
  WCHAR *v15; // r14
  __int128 v16; // xmm6
  unsigned int v17; // r15d
  _OWORD *Pool2; // rax
  _OWORD *v19; // rdi
  size_t v20; // r8
  __int128 v21; // xmm1
  int v22; // eax
  __int128 v23; // xmm0
  _DWORD *v24; // rcx
  char v26; // [rsp+38h] [rbp-D0h]
  size_t Size; // [rsp+48h] [rbp-C0h] BYREF
  void *Src; // [rsp+50h] [rbp-B8h] BYREF
  PVOID v29; // [rsp+58h] [rbp-B0h]
  PVOID P; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-A0h] BYREF
  PCWSTR SourceStringa; // [rsp+70h] [rbp-98h]
  _QWORD *v33; // [rsp+78h] [rbp-90h]
  _DWORD *v34; // [rsp+80h] [rbp-88h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v38[2]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v39; // [rsp+100h] [rbp-8h]
  __int128 v40; // [rsp+128h] [rbp+20h]
  __int128 v41; // [rsp+188h] [rbp+80h] BYREF
  __int128 v42; // [rsp+198h] [rbp+90h]
  __m256i v43; // [rsp+1A8h] [rbp+A0h]
  __int64 v44; // [rsp+1C8h] [rbp+C0h]

  v33 = a3;
  SourceStringa = SourceString;
  v5 = SourceString;
  v38[1] = 0;
  v34 = a4;
  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  memset_0(v38, 0, 0x8CuLL);
  FileHandle = 0LL;
  DestinationString = 0LL;
  Src = 0LL;
  v6 = 0LL;
  P = 0LL;
  v7 = 0LL;
  v8 = 0;
  Size = 0LL;
  v29 = 0LL;
  v26 = 0;
  memset_0(&v41, 0, 0x48uLL);
  if ( (int)BiGetDriveLayoutInformation(v5) < 0 )
  {
    PhysicalDriveName = BiGetPhysicalDriveName(v5);
    if ( PhysicalDriveName < 0 )
      goto LABEL_43;
    PhysicalDriveName = BiGetDriveLayoutInformation((PCWSTR)v29);
    if ( PhysicalDriveName < 0 )
      goto LABEL_43;
    v5 = SourceStringa;
  }
  if ( (a2 & 0x40) == 0 )
  {
    PartitionVhdFilePath = (const wchar_t *)BiGetPartitionVhdFilePath(v5);
    v7 = (WCHAR *)PartitionVhdFilePath;
    if ( PartitionVhdFilePath )
    {
      if ( !wcsnicmp(PartitionVhdFilePath, L"\\Device\\HarddiskVolume", 0x16uLL) )
      {
        v11 = wcschr(v7 + 22, 0x5Cu);
        v12 = v11;
        if ( v11 )
        {
          *v11 = 0;
          v13 = (void *)BiGetPartitionVhdFilePath(v7);
          *v12 = 92;
          if ( v13 )
          {
            ExFreePoolWithTag(v13, 0x4B444342u);
            PhysicalDriveName = -1073741637;
            goto LABEL_43;
          }
        }
      }
      if ( wcsnicmp(v7, L"\\Device\\Ramdisk{d9b257fc-684e-4dcb-ab79-03cfa2f6b750}", 0x35uLL) )
      {
        v14 = BiCreateFileDeviceElement(v7, &P, (unsigned int *)&Size);
        v6 = P;
        PhysicalDriveName = v14;
        if ( v14 < 0 )
          goto LABEL_41;
        PhysicalDriveName = BiConvertNtDeviceToBootEnvironment(P, (unsigned int)Size, 0LL, &Src);
        if ( PhysicalDriveName < 0 )
          goto LABEL_41;
      }
      else
      {
        PhysicalDriveName = BiCreateVhdRamdiskBootDevice(v7, &Src);
        if ( PhysicalDriveName < 0 )
          goto LABEL_43;
        v26 = 1;
      }
      v43.m256i_i32[0] = 6;
      v8 = *((_DWORD *)Src + 2);
      HIDWORD(Size) = v8;
    }
  }
  v15 = v7;
  if ( MEMORY[0] )
  {
    if ( MEMORY[0] != 1 )
    {
LABEL_40:
      PhysicalDriveName = -1073741811;
      goto LABEL_41;
    }
    v43.m256i_i32[1] = 0;
    *(_OWORD *)&v43.m256i_u64[1] = MEMORY[8];
  }
  else
  {
    v43.m256i_i32[2] = MEMORY[8];
    v43.m256i_i32[1] = 1;
  }
  RtlInitUnicodeString(&DestinationString, SourceStringa);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  PhysicalDriveName = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( PhysicalDriveName >= 0 )
  {
    PhysicalDriveName = BiGetPartitionInformation(FileHandle);
    if ( PhysicalDriveName >= 0 )
    {
      if ( !v38[0] )
      {
        *(_QWORD *)&v42 = v39;
        v16 = v42;
LABEL_28:
        v17 = v8 + 56;
        Pool2 = (_OWORD *)ExAllocatePool2(0x102uLL);
        v19 = Pool2;
        if ( Pool2 )
        {
          v20 = 72LL;
          if ( v17 > 0x48 )
            v20 = v17;
          memset_0(Pool2, 0, v20);
          v21 = *(_OWORD *)&v43.m256i_u64[2];
          v22 = 72;
          LODWORD(v41) = 6;
          if ( v17 > 0x48 )
            v22 = v17;
          DWORD2(v41) = v22;
          *v19 = v41;
          v23 = *(_OWORD *)v43.m256i_i8;
          v19[1] = v16;
          v19[2] = v23;
          *(_QWORD *)&v23 = v44;
          v19[3] = v21;
          *((_QWORD *)v19 + 8) = v23;
          if ( v15 )
            memmove((char *)v19 + 56, Src, HIDWORD(Size));
          if ( v26 )
            *((_DWORD *)v19 + 1) |= 8u;
          v24 = v34;
          *v33 = v19;
          *v24 = MEMORY[4];
        }
        else
        {
          PhysicalDriveName = -1073741670;
        }
        v7 = v15;
        goto LABEL_41;
      }
      if ( v38[0] == 1 )
      {
        v16 = v40;
        goto LABEL_28;
      }
      goto LABEL_40;
    }
  }
LABEL_41:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
LABEL_43:
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4B444342u);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)PhysicalDriveName;
}
