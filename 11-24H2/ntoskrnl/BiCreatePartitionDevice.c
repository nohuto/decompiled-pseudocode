/*
 * XREFs of BiCreatePartitionDevice @ 0x140813B8C
 * Callers:
 *     BiConvertNtDeviceToBootEnvironment @ 0x140A94D38 (BiConvertNtDeviceToBootEnvironment.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     BiCreateFileDeviceElement @ 0x1408139E0 (BiCreateFileDeviceElement.c)
 *     BiCreateVhdRamdiskBootDevice @ 0x140814008 (BiCreateVhdRamdiskBootDevice.c)
 *     BiGetPartitionVhdFilePath @ 0x140A816B8 (BiGetPartitionVhdFilePath.c)
 *     BiGetDriveLayoutInformation @ 0x140A85628 (BiGetDriveLayoutInformation.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140A94D38 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiGetPhysicalDriveName @ 0x140AAF94C (BiGetPhysicalDriveName.c)
 *     BiGetPartitionInformation @ 0x140AB033C (BiGetPartitionInformation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  ULONG_PTR v18; // rdx
  _OWORD *Pool2; // rax
  _OWORD *v20; // rdi
  size_t v21; // r8
  __int128 v22; // xmm1
  int v23; // eax
  __int128 v24; // xmm0
  _DWORD *v25; // rcx
  char v27; // [rsp+38h] [rbp-D0h]
  size_t Size; // [rsp+48h] [rbp-C0h] BYREF
  void *Src; // [rsp+50h] [rbp-B8h] BYREF
  PVOID v30; // [rsp+58h] [rbp-B0h]
  PVOID P; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-A0h] BYREF
  PCWSTR SourceStringa; // [rsp+70h] [rbp-98h]
  _QWORD *v34; // [rsp+78h] [rbp-90h]
  _DWORD *v35; // [rsp+80h] [rbp-88h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v39[2]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v40; // [rsp+100h] [rbp-8h]
  __int128 v41; // [rsp+128h] [rbp+20h]
  __int128 v42; // [rsp+188h] [rbp+80h] BYREF
  __int128 v43; // [rsp+198h] [rbp+90h]
  __m256i v44; // [rsp+1A8h] [rbp+A0h]
  __int64 v45; // [rsp+1C8h] [rbp+C0h]

  v34 = a3;
  SourceStringa = SourceString;
  v5 = SourceString;
  v39[1] = 0;
  v35 = a4;
  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  memset_0(v39, 0, 0x8CuLL);
  FileHandle = 0LL;
  DestinationString = 0LL;
  Src = 0LL;
  v6 = 0LL;
  P = 0LL;
  v7 = 0LL;
  v8 = 0;
  Size = 0LL;
  v30 = 0LL;
  v27 = 0;
  memset_0(&v42, 0, 0x48uLL);
  if ( (int)BiGetDriveLayoutInformation(v5) < 0 )
  {
    PhysicalDriveName = BiGetPhysicalDriveName(v5);
    if ( PhysicalDriveName < 0 )
      goto LABEL_45;
    PhysicalDriveName = BiGetDriveLayoutInformation((PCWSTR)v30);
    if ( PhysicalDriveName < 0 )
      goto LABEL_45;
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
            goto LABEL_45;
          }
        }
      }
      if ( wcsnicmp(v7, L"\\Device\\Ramdisk{d9b257fc-684e-4dcb-ab79-03cfa2f6b750}", 0x35uLL) )
      {
        v14 = BiCreateFileDeviceElement(v7, &P, (unsigned int *)&Size);
        v6 = P;
        PhysicalDriveName = v14;
        if ( v14 < 0 )
          goto LABEL_43;
        PhysicalDriveName = BiConvertNtDeviceToBootEnvironment(P, (unsigned int)Size, 0LL, &Src);
        if ( PhysicalDriveName < 0 )
          goto LABEL_43;
      }
      else
      {
        PhysicalDriveName = BiCreateVhdRamdiskBootDevice(v7, &Src);
        if ( PhysicalDriveName < 0 )
          goto LABEL_45;
        v27 = 1;
      }
      v44.m256i_i32[0] = 6;
      v8 = *((_DWORD *)Src + 2);
      HIDWORD(Size) = v8;
    }
  }
  v15 = v7;
  if ( MEMORY[0] )
  {
    if ( MEMORY[0] != 1 )
    {
LABEL_42:
      PhysicalDriveName = -1073741811;
      goto LABEL_43;
    }
    v44.m256i_i32[1] = 0;
    *(_OWORD *)&v44.m256i_u64[1] = MEMORY[8];
  }
  else
  {
    v44.m256i_i32[2] = MEMORY[8];
    v44.m256i_i32[1] = 1;
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
      if ( !v39[0] )
      {
        *(_QWORD *)&v43 = v40;
        v16 = v43;
LABEL_28:
        v17 = v8 + 56;
        v18 = 72LL;
        if ( v17 > 0x48 )
          v18 = v17;
        Pool2 = (_OWORD *)ExAllocatePool2(0x102uLL, v18, 0x4B444342u);
        v20 = Pool2;
        if ( Pool2 )
        {
          v21 = 72LL;
          if ( v17 > 0x48 )
            v21 = v17;
          memset_0(Pool2, 0, v21);
          v22 = *(_OWORD *)&v44.m256i_u64[2];
          v23 = 72;
          LODWORD(v42) = 6;
          if ( v17 > 0x48 )
            v23 = v17;
          DWORD2(v42) = v23;
          *v20 = v42;
          v24 = *(_OWORD *)v44.m256i_i8;
          v20[1] = v16;
          v20[2] = v24;
          *(_QWORD *)&v24 = v45;
          v20[3] = v22;
          *((_QWORD *)v20 + 8) = v24;
          if ( v15 )
            memmove((char *)v20 + 56, Src, HIDWORD(Size));
          if ( v27 )
            *((_DWORD *)v20 + 1) |= 8u;
          v25 = v35;
          *v34 = v20;
          *v25 = MEMORY[4];
        }
        else
        {
          PhysicalDriveName = -1073741670;
        }
        v7 = v15;
        goto LABEL_43;
      }
      if ( v39[0] == 1 )
      {
        v16 = v41;
        goto LABEL_28;
      }
      goto LABEL_42;
    }
  }
LABEL_43:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
LABEL_45:
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x4B444342u);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)PhysicalDriveName;
}
