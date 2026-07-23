/*
 * XREFs of RamdiskStart @ 0x140C607D8
 * Callers:
 *     RamdiskInitialize @ 0x140C60778 (RamdiskInitialize.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _strupr @ 0x1404FAAD0 (_strupr.c)
 *     strstr @ 0x1404FB270 (strstr.c)
 *     _atoi64 @ 0x1404FB470 (_atoi64.c)
 *     atol @ 0x1404FB4C0 (atol.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1406A7490 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RamdiskStart(__int64 a1, __int64 a2)
{
  ULONG_PTR v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 i; // rbx
  _QWORD **v7; // rax
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rcx
  NTSTATUS Status; // ebx
  char *v11; // rax
  bool v12; // si
  __int64 v13; // rax
  char *v14; // rbx
  char *v15; // rax
  char *v16; // rax
  unsigned int v17; // eax
  char *v18; // rax
  char *v19; // rax
  GUID v20; // xmm0
  __int64 result; // rax
  HANDLE FileHandle; // [rsp+50h] [rbp-79h] BYREF
  __int128 v23; // [rsp+58h] [rbp-71h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-51h] BYREF
  int InputBuffer; // [rsp+B0h] [rbp-19h] BYREF
  GUID v27; // [rsp+B4h] [rbp-15h]
  int v28; // [rsp+C4h] [rbp-5h]
  __int64 v29; // [rsp+C8h] [rbp-1h]
  __int64 v30; // [rsp+D0h] [rbp+7h]
  unsigned int v31; // [rsp+D8h] [rbp+Fh]
  int v32; // [rsp+DCh] [rbp+13h]
  __int64 v33; // [rsp+E0h] [rbp+17h]
  __int64 v34; // [rsp+E8h] [rbp+1Fh]

  v23 = 0LL;
  memset_0(&InputBuffer, 0, 0x40uLL);
  FileHandle = 0LL;
  v4 = 1LL;
  v5 = *(_QWORD *)(a1 + 360);
  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  if ( (v5 & 1) != 0 )
  {
    if ( v5 != 1 )
    {
      i = v5 ^ ((a1 + 352) | 1);
      goto LABEL_13;
    }
LABEL_14:
    Status = -1073741811;
    goto LABEL_15;
  }
  i = v5;
  while ( 1 )
  {
LABEL_13:
    if ( !i )
      goto LABEL_14;
    if ( *(_DWORD *)(i + 24) == 25 )
      break;
    v7 = *(_QWORD ***)(i + 8);
    v8 = i;
    if ( v7 )
    {
      v9 = *v7;
      for ( i = *(_QWORD *)(i + 8); v9; v9 = (_QWORD *)*v9 )
        i = (unsigned __int64)v9;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v8 )
          break;
        v8 = i;
      }
    }
  }
  v11 = strstr(*(const char **)(a1 + 184), "vdisk(");
  InputBuffer = 64;
  v4 = 3LL;
  v12 = v11 != 0LL;
  v28 = 3;
  v29 = 0LL;
  v32 = 0;
  v34 = 0LL;
  v33 = *(_QWORD *)(i + 32);
  LODWORD(v29) = 2;
  if ( v11 )
    LODWORD(v29) = 70;
  v31 = 0;
  v27 = RamdiskBootDiskGuid;
  v13 = *(_QWORD *)(i + 40);
  v14 = *(char **)(a1 + 216);
  v30 = v13 << 12;
  if ( v14 )
  {
    strupr(v14);
    v15 = strstr(v14, "RDIMAGEOFFSET");
    if ( v15 && (v16 = strstr(v15, "=")) != 0LL )
    {
      v17 = atol(v16 + 1);
      v31 = v17;
    }
    else
    {
      v17 = v31;
    }
    v30 -= v17;
    v18 = strstr(v14, "RDIMAGELENGTH");
    if ( v18 )
    {
      v19 = strstr(v18, "=");
      if ( v19 )
        v30 = atoi64(v19 + 1);
    }
  }
  ObjectAttributes.RootDirectory = 0LL;
  *((_QWORD *)&v23 + 1) = L"\\Device\\Ramdisk";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v23;
  LODWORD(v23) = 2097182;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( Status < 0 || (Status = IoStatusBlock.Status, IoStatusBlock.Status < 0) )
  {
    v4 = 2LL;
    goto LABEL_15;
  }
  Status = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x240000u, &InputBuffer, 0x40u, 0LL, 0);
  ZwClose(FileHandle);
  if ( Status < 0 || (Status = IoStatusBlock.Status, IoStatusBlock.Status < 0) )
LABEL_15:
    KeBugCheckEx(0xF8u, v4, Status, 0LL, 0LL);
  v20 = v27;
  *(_BYTE *)(a2 + 16) = v12;
  result = 0LL;
  *(GUID *)a2 = v20;
  return result;
}
