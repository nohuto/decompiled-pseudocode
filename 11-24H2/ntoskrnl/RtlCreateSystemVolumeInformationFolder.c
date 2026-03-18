/*
 * XREFs of RtlCreateSystemVolumeInformationFolder @ 0x1407837C0
 * Callers:
 *     DifRtlCreateSystemVolumeInformationFolderWrapper @ 0x140639650 (DifRtlCreateSystemVolumeInformationFolderWrapper.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140783AD4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x140783E04 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolTakeOwnership @ 0x140783F78 (RtlpSysVolTakeOwnership.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     IopCreateFile @ 0x14096CD60 (IopCreateFile.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlCreateSystemVolumeInformationFolder(PCUNICODE_STRING VolumeRootPath)
{
  unsigned int Length; // eax
  size_t v3; // rdi
  unsigned __int16 v4; // dx
  wchar_t v5; // si
  void *Pool2; // rax
  unsigned int v8; // eax
  NTSTATUS File; // ebx
  PVOID v10; // rcx
  PVOID v11; // rdi
  PVOID P[2]; // [rsp+80h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-19h] BYREF
  int v14[4]; // [rsp+A0h] [rbp-9h] BYREF
  int v15[2]; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+Fh]
  PVOID *v17; // [rsp+C0h] [rbp+17h]
  int v18; // [rsp+C8h] [rbp+1Fh]
  int v19; // [rsp+CCh] [rbp+23h]
  PVOID v20; // [rsp+D0h] [rbp+27h]
  __int64 v21; // [rsp+D8h] [rbp+2Fh]
  HANDLE Handle; // [rsp+110h] [rbp+67h] BYREF
  PVOID v23; // [rsp+118h] [rbp+6Fh] BYREF
  PVOID v24; // [rsp+120h] [rbp+77h] BYREF

  v24 = 0LL;
  v23 = 0LL;
  v15[1] = 0;
  v19 = 0;
  DestinationString = 0LL;
  Handle = 0LL;
  *(_OWORD *)P = 0LL;
  *(_OWORD *)v14 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"System Volume Information");
  Length = VolumeRootPath->Length;
  v3 = DestinationString.Length;
  v4 = DestinationString.Length + Length;
  LOWORD(P[0]) = DestinationString.Length + Length;
  if ( (unsigned __int16)(DestinationString.Length + Length) < (unsigned __int16)Length || v4 < DestinationString.Length )
    return -1073741811;
  v5 = VolumeRootPath->Buffer[((unsigned __int64)Length >> 1) - 1];
  if ( v5 != 92 )
  {
    v4 += 2;
    LOWORD(P[0]) = v4;
  }
  WORD1(P[0]) = v4 + 2;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  P[1] = Pool2;
  if ( !Pool2 )
    return -1073741670;
  memmove(Pool2, VolumeRootPath->Buffer, VolumeRootPath->Length);
  v8 = VolumeRootPath->Length;
  LOWORD(P[0]) = VolumeRootPath->Length;
  if ( v5 != 92 )
  {
    *((_WORD *)P[1] + ((unsigned __int64)v8 >> 1)) = 92;
    LOWORD(v8) = LOWORD(P[0]) + 2;
    LOWORD(P[0]) += 2;
  }
  memmove((char *)P[1] + (unsigned __int16)v8, DestinationString.Buffer, v3);
  LOWORD(P[0]) += v3;
  *((_WORD *)P[1] + ((unsigned __int64)LOWORD(P[0]) >> 1)) = 0;
  File = RtlpSysVolCreateSecurityDescriptor(&v24, &v23);
  if ( File >= 0 )
  {
    v11 = v24;
    v15[0] = 48;
    v16 = 0LL;
    v18 = 576;
    v17 = P;
    v20 = v24;
    v21 = 0LL;
    if ( (int)IopCreateFile(
                (int)&Handle,
                0x10000,
                (int)v15,
                (int)v14,
                0LL,
                0,
                7,
                1,
                2101344,
                0LL,
                0,
                0,
                0LL,
                0,
                32,
                0LL) >= 0 )
      NtClose(Handle);
    File = IopCreateFile((int)&Handle, 1966080, (int)v15, (int)v14, 0LL, 6, 7, 3, 33, 0LL, 0, 0, 0LL, 0, 32, 0LL);
    if ( File < 0 )
    {
      RtlpSysVolTakeOwnership(P);
      File = IopCreateFile((int)&Handle, 1966080, (int)v15, (int)v14, 0LL, 6, 7, 3, 33, 0LL, 0, 0, 0LL, 0, 32, 0LL);
    }
    ExFreePoolWithTag(P[1], 0);
    if ( File >= 0 )
    {
      ExFreePoolWithTag(v11, 0);
      File = RtlpSysVolCheckOwnerAndSecurity(Handle, (PACL)v23);
      NtClose(Handle);
      v10 = v23;
    }
    else
    {
      ExFreePoolWithTag(v23, 0);
      v10 = v11;
    }
  }
  else
  {
    v10 = P[1];
  }
  ExFreePoolWithTag(v10, 0);
  return File;
}
