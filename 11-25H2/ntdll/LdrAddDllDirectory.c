/*
 * XREFs of LdrAddDllDirectory @ 0x18010EA40
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800FD1A4 (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlDetermineDosPathNameType_U @ 0x1800AC080 (RtlDetermineDosPathNameType_U.c)
 *     _local_unwind @ 0x180123A90 (_local_unwind.c)
 *     ZwQueryAttributesFile @ 0x1801639C0 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
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
  v9 = NewDirectory->Length + (unsigned __int16)word_1801CE808 + 2;
  v15[16] = v9;
  if ( v9 > 0xFFFE )
  {
    v10 = (_QWORD *)local_unwind(v18, &loc_18010EBFE);
  }
  else
  {
    word_1801CE808 = v9;
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
