/*
 * XREFs of LdrAddDllDirectory @ 0x180107730
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800F5EA4 (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlDetermineDosPathNameType_U @ 0x180005BA0 (RtlDetermineDosPathNameType_U.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18006F820 (RtlpDosPathNameToRelativeNtPathName.c)
 *     _local_unwind @ 0x1801201E0 (_local_unwind.c)
 *     ZwQueryAttributesFile @ 0x1801607F0 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

NTSTATUS __cdecl LdrAddDllDirectory(PUNICODE_STRING NewDirectory, PDLL_DIRECTORY_COOKIE Cookie)
{
  RTL_PATH_TYPE v4; // eax
  int v5; // ecx
  NTSTATUS v6; // edi
  char *Heap; // rax
  char *v8; // rdi
  unsigned int v9; // edx
  _QWORD *v10; // rax
  _UNKNOWN **v11; // rcx
  _QWORD *v13; // rbx
  _DWORD v15[18]; // [rsp+0h] [rbp-D8h] BYREF
  PVOID BaseAddress[2]; // [rsp+48h] [rbp-90h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-80h] BYREF
  _DWORD *v18; // [rsp+88h] [rbp-50h]
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+90h] [rbp-48h] BYREF

  v18 = v15;
  memset(&FileInformation, 0, sizeof(FileInformation));
  *(_OWORD *)BaseAddress = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( (LdrpPolicyBits & 4) == 0 )
    return -1073741811;
  v4 = RtlDetermineDosPathNameType_U(NewDirectory->Buffer);
  if ( (unsigned int)v4 <= RtlPathTypeRelative )
  {
    v5 = 41;
    if ( _bittest(&v5, v4) )
      return -1073741811;
  }
  v6 = RtlpDosPathNameToRelativeNtPathName(
         0,
         &NewDirectory->Length,
         0LL,
         (unsigned __int16 *)BaseAddress,
         0LL,
         0LL,
         0LL);
  if ( v6 >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress[1]);
  }
  if ( v6 < 0 )
    return v6;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, NewDirectory->Length + 18LL);
  v8 = Heap;
  if ( !Heap )
    return -1073741801;
  memmove(Heap + 18, NewDirectory->Buffer, NewDirectory->Length);
  *((_WORD *)v8 + 8) = NewDirectory->Length;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  v9 = NewDirectory->Length + (unsigned __int16)word_1801CB808 + 2;
  v15[16] = v9;
  if ( v9 > 0xFFFE )
  {
    v10 = (_QWORD *)local_unwind(v18, &loc_1801078EE);
  }
  else
  {
    word_1801CB808 = v9;
    v10 = LdrpUserDllDirectories;
    v11 = &LdrpUserDllDirectories;
    if ( *((_UNKNOWN ***)LdrpUserDllDirectories + 1) != &LdrpUserDllDirectories )
      __fastfail(3u);
  }
  *(_QWORD *)v8 = v10;
  *((_QWORD *)v8 + 1) = v11;
  v10[1] = v8;
  LdrpUserDllDirectories = v8;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v13 = (_QWORD *)RtlpDllSearchPathWithOptions;
  RtlpDllSearchPathWithOptions = 0LL;
  if ( v13 )
  {
    if ( v13[10]-- != 1LL )
      v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v13 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
  *Cookie = v8;
  return 0;
}
