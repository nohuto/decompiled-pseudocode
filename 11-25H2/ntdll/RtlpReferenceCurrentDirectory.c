/*
 * XREFs of RtlpReferenceCurrentDirectory @ 0x1800A1730
 * Callers:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x180017680 (RtlGetFullPathName_Ustr.c)
 *     RtlpCheckForSameCurdir @ 0x1800A1460 (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x1800A1560 (RtlGetCurrentDirectory_U.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpCreateNewDirectoryReference @ 0x1800A1A30 (RtlpCreateNewDirectoryReference.c)
 *     RtlpResetDriveEnvironment @ 0x1800AB008 (RtlpResetDriveEnvironment.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwFsControlFile @ 0x180163940 (ZwFsControlFile.c)
 */

unsigned __int16 *__fastcall RtlpReferenceCurrentDirectory(char a1)
{
  unsigned __int16 *v2; // rbx
  int v3; // edi
  int v4; // ebp
  NTSTATUS v5; // eax
  char v6; // di
  __int64 v7; // rdx
  PVOID v9; // r14
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r15
  volatile signed __int32 *v11; // rcx
  _QWORD v12[2]; // [rsp+50h] [rbp-48h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-38h] BYREF
  PVOID BaseAddress; // [rsp+A8h] [rbp+10h] BYREF

  BaseAddress = 0LL;
  IoStatusBlock = 0LL;
  while ( 1 )
  {
    RtlEnterCriticalSection(&FastPebLock);
    v2 = (unsigned __int16 *)RtlpCurDirRef;
    if ( !RtlpCurDirRef )
      return 0LL;
    _InterlockedIncrement((volatile signed __int32 *)RtlpCurDirRef);
    v3 = *((_DWORD *)v2 + 4);
    RtlLeaveCriticalSection(&FastPebLock);
    if ( !a1 )
      return v2;
    v4 = MEMORY[0x7FFE02DC];
    if ( (v2[20] & 1) == 0 && MEMORY[0x7FFE02DC] == v3 )
      return v2;
    v5 = ZwFsControlFile(*((HANDLE *)v2 + 1), 0LL, 0LL, 0LL, &IoStatusBlock, 0x90028u, 0LL, 0, 0LL, 0);
    if ( v5 >= 0 )
    {
      if ( (v2[20] & 1) == 0 )
      {
        RtlEnterCriticalSection(&FastPebLock);
        *((_DWORD *)v2 + 4) = v4;
        RtlLeaveCriticalSection(&FastPebLock);
      }
      return v2;
    }
    if ( v5 != -1073741806 && v5 != -1073741202 )
      return v2;
    v6 = 0;
    if ( (int)RtlpCreateNewDirectoryReference(v2 + 12, v2[13], &BaseAddress) < 0 )
    {
      v7 = v2[13];
      v12[1] = *((_QWORD *)v2 + 4);
      v12[0] = 6LL;
      if ( (int)RtlpCreateNewDirectoryReference(v12, v7, &BaseAddress) < 0 )
        return v2;
      v6 = 1;
    }
    v9 = BaseAddress;
    ProcessParameters = NtCurrentPeb()->ProcessParameters;
    *(_DWORD *)BaseAddress = 2;
    RtlEnterCriticalSection(&FastPebLock);
    if ( RtlpCurDirRef == v2 )
      break;
    RtlLeaveCriticalSection(&FastPebLock);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
    {
      NtClose(*((HANDLE *)v2 + 1));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    }
    v11 = (volatile signed __int32 *)BaseAddress;
    *(_DWORD *)BaseAddress = 1;
    if ( _InterlockedExchangeAdd(v11, 0xFFFFFFFF) == 1 )
    {
      NtClose(*((HANDLE *)BaseAddress + 1));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    }
  }
  RtlpCurDirRef = v9;
  ProcessParameters->CurrentDirectory.DosPath.Length = *((_WORD *)v9 + 12);
  ProcessParameters->CurrentDirectory.DosPath.Buffer = (wchar_t *)*((_QWORD *)v9 + 4);
  ProcessParameters->CurrentDirectory.Handle = (void *)*((_QWORD *)v9 + 1);
  if ( v6 )
    RtlpResetDriveEnvironment(**((unsigned __int16 **)v2 + 4));
  RtlLeaveCriticalSection(&FastPebLock);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    NtClose(*((HANDLE *)v2 + 1));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 1 )
  {
    NtClose(*((HANDLE *)v2 + 1));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  }
  return (unsigned __int16 *)BaseAddress;
}
