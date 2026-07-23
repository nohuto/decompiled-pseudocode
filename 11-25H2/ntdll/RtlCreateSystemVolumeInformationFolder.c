/*
 * XREFs of RtlCreateSystemVolumeInformationFolder @ 0x1800665D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800663F4 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolAllocate @ 0x180066560 (RtlpSysVolAllocate.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800668AC (RtlpSysVolCheckOwnerAndSecurity.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     RtlpSysVolTakeOwnership @ 0x1801459E0 (RtlpSysVolTakeOwnership.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwCreateFile @ 0x180163CC0 (ZwCreateFile.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlCreateSystemVolumeInformationFolder(unsigned __int16 *a1)
{
  size_t v2; // rax
  unsigned __int16 v3; // bx
  unsigned __int16 v4; // dx
  __int16 v5; // si
  PVOID v6; // rax
  unsigned __int64 v7; // rax
  int v8; // ebx
  __int16 *v9; // rdi
  ACL *v10; // rcx
  __int128 v12; // [rsp+60h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  HANDLE FileHandle; // [rsp+E0h] [rbp+67h] BYREF
  ACL *v16; // [rsp+E8h] [rbp+6Fh] BYREF
  __int16 *v17; // [rsp+F0h] [rbp+77h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  v12 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  v2 = wcslen(L"System Volume Information");
  v3 = 2 * v2;
  if ( 2 * v2 >= 0xFFFE )
    v3 = -4;
  v4 = v3 + *a1;
  LOWORD(v12) = v4;
  if ( v4 < *a1 || v4 < v3 )
    return 3221225485LL;
  v5 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1) - 2);
  if ( v5 != 92 )
  {
    v4 += 2;
    LOWORD(v12) = v4;
  }
  WORD1(v12) = v4 + 2;
  v6 = RtlpSysVolAllocate((unsigned __int16)(v4 + 2));
  *((_QWORD *)&v12 + 1) = v6;
  if ( !v6 )
    return 3221225626LL;
  memmove(v6, *((const void **)a1 + 1), *a1);
  v7 = *a1;
  LOWORD(v12) = *a1;
  if ( v5 != 92 )
  {
    *(_WORD *)(*((_QWORD *)&v12 + 1) + 2 * (v7 >> 1)) = 92;
    LOWORD(v7) = v12 + 2;
    LOWORD(v12) = v12 + 2;
  }
  memmove((void *)(*((_QWORD *)&v12 + 1) + (unsigned __int16)v7), L"System Volume Information", v3);
  LOWORD(v12) = v3 + v12;
  *(_WORD *)(*((_QWORD *)&v12 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v12 >> 1)) = 0;
  v8 = RtlpSysVolCreateSecurityDescriptor(&v17, &v16);
  if ( v8 < 0 )
  {
    v10 = (ACL *)*((_QWORD *)&v12 + 1);
  }
  else
  {
    v9 = v17;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
    ObjectAttributes.SecurityDescriptor = v17;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    if ( ZwCreateFile(&FileHandle, 0x10000u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x201060u, 0LL, 0) >= 0 )
      NtClose(FileHandle);
    v8 = ZwCreateFile(&FileHandle, 0x1E0000u, &ObjectAttributes, &IoStatusBlock, 0LL, 6u, 7u, 3u, 0x21u, 0LL, 0);
    if ( v8 < 0 )
    {
      RtlpSysVolTakeOwnership(&v12);
      v8 = ZwCreateFile(&FileHandle, 0x1E0000u, &ObjectAttributes, &IoStatusBlock, 0LL, 6u, 7u, 3u, 0x21u, 0LL, 0);
    }
    RtlpSysVolFree(*((void **)&v12 + 1));
    if ( v8 < 0 )
    {
      RtlpSysVolFree(v16);
      v10 = (ACL *)v9;
    }
    else
    {
      RtlpSysVolFree(v9);
      v8 = RtlpSysVolCheckOwnerAndSecurity(FileHandle);
      NtClose(FileHandle);
      v10 = v16;
    }
  }
  RtlpSysVolFree(v10);
  return (unsigned int)v8;
}
